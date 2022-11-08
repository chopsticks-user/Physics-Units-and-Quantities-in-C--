#ifndef PHYSICS_CONSTANT_HPP
#define PHYSICS_CONSTANT_HPP

#include "../Config.hpp"

#if __cplusplus >= 201402L
#include "../Quantity/Quantity.hpp"

namespace physics::constant
{
    const quantity::details::_quantity_base<
        decltype(unit::second<-4> * unit::meter<3> * unit::kilogram<1> * unit::ampere<-2>)>
        coulomb_constant{8.988e9};

} // namespace physics::constant
#endif // c++14

#endif // PHYSICS_CONSTANT_HPP