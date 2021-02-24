/* Copyright (C) 2020 - 2021 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/visual-studio-compatibility
 */

#pragma once

#include "export.h"
#include <vector>
#include <string>

class API export_class_110 final
{
public:
	typedef std::vector<std::string> string_list_t;
	export_class_110();
	~export_class_110();
	
	string_list_t get_string_list() const;

	static export_class_110* create();
	
	static void destroy(export_class_110* ptr);

	static void fill(string_list_t& list);
};

