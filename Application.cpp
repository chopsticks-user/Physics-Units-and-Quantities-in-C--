// #include <Physics.hpp>
// #include <Utility.hpp>

#include "Test1.hpp"
#include "Test2.hpp"

#include <iostream>
#include <typeinfo>

using namespace physics;

int main(int argc, char **argv)
{
    auto r = 10.0_m / 5.0_s;

    std::cout << r.value << '\n';

    print1();
    print3();
    print2();

    return 0;
}