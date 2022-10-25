#ifndef PHYSICS_QUANTITY_BASE_HPP
#define PHYSICS_QUANTITY_BASE_HPP

#include "../Config.hpp"
#include "../Unit/Unit.hpp"

namespace physics::quantity
{
#ifdef ENABLE_PHYSICS_UDLS
    typedef long double quantity_value_type;
#else
    typedef double quantity_value_type;
#endif // ENABLE_PHYSICS_UDLS

    namespace details
    {
        template <typename unit_tp>
        struct _quantity_base
        {
            long double value;
            constexpr unit_tp unit() const noexcept { return unit_tp{}; }

            _quantity_base() = default;

            explicit _quantity_base(long double val) : value{val} {}

            constexpr _quantity_base operator+(_quantity_base rhs) const noexcept
            {
                return _quantity_base{value + rhs.value};
            }

            constexpr _quantity_base operator-(_quantity_base rhs) const noexcept
            {
                return _quantity_base{value - rhs.value};
            }

            template <typename r_unit_tp>
            constexpr auto operator*(_quantity_base<r_unit_tp> rhs) const noexcept
            {
                return _quantity_base<decltype(this->unit() * rhs.unit())>{value * rhs.value};
            }

            constexpr auto operator*(long double rhs_scalar) const noexcept
            {
                return _quantity_base{value * rhs_scalar};
            }

            friend constexpr _quantity_base operator*(long double scalar, _quantity_base quantity) noexcept
            {
                return _quantity_base{quantity.value * scalar};
            }

            template <typename r_unit_tp>
            constexpr auto operator/(_quantity_base<r_unit_tp> rhs) const
            {
                return _quantity_base<decltype(this->unit() / rhs.unit())>{value / rhs.value};
            }

            constexpr auto operator/(long double rhs_scalar) const
            {
                return _quantity_base{value / rhs_scalar};
            }

            friend constexpr auto operator/(long double scalar, _quantity_base quantity)
            {
                return _quantity_base<typename unit_tp::power<-1>>{scalar / quantity.value};
            }
        };

    } // namespace physics::quantity::details
} // namespace physics::quantity

template <typename unit_tp>
physics::quantity::details::_quantity_base<unit_tp>
operator*(double scalar, unit_tp) noexcept
{
    return physics::quantity::details::_quantity_base<unit_tp>{scalar};
}

#endif // PHYSICS_QUANTITY_BASE_HPP