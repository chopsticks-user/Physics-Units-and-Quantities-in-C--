#ifndef PHYSICS_UNIT_LIETERALS_HPP
#define PHYSICS_UNIT_LIETERALS_HPP

#include "../Config.hpp"
#include "UnitDerived.hpp"

namespace physics::unit
{
    constexpr long double operator"" _m(long double val)
    {
        return val;
    }

} // namespace physics::unit

#endif // PHYSICS_UNIT_LIETERALS_HPP