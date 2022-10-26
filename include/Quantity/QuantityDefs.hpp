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

    typedef details::_quantity_base<decltype(unit::ampere<1>)> electric_current;

    typedef details::_quantity_base<decltype(unit::kelvin<1>)> temperature;

    typedef details::_quantity_base<decltype(unit::mole<1>)> amount_of_substance;

    typedef details::_quantity_base<decltype(unit::candela<1>)> luminous_intensity;


    // derived quantities
    typedef details::_quantity_base<decltype(unit::radian)> angle; //

    typedef details::_quantity_base<decltype(unit::hertz)> frequency; //

    typedef details::_quantity_base<decltype(unit::newton)> force;
    typedef details::_quantity_base<decltype(unit::newton)> weight;

    typedef details::_quantity_base<decltype(unit::pascal)> pressure;
    typedef details::_quantity_base<decltype(unit::pascal)> stress;

    typedef details::_quantity_base<decltype(unit::joule)> energy;
    typedef details::_quantity_base<decltype(unit::joule)> work;
    typedef details::_quantity_base<decltype(unit::joule)> heat;

    typedef details::_quantity_base<decltype(unit::watt)> power;
    typedef details::_quantity_base<decltype(unit::watt)> radiant_flux;

    typedef details::_quantity_base<decltype(unit::coulomb)> electric_charge;

    typedef details::_quantity_base<decltype(unit::volt)> electric_potential;
    typedef details::_quantity_base<decltype(unit::volt)> voltage;
    typedef details::_quantity_base<decltype(unit::volt)> emf;

    typedef details::_quantity_base<decltype(unit::farad)> capacitance;

    typedef details::_quantity_base<decltype(unit::ohm)> resistance;
    typedef details::_quantity_base<decltype(unit::ohm)> impedancee;
    typedef details::_quantity_base<decltype(unit::ohm)> reactance;

    typedef details::_quantity_base<decltype(unit::siemens)> electric_conductance;

    typedef details::_quantity_base<decltype(unit::weber)> magnetic_flux;

    typedef details::_quantity_base<decltype(unit::tesla)> magnetic_flux_density;

    typedef details::_quantity_base<decltype(unit::henry)> inductance;

    typedef details::_quantity_base<decltype(unit::celcius)> temperature_celcius; //

    typedef details::_quantity_base<decltype(unit::becquerel)> radioactive_decay_rate; // + name

    typedef details::_quantity_base<decltype(unit::gray)> absorbed_dose;

    typedef details::_quantity_base<decltype(unit::sievert)> equivaleent_dose;

    typedef details::_quantity_base<decltype(unit::katal)> catalytic_activity;

    typedef details::_quantity_base<decltype(unit::lumen)> luminous_flux;

    typedef details::_quantity_base<decltype(unit::lux)> illuminance;

} // namespace physics::quantity

#endif // PHYSICS_QUANTITY_DEFS_HPP