#ifndef PHYSICS_QUANTITY_DEFS_HPP
#define PHYSICS_QUANTITY_DEFS_HPP

#include "../Config.hpp"
#include "QuantityBase.hpp"

namespace physics::quantity
{
    typedef details::_quantity_base<decltype(unit::none)> scalar;

    // 7 base quantities
    typedef details::_quantity_base<decltype(unit::second<1>)> time;
    typedef details::_quantity_base<decltype(unit::meter<1>)> length;
    typedef details::_quantity_base<decltype(unit::kilogram<1>)> mass;
    typedef details::_quantity_base<decltype(unit::ampere<1>)> e_current;
    typedef details::_quantity_base<decltype(unit::kelvin<1>)> temperature;
    typedef details::_quantity_base<decltype(unit::mole<1>)> a_substance;
    typedef details::_quantity_base<decltype(unit::candela<1>)> l_intensity;

    // derived quantities
    typedef details::_quantity_base<decltype(unit::newton)> force;
    typedef details::_quantity_base<decltype(unit::joule)> energy;

} // namespace physics::quantity

#endif // PHYSICS_QUANTITY_DEFS_HPP