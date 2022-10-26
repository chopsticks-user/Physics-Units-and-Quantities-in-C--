#ifndef PHYSICS_UNIT_DIM_SPACE_HPP
#define PHYSICS_UNIT_DIM_SPACE_HPP

#include "../Config.hpp"

namespace physics::unit
{
    namespace details
    {
        template <int time = 0, int length = 0, int mass = 0, int e_current = 0,
                  int th_temp = 0, int a_substance = 0, int l_intensity = 0>
        struct _dim_space
        {
            static constexpr int time_dim = time;
            static constexpr int length_dim = length;
            static constexpr int mass_dim = mass;
            static constexpr int e_current_dim = e_current;
            static constexpr int th_temp_dim = th_temp;
            static constexpr int a_substance_dim = a_substance;
            static constexpr int l_intensity_dim = l_intensity;

            using type = _dim_space;

            template <int p = 1>
            using power = _dim_space<time * p, length * p, mass * p, e_current * p,
                                     th_temp * p, a_substance * p, l_intensity * p>;

            // template <int p = 1>
            // constexpr auto power() const noexcept
            // {
            //     return _dim_space<time * p, length * p, mass * p, e_current * p,
            //                       th_temp * p, a_substance * p, l_intensity * p>{};
            // }

            constexpr _dim_space operator+(_dim_space rhs_dim_space) const noexcept
            {
                return _dim_space{};
            }

            constexpr _dim_space operator-(_dim_space rhs_dim_space) const noexcept
            {
                return _dim_space{};
            }

            constexpr auto operator*(_dim_space rhs_dim_space) const noexcept
            {
                return _dim_space::power<2>();
            }

            template <int r_time, int r_length, int r_mass, int r_e_current,
                      int r_th_temp, int r_a_substance, int r_l_intensity>
            constexpr auto operator*(_dim_space<r_time, r_length, r_mass, r_e_current,
                                                r_th_temp, r_a_substance, r_l_intensity>
                                         rhs_dim_space) const noexcept
            {
                return _dim_space<time + r_time, length + r_length, mass + r_mass,
                                  e_current + r_e_current, th_temp + r_th_temp,
                                  a_substance + r_a_substance, l_intensity + r_l_intensity>{};
            }

            constexpr auto operator/(_dim_space rhs_dim_space) const noexcept
            {
                return _dim_space<0>{};
            }

            template <int r_time, int r_length, int r_mass, int r_e_current,
                      int r_th_temp, int r_a_substance, int r_l_intensity>
            constexpr auto operator/(_dim_space<r_time, r_length, r_mass, r_e_current,
                                                r_th_temp, r_a_substance, r_l_intensity>
                                         rhs_dim_space) const noexcept
            {
                return _dim_space<time - r_time, length - r_length, mass - r_mass,
                                  e_current - r_e_current, th_temp - r_th_temp,
                                  a_substance - r_a_substance, l_intensity - r_l_intensity>{};
            }

            constexpr bool operator==(_dim_space rhs) const noexcept
            {
                return true;
            }

            template <int r_time, int r_length, int r_mass, int r_e_current,
                      int r_th_temp, int r_a_substance, int r_l_intensity>
            constexpr bool operator==(_dim_space<r_time, r_length, r_mass, r_e_current,
                                                 r_th_temp, r_a_substance, r_l_intensity>
                                          rhs_dim_space) const noexcept
            {
                return false;
            }

            constexpr bool operator!=(_dim_space rhs) const noexcept
            {
                return false;
            }

            template <int r_time, int r_length, int r_mass, int r_e_current,
                      int r_th_temp, int r_a_substance, int r_l_intensity>
            constexpr bool operator!=(_dim_space<r_time, r_length, r_mass, r_e_current,
                                                 r_th_temp, r_a_substance, r_l_intensity>
                                          rhs_dim_space) const noexcept
            {
                return true;
            }
        };
    } // namespace physics::unit::details

} // namespace physics::unit

#endif // PHYSICS_UNIT_DIM_SPACE_HPP