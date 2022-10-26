#include "include/Quantity/Quantity.hpp"
#include "libs/Utility/Utility.hpp"

#include <iostream>
#include <typeinfo>

using namespace physics;

quantity::velocity instantaneous_velocity(quantity::acceleraton a,
                                          quantity::time t)
{
    return a * t;
}

auto get()
{
    return unit::meter<1> / unit::second<1>;
}

int main(int argc, char **argv)
{
    // auto test1 = 99.9e24_lx;
    // auto test2 = 99.9_kat;
    auto test3 = instantaneous_velocity(10.0_mps2, 5.0_s);

    std::cout << utility::demangled_type_name<decltype(test3)>() << '\n';
    std::cout << test3.value << '\n';

    return 0;
}