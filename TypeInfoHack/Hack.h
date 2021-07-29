#pragma once

#include <vcruntime.h>

#ifdef  MYDLL_EXPORTS 
#define API __declspec(dllexport)  
#else
#define API __declspec(dllimport)  
#endif


#include <vcruntime.h>

#include <vcruntime_exception.h>

#pragma warning(push)
#pragma warning(disable: _VCRUNTIME_DISABLED_WARNINGS)

#if defined _M_CEE_MIXED && !defined _VCRT_BUILD
// Provide a fake definition of __type_info_node to suppress linker warning
// LNK4248: unresolved typeref token for '__type_info_node'; image may not run.
struct __type_info_node { };
#else
struct __type_info_node;
#endif

#ifdef _M_CEE_PURE
extern System::IntPtr __type_info_root_node;
#else
extern __type_info_node __type_info_root_node;
#endif


_CRT_BEGIN_C_HEADER

struct __std_type_info_data
{
    const char* _UndecoratedName;
    const char   _DecoratedName[1];
    __std_type_info_data() = delete;
    __std_type_info_data(const __std_type_info_data&) = delete;
    __std_type_info_data(__std_type_info_data&&) = delete;

    __std_type_info_data& operator=(const __std_type_info_data&) = delete;
    __std_type_info_data& operator=(__std_type_info_data&&) = delete;
};

_VCRTIMP int __cdecl __std_type_info_compare(
    _In_ const __std_type_info_data* _Lhs,
    _In_ const __std_type_info_data* _Rhs
);

_VCRTIMP size_t __cdecl __std_type_info_hash(
    _In_ const __std_type_info_data* _Data
);

_VCRTIMP const char* __cdecl __std_type_info_name(
    _Inout_ __std_type_info_data* _Data,
    _Inout_ __type_info_node* _RootNode
);

_CRT_END_C_HEADER

class API type_info
{
public:

    type_info(const type_info&) = delete;
    type_info& operator=(const type_info&) = delete;

    size_t hash_code() const noexcept;

    bool operator==(const type_info& _Other) const noexcept;

    bool operator!=(const type_info& _Other) const noexcept;

    bool before(const type_info& _Other) const noexcept;

    const char* name() const;

    const char* name(__type_info_node*) const;

    const char* raw_name() const;

    virtual ~type_info() noexcept;

private:

    mutable __std_type_info_data _Data;
};