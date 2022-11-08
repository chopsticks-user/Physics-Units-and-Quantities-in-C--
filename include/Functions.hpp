quantity::velocity instantaneous_velocity(quantity::acceleraton a,
                                          quantity::time t)
{
    return a * t;
}

quantity::acceleraton find_acceleration(quantity::force f, quantity::mass m)
{
    return f / m;
}

quantity::force magnetic_force_between_2_charges(quantity::electric_charge q1,
                                                 quantity::electric_charge q2,
                                                 quantity::length d)
{
    return constant::coulomb_constant * q1 * q2 / (d * d);
}