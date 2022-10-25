#ifndef PHYSICS_UNIT_DERIVED_HPP
#define PHYSICS_UNIT_DERIVED_HPP

#include "../Config.hpp"
#include "UnitBase.hpp"

namespace physics::unit
{
    constexpr auto radian = none; // 1
    constexpr auto degree = none; // 1
    constexpr auto steradian = none; // 1
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
    constexpr auto celcius = kelvin<1>; // 3
    constexpr auto becquerel = second<-1>; // 2
    constexpr auto gray = second<-2> * meter<2>;
    constexpr auto sievert = second<-2> * meter<2>;
    constexpr auto katal = second<-1> * mole<1>;
    constexpr auto lumen = candela<1>; // 4 (steradian)
    constexpr auto lux = meter<-2> * candela<1>; // 4 (steradian)

} // namespace physics::unit

#endif // PHYSICS_UNIT_DERIVED_HPP