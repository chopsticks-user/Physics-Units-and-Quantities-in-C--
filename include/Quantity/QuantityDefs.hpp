#ifndef PHYSICS_QUANTITY_DEFS_HPP
#define PHYSICS_QUANTITY_DEFS_HPP

#include "../Config.hpp"
#include "QuantityBase.hpp"

#ifdef ENABLE_PHYSICS_DEFINE_QUANTITY_MACROS
#include "../MacroUtils.hpp"
#endif
namespace physics::quantity
{
#ifndef ENABLE_PHYSICS_DEFINE_QUANTITY_MACROS
    typedef details::_quantity_base<decltype(unit::none)> scalar;

    // 7 base quantities

    typedef details::_quantity_base<decltype(unit::second<1>)::type> time;

    typedef details::_quantity_base<decltype(unit::meter<1>)::type> length;

    typedef details::_quantity_base<decltype(unit::kilogram<1>)::type> mass;

    typedef details::_quantity_base<decltype(unit::ampere<1>)::type> electric_current;

    typedef details::_quantity_base<decltype(unit::kelvin<1>)::type> temperature;

    typedef details::_quantity_base<decltype(unit::mole<1>)::type> amount_of_substance;

    typedef details::_quantity_base<decltype(unit::candela<1>)::type> luminous_intensity;

    // quantities with a derived unit

    typedef details::_quantity_base<decltype(unit::radian)::type> angle; //

    typedef details::_quantity_base<decltype(unit::hertz)::type> frequency; //

    typedef details::_quantity_base<decltype(unit::newton)::type> force;
    typedef details::_quantity_base<decltype(unit::newton)::type> weight;

    typedef details::_quantity_base<decltype(unit::pascal)::type> pressure;
    typedef details::_quantity_base<decltype(unit::pascal)::type> stress;

    typedef details::_quantity_base<decltype(unit::joule)::type> energy;
    typedef details::_quantity_base<decltype(unit::joule)::type> work;
    typedef details::_quantity_base<decltype(unit::joule)::type> heat;

    typedef details::_quantity_base<decltype(unit::watt)::type> power;
    typedef details::_quantity_base<decltype(unit::watt)::type> radiant_flux;

    typedef details::_quantity_base<decltype(unit::coulomb)::type> electric_charge;

    typedef details::_quantity_base<decltype(unit::volt)::type> voltage;
    typedef details::_quantity_base<decltype(unit::volt)::type> electric_potential;
    typedef details::_quantity_base<decltype(unit::volt)::type> emf;

    typedef details::_quantity_base<decltype(unit::farad)::type> capacitance;

    typedef details::_quantity_base<decltype(unit::ohm)::type> resistance;
    typedef details::_quantity_base<decltype(unit::ohm)::type> impedancee;
    typedef details::_quantity_base<decltype(unit::ohm)::type> reactance;

    typedef details::_quantity_base<decltype(unit::siemens)::type> electric_conductance;

    typedef details::_quantity_base<decltype(unit::weber)::type> magnetic_flux;

    typedef details::_quantity_base<decltype(unit::tesla)::type> magnetic_flux_density;

    typedef details::_quantity_base<decltype(unit::henry)::type> inductance;

    typedef details::_quantity_base<decltype(unit::celcius)::type> temperature_celcius; //

    typedef details::_quantity_base<decltype(unit::becquerel)::type> radioactive_decay_rate; // + name

    typedef details::_quantity_base<decltype(unit::gray)::type> absorbed_dose;

    typedef details::_quantity_base<decltype(unit::sievert)::type> equivalent_dose;

    typedef details::_quantity_base<decltype(unit::katal)::type> catalytic_activity;

    typedef details::_quantity_base<decltype(unit::lumen)::type> luminous_flux;

    typedef details::_quantity_base<decltype(unit::lux)::type> illuminance;

    // quantities with a coherent derived unit

    typedef details::_quantity_base<decltype(unit::square_meter)::type> area;

    typedef details::_quantity_base<decltype(unit::cubic_meter)::type> volume;

