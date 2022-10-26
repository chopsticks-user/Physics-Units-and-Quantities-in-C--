#ifndef UTILITY_GRAPHICS_HPP
#define UTILITY_GRAPHICS_HPP

#include <fstream>

namespace utility
{
    namespace graphics
    {
        void random_color_to_ppm(std::fstream &f, int width = 1024, int height = 1024)
        {
            f << "P3\n"
              << width << ' ' << height << "\n255\n";

            for (int j = height - 1; j >= 0; --j)
            {
                for (int i = 0; i < width; ++i)
                {
                    auto r = double(i) / (width - 1);
                    auto g = double(j) / (height - 1);
                    auto b = 0.25;

                    int ir = static_cast<int>(255.999 * r);
                    int ig = static_cast<int>(255.999 * g);
                    int ib = static_cast<int>(255.999 * b);

                    f << ir << ' ' << ig << ' ' << ib << '\n';
                }
            }
        }
    }
}

#endif /* UTILITY_GRAPHICS_HPP */