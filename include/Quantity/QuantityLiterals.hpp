#ifndef PHYSICS_QUANTITY_LITERALS_HPP
#define PHYSICS_QUANTITY_LITERALS_HPP

#include "../Config.hpp"
#include "QuantityDefs.hpp"

#ifdef ENABLE_PHYSICS_UDLS
// User-defined literals for 7 base quantities

inline physics::quantity::time operator"" _s(long double val)
{
    return physics::quantity::time{val};
}

inline physics::quantity::length operator"" _m(long double val)
{
    return physics::quantity::length{val};
}

inline physics::quantity::mass operator"" _kg(long double val)
{
    return physics::quantity::mass{val};
}

inline physics::quantity::electric_current operator"" _A(long double val)
{
    return physics::quantity::electric_current{val};
}

inline physics::quantity::temperature operator"" _K(long double val)
{
    return physics::quantity::temperature{val};
}

inline physics::quantity::amount_of_substance operator"" _mol(long double val)
{
    return physics::quantity::amount_of_substance{val};
}

inline physics::quantity::luminous_intensity operator"" _cd(long double val)
{
    return physics::quantity::luminous_intensity{val};
}

// User-defined literals for quantities with a derived unit

inline physics::quantity::angle operator"" _rad(long double val)
{
    return physics::quantity::angle{val};
}

inline physics::quantity::frequency operator"" _Hz(long double val)
{
    return physics::quantity::frequency{val};
}

inline physics::quantity::force operator"" _N(long double val)
{
    return physics::quantity::force{val};
}

inline physics::quantity::pressure operator"" _Pa(long double val)
{
    return physics::quantity::pressure{val};
}

inline physics::quantity::energy operator"" _J(long double val)
{
    return physics::quantity::energy{val};
}

inline physics::quantity::power operator"" _W(long double val)
{
    return physics::quantity::power{val};
}

inline physics::quantity::electric_charge operator"" _C(long double val)
{
    return physics::quantity::electric_charge{val};
}

inline physics::quantity::voltage operator"" _V(long double val)
{
    return physics::quantity::voltage{val};
}

inline physics::quantity::capacitance operator"" _F(long double val)
{
    return physics::quantity::capacitance{val};
}

inline physics::quantity::resistance operator"" _omega(long double val)
{
    return physics::quantity::resistance{val};
}

inline physics::quantity::electric_conductance operator"" _S(long double val)
{
    return physics::quantity::electric_conductance{val};
}

inline physics::quantity::magnetic_flux operator"" _Wb(long double val)
{
    return physics::quantity::magnetic_flux{val};
}

inline physics::quantity::magnetic_flux_density operator"" _T(long double val)
{
    return physics::quantity::magnetic_flux_density{val};
}

inline physics::quantity::inductance operator"" _H(long double val)
{
    return physics::quantity::inductance{val};
}

inline physics::quantity::radioactive_decay_rate operator"" _Bq(long double val)
{
    return physics::quantity::radioactive_decay_rate{val};
}

inline physics::quantity::absorbed_dose operator"" _Gy(long double val)
{
    return physics::quantity::absorbed_dose{val};
}

inline physics::quantity::equivalent_dose operator"" _Sv(long double val)
{
    return physics::quantity::equivalent_dose{val};
}

inline physics::quantity::catalytic_activity operator"" _kat(long double val)
{
    return physics::quantity::catalytic_activity{val};
}

inline physics::quantity::luminous_flux operator"" _lm(long double val)
{
    return physics::quantity::luminous_flux{val};
}

inline physics::quantity::illuminance operator"" _lx(long double val)
{
    return physics::quantity::illuminance{val};
}

// User-defined literals for quantities with a coherent derived unit

inline physics::quantity::area operator"" _m2(long double val)
{
    return physics::quantity::area{val};
}

inline physics::quantity::volume operator"" _m3(long double val)
{
    return physics::quantity::volume{val};
}

inline physics::quantity::velocity operator"" _mps(long double val)
{
    return physics::quantity::velocity{val};
}

inline physics::quantity::acceleraton operator"" _mps2(long double val)
{
    return physics::quantity::acceleraton{val};
}

#endif // ENABLE_PHYSICS_UDLS
#endif // PHYSICS_QUANTITY_LITERALS_HPP