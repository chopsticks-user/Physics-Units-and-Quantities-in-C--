#ifndef PHYSICS_MACRO_UTILS_HPP
#define PHYSICS_MACRO_UTILS_HPP

#define DEFINE_QUANTITY(unit_instance, quantity_name) \
    typedef physics::quantity::details::_quantity_base<decltype(unit_instance)::type> quantity_name
    
#endif // PHYSICS_MACRO_UTILS_HPP