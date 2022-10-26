#include "include/Quantity/Quantity.hpp"

#include <iostream>
#include <typeinfo>

using namespace physics;

int main(int argc, char **argv)
{
    auto test1 = 10.0_J;

    std::cout << typeid(test1).name() << '\n';
    std::cout << test1.value << '\n';

    return 0;
}