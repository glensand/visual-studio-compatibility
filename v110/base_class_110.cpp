#include "base_class_110.h"

base_class_110::base_class_110() {
    str = "ultimately long test string for memory corruption";
    for (std::size_t i = 0 ; i < 100; ++i)
        vec.push_back(str);
}

//base_class_110::~base_class_110() {
//    for (auto&& f : fun)
//        f();
//}

void base_class_110::add_fun(const std::function<void()>& f) {
    fun.push_back(f);
}
