#ifndef PHYSICS_UNIT_BASE_HPP
#define PHYSICS_UNIT_BASE_HPP

#include "../Config.hpp"
#include "DimSpace.hpp"

namespace physics::unit
{
    // template <int time = 0, int length = 0, int mass = 0, int e_current = 0,
    //           int th_temp = 0, int a_substance = 0, int l_intensity = 0>
    // constexpr details::_dim_space<time, length, mass, e_current,
    //                               th_temp, a_substance, l_intensity>
    //     unit_space{};

    constexpr details::_dim_space<0> none{};

    template <int power = 1>
    constexpr details::_dim_space<power> second{};

    template <int power = 1>
    constexpr details::_dim_space<0, power> meter{};

    template <int power = 1>
    constexpr details::_dim_space<0, 0, power> kilogram{};

    template <int power = 1>
    constexpr details::_dim_space<0, 0, 0, power> ampere{};

    template <int power = 1>
    constexpr details::_dim_space<0, 0, 0, 0, power> kelvin{};

    template <int power = 1>
    constexpr details::_dim_space<0, 0, 0, 0, 0, power> mole{};

    template <int power = 1>
    constexpr details::_dim_space<0, 0, 0, 0, 0, 0, power> candela{};

} // namespace physics::unit

#endif // PHYSICS_UNIT_BASE_HPP