    typedef details::_quantity_base<decltype(unit::meter_per_second)::type> velocity;
    typedef details::_quantity_base<decltype(unit::meter_per_second)::type> speed;

    typedef details::_quantity_base<decltype(unit::meter_per_second_squared)::type>
        acceleraton;
#else
    typedef details::_quantity_base<decltype(unit::none)> scalar;

    // 7 base quantities

    typedef details::_quantity_base<decltype(unit::second<1>)::type> time;

    typedef details::_quantity_base<decltype(unit::meter<1>)::type> length;

    typedef details::_quantity_base<decltype(unit::kilogram<1>)::type> mass;

    typedef details::_quantity_base<decltype(unit::ampere<1>)::type> electric_current;

    typedef details::_quantity_base<decltype(unit::kelvin<1>)::type> temperature;

    typedef details::_quantity_base<decltype(unit::mole<1>)::type> amount_of_substance;

    typedef details::_quantity_base<decltype(unit::candela<1>)::type> luminous_intensity;

    // quantities with a derived unit

    typedef details::_quantity_base<decltype(unit::radian)::type> angle; //

    typedef details::_quantity_base<decltype(unit::hertz)::type> frequency; //

    typedef details::_quantity_base<decltype(unit::newton)::type> force;
    typedef details::_quantity_base<decltype(unit::newton)::type> weight;

    typedef details::_quantity_base<decltype(unit::pascal)::type> pressure;
    typedef details::_quantity_base<decltype(unit::pascal)::type> stress;

    typedef details::_quantity_base<decltype(unit::joule)::type> energy;
    typedef details::_quantity_base<decltype(unit::joule)::type> work;
    typedef details::_quantity_base<decltype(unit::joule)::type> heat;

    typedef details::_quantity_base<decltype(unit::watt)::type> power;
    typedef details::_quantity_base<decltype(unit::watt)::type> radiant_flux;

    typedef details::_quantity_base<decltype(unit::coulomb)::type> electric_charge;

    typedef details::_quantity_base<decltype(unit::volt)::type> voltage;
    typedef details::_quantity_base<decltype(unit::volt)::type> electric_potential;
    typedef details::_quantity_base<decltype(unit::volt)::type> emf;

    typedef details::_quantity_base<decltype(unit::farad)::type> capacitance;

    typedef details::_quantity_base<decltype(unit::ohm)::type> resistance;
    typedef details::_quantity_base<decltype(unit::ohm)::type> impedancee;
    typedef details::_quantity_base<decltype(unit::ohm)::type> reactance;

    typedef details::_quantity_base<decltype(unit::siemens)::type> electric_conductance;

    typedef details::_quantity_base<decltype(unit::weber)::type> magnetic_flux;

    typedef details::_quantity_base<decltype(unit::tesla)::type> magnetic_flux_density;

    typedef details::_quantity_base<decltype(unit::henry)::type> inductance;

    typedef details::_quantity_base<decltype(unit::celcius)::type> temperature_celcius; //

    typedef details::_quantity_base<decltype(unit::becquerel)::type> radioactive_decay_rate; // + name

    typedef details::_quantity_base<decltype(unit::gray)::type> absorbed_dose;

    typedef details::_quantity_base<decltype(unit::sievert)::type> equivalent_dose;

    typedef details::_quantity_base<decltype(unit::katal)::type> catalytic_activity;

    typedef details::_quantity_base<decltype(unit::lumen)::type> luminous_flux;

    typedef details::_quantity_base<decltype(unit::lux)::type> illuminance;

    // quantities with a coherent derived unit

    typedef details::_quantity_base<decltype(unit::square_meter)::type> area;

    typedef details::_quantity_base<decltype(unit::cubic_meter)::type> volume;

    typedef details::_quantity_base<decltype(unit::meter_per_second)::type> velocity;
    typedef details::_quantity_base<decltype(unit::meter_per_second)::type> speed;

    typedef details::_quantity_base<decltype(unit::meter_per_second_squared)::type>
        acceleraton;
#endif // !defined DEFINE_QUANTITY
} // namespace physics::quantity

#endif // PHYSICS_QUANTITY_DEFS_HPP