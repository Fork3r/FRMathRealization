//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_MATH_MATRIX4X4_H
#define FR_MATH_MATRIX4X4_H

#include <array>

namespace FRMathDef
{
    template <typename T>
    class Matrix4x4
    {
    public:
        const std::array<T, 4*4> &getValues() const { return Values_; }
    private:
        std::array<T, 4*4> Values_;
    };
}

#endif //FR_MATH_MATRIX4X4_H
