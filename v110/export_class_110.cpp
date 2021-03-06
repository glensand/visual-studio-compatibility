/* Copyright (C) 2021 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/visual-studio-compatibility
 */

#include "export_class_110.h"
#include <iostream>

export_class_110::export_class_110() {

}


export_class_110::~export_class_110() {

}

export_class_110::string_list_t export_class_110::get_string_list() const {
	string_list_t rValue;
	rValue.emplace_back("test_string1");
	rValue.emplace_back("ultra long test string for memory corruption");
	rValue.emplace_back("ultimately long test string for memory corruption");
	return rValue;
}

export_class_110* export_class_110::create() {
	return new export_class_110;
}

void export_class_110::destroy(export_class_110* ptr) {
	delete ptr;
}

void export_class_110::fill(string_list_t& list) {
	list.emplace_back("test_string1");
	list.emplace_back("ultra long test string for memory corruption");
	list.emplace_back("ultimately long test string for memory corruption");
}
