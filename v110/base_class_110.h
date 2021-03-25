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
#include <functional>

class base_class_110 {
public:
	API base_class_110();
	virtual API ~base_class_110();

	void API add_fun(const std::function<void()>& f);
protected:
	std::vector<std::string> vec;
private:
	std::string str;
	std::vector<std::function<void()>> fun;
};

