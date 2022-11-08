#ifndef PHYSICS_UNIT_DERIVED_HPP
#define PHYSICS_UNIT_DERIVED_HPP

#include "../Config.hpp"
#include "UnitBase.hpp"

namespace physics::unit
{
#if __cplusplus >= 201703L
    // derived units
    inline constexpr auto radian = none;      // 1
    inline constexpr auto steradian = none;   // 1
    inline constexpr auto hertz = second<-1>; // 2
    inline constexpr auto newton = second<-2> * meter<1> * kilogram<1>;
    inline constexpr auto pascal = second<-2> * meter<-1> * kilogram<1>;
    inline constexpr auto joule = second<-2> * meter<2> * kilogram<1>;
    inline constexpr auto watt = second<-3> * meter<2> * kilogram<1>;
    inline constexpr auto coulomb = second<1> * ampere<1>;
    inline constexpr auto volt = second<-3> * meter<2> * kilogram<1> * ampere<-1>;
    inline constexpr auto farad = second<4> * meter<-2> * kilogram<-1> * ampere<2>;
    inline constexpr auto ohm = second<-3> * meter<2> * kilogram<1> * ampere<-2>;
    inline constexpr auto siemens = second<3> * meter<-2> * kilogram<-1> * ampere<2>;
    inline constexpr auto weber = second<-2> * meter<2> * kilogram<1> * ampere<-1>;
    inline constexpr auto tesla = second<-2> * kilogram<1> * ampere<-1>;
    inline constexpr auto henry = second<-2> * meter<2> * kilogram<1> * ampere<-2>;
    inline constexpr auto celcius = kelvin<1>;    // 3
    inline constexpr auto becquerel = second<-1>; // 2
    inline constexpr auto gray = second<-2> * meter<2>;
    inline constexpr auto sievert = second<-2> * meter<2>;
    inline constexpr auto katal = second<-1> * mole<1>;
    inline constexpr auto lumen = candela<1>;           // 4 (steradian)
    inline constexpr auto lux = meter<-2> * candela<1>; // 4 (steradian)

    // coherent derived units
    inline constexpr auto square_meter = meter<2>;
    inline constexpr auto cubic_meter = meter<3>;
    inline constexpr auto meter_per_second = meter<1> / second<1>;
    inline constexpr auto meter_per_second_squared = meter<1> / second<2>;
#else  // C++14

    // template <typename T>
    // struct inline_constant
    // {
    //     static T cst;
    // };

    // template <>
    // decltype(second<-2> * meter<1> * kilogram<1>) inline_constant<decltype(second<-2> * meter<1> * kilogram<1>)>::cst = second<-2> * meter<1> * kilogram<1>;
    // static constexpr auto& newton = inline_constant<decltype(second<-2> * meter<1> * kilogram<1>)>::cst;

    // derived units
    constexpr auto radian = none;      // 1
    constexpr auto steradian = none;   // 1
    constexpr auto hertz = second<-1>; // 2
    constexpr auto newton = second<-2> * meter<1> * kilogram<1>;
    constexpr auto pascal = second<-2> * meter<-1> * kilogram<1>;
    constexpr auto joule = second<-2> * meter<2> * kilogram<1>;
    constexpr auto watt = second<-3> * meter<2> * kilogram<1>;
    constexpr auto coulomb = second<1> * ampere<1>;
    constexpr auto volt = second<-3> * meter<2> * kilogram<1> * ampere<-1>;
    constexpr auto farad = second<4> * meter<-2> * kilogram<-1> * ampere<2>;
    constexpr auto ohm = second<-3> * meter<2> * kilogram<1> * ampere<-2>;
    constexpr auto siemens = second<3> * meter<-2> * kilogram<-1> * ampere<2>;
    constexpr auto weber = second<-2> * meter<2> * kilogram<1> * ampere<-1>;
    constexpr auto tesla = second<-2> * kilogram<1> * ampere<-1>;
    constexpr auto henry = second<-2> * meter<2> * kilogram<1> * ampere<-2>;
    constexpr auto celcius = kelvin<1>;    // 3
    constexpr auto becquerel = second<-1>; // 2
    constexpr auto gray = second<-2> * meter<2>;
    constexpr auto sievert = second<-2> * meter<2>;
    constexpr auto katal = second<-1> * mole<1>;
    constexpr auto lumen = candela<1>;           // 4 (steradian)
    constexpr auto lux = meter<-2> * candela<1>; // 4 (steradian)

    // coherent derived units
    constexpr auto square_meter = meter<2>;
    constexpr auto cubic_meter = meter<3>;
    constexpr auto meter_per_second = meter<1> / second<1>;
    constexpr auto meter_per_second_squared = meter<1> / second<2>;
#endif // C++17

} // namespace physics::unit

#endif // PHYSICS_UNIT_DERIVED_HPP