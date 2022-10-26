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

physics::quantity::force operator"" _N(long double val)
{
    return physics::quantity::force{val};
}

physics::quantity::energy operator"" _J(long double val)
{
    return physics::quantity::energy{val};
}


#endif // ENABLE_PHYSICS_UDLS

#endif // PHYSICS_QUANTITY_LITERALS_HPP