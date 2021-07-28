/* Copyright (C) 2021 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/visual-studio-compatibility
 */

#pragma once

class string final
{
public:
    string(const char* _c = nullptr);

private:
    const char* c;
};

class class_110 final
{
public:
    class_110();

    void add_string(const string& _s);
    void do_something();

private:
    string s;
};

