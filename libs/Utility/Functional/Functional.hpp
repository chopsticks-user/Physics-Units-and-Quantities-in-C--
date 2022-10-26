#ifndef UTILITY_FUNCTIONAL_HPP
#define UTILITY_FUNCTIONAL_HPP

#include <utility>

namespace utility
{
    namespace functional
    {
        template <typename FTp, typename GTp>
        auto f_of_g(FTp &&f, GTp &&g)
        {
            return [f = std::forward<FTp>(f),
                    g = std::forward<GTp>(g)]()
            {
                return f(g());
            };
        }
    }
}

#endif /* UTILITY_FUNCTIONAL_HPP */