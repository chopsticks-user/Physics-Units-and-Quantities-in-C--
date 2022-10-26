#ifndef PHYSICS_QUANTITY_LITERALS_HPP
#define PHYSICS_QUANTITY_LITERALS_HPP

#include "../Config.hpp"
#include "QuantityDefs.hpp"

#ifdef ENABLE_PHYSICS_UDLS
// User-defined literals for 7 base quantities

physics::quantity::time operator"" _s(long double val)
{
    return physics::quantity::time{val};
}

physics::quantity::length operator"" _m(long double val)
{
    return physics::quantity::length{val};
}

physics::quantity::mass operator"" _kg(long double val)
{
    return physics::quantity::mass{val};
}

physics::quantity::electric_current operator"" _A(long double val)
{
    return physics::quantity::electric_current{val};
}

physics::quantity::temperature operator"" _K(long double val)
{
    return physics::quantity::temperature{val};
}

physics::quantity::amount_of_substance operator"" _mol(long double val)
{
    return physics::quantity::amount_of_substance{val};
}

physics::quantity::luminous_intensity operator"" _cd(long double val)
{
    return physics::quantity::luminous_intensity{val};
}

// User-defined literals for derived quantities

physics::quantity::angle operator"" _rad(long double val)
{
    return physics::quantity::angle{val};
}

physics::quantity::frequency operator"" _Hz(long double val)
{
    return physics::quantity::frequency{val};
}

physics::quantity::force operator"" _N(long double val)
{
    return physics::quantity::force{val};
}

physics::quantity::pressure operator"" _Pa(long double val)
{
    return physics::quantity::pressure{val};
}

physics::quantity::energy operator"" _J(long double val)
{
    return physics::quantity::energy{val};
}

physics::quantity::power operator"" _W(long double val)
{
    return physics::quantity::power{val};
}

physics::quantity::electric_charge operator"" _C(long double val)
{
    return physics::quantity::electric_charge{val};
}

physics::quantity::voltage operator"" _V(long double val)
{
    return physics::quantity::voltage{val};
}

physics::quantity::capacitance operator"" _F(long double val)
{
    return physics::quantity::capacitance{val};
}

physics::quantity::resistance operator"" _omega(long double val)
{
    return physics::quantity::resistance{val};
}

physics::quantity::electric_conductance operator"" _S(long double val)
{
    return physics::quantity::electric_conductance{val};
}

physics::quantity::magnetic_flux operator"" _Wb(long double val)
{
    return physics::quantity::magnetic_flux{val};
}

physics::quantity::magnetic_flux_density operator"" _T(long double val)
{
    return physics::quantity::magnetic_flux_density{val};
}

physics::quantity::inductance operator"" _H(long double val)
{
    return physics::quantity::inductance{val};
}

physics::quantity::radioactive_decay_rate operator"" _Bq(long double val)
{
    return physics::quantity::radioactive_decay_rate{val};
}

physics::quantity::absorbed_dose operator"" _Gy(long double val)
{
    return physics::quantity::absorbed_dose{val};
}

physics::quantity::equivalent_dose operator"" _Sv(long double val)
{
    return physics::quantity::equivalent_dose{val};
}

physics::quantity::catalytic_activity operator"" _kat(long double val)
{
    return physics::quantity::catalytic_activity{val};
}

physics::quantity::luminous_flux operator"" _lm(long double val)
{
    return physics::quantity::luminous_flux{val};
}

physics::quantity::illuminance operator"" _lx(long double val)
{
    return physics::quantity::illuminance{val};
}
#endif // ENABLE_PHYSICS_UDLS
#endif // PHYSICS_QUANTITY_LITERALS_HPP