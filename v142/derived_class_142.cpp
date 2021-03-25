#include "derived_class_142.h"
#include <iostream>

derived_class_142::derived_class_142() {
    one_more_string = "ultimately long test string for memory corruption";

    // invalid code
    //add_fun([=] { std::cout << one_more_string << std::endl; });
    //add_fun([=]
    //{
    //        for (auto&& str : vec)
    //            std::cout << str << std::endl;
    //});
}
