#include "include/Quantity/Quantity.hpp"

#include <iostream>
#include <typeinfo>

using namespace physics;

int main(int argc, char **argv)
{
    quantity::electric_current test1{99.0};

    std::cout << typeid(test1).name() << '\n';
    std::cout << test1.value << '\n';

    return 0;
}