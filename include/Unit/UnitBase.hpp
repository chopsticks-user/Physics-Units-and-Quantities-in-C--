#ifndef PHYSICS_UNIT_BASE_HPP
#define PHYSICS_UNIT_BASE_HPP

#include "../Config.hpp"
#include "DimSpace.hpp"

namespace physics::unit
{
#if __cplusplus >= 201703L
    inline static constexpr details::_dim_space<0> none{};

    template <int power = 1>
    inline constexpr details::_dim_space<power> second{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, power> meter{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, 0, power> kilogram{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, 0, 0, power> ampere{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, 0, 0, 0, power> kelvin{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, 0, 0, 0, 0, power> mole{};

    template <int power = 1>
    inline constexpr details::_dim_space<0, 0, 0, 0, 0, 0, power> candela{};
#else // C++14
    static constexpr details::_dim_space<0> none{};

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
#endif // C++17

} // namespace physics::unit

#endif // PHYSICS_UNIT_BASE_HPP