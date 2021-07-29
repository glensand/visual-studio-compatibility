/* Copyright (C) 2021 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/visual-studio-compatibility
 */

#include "Hack.h"

#pragma warning(push)
#pragma warning(disable: 4577) // 'noexcept' used with no exception handling mode specified

size_t type_info::hash_code() const noexcept
{
    return __std_type_info_hash(&_Data);
}

bool type_info::operator==(const type_info& _Other) const noexcept
{
    return __std_type_info_compare(&_Data, &_Other._Data) == 0;
}

bool type_info::operator!=(const type_info& _Other) const noexcept
{
    return __std_type_info_compare(&_Data, &_Other._Data) != 0;
}

bool type_info::before(const type_info& _Other) const noexcept
{
    return __std_type_info_compare(&_Data, &_Other._Data) < 0;
}

const char* type_info::name() const
{
#ifdef _M_CEE_PURE
    return __std_type_info_name(&_Data, static_cast<__type_info_node*>(__type_info_root_node.ToPointer()));
#else
    return __std_type_info_name(&_Data, &__type_info_root_node);
#endif
}

const char* type_info::name(__type_info_node*) const
{
#ifdef _M_CEE_PURE
    return __std_type_info_name(&_Data, static_cast<__type_info_node*>(__type_info_root_node.ToPointer()));
#else
    return __std_type_info_name(&_Data, &__type_info_root_node);
#endif
}

const char* type_info::raw_name() const
{
    return _Data._DecoratedName;
}
