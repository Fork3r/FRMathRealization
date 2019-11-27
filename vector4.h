//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_MATH_VECTOR4_H
#define FR_MATH_VECTOR4_H

#include <cassert>

namespace FRMathDef
{
    template <typename T>
    class Vector4
    {
    public:
        Vector4() = default;

        Vector4(T x, T y, T z, T w) :
                x_(x), y_(y), z_(z), w_(w)
        {

        }

        T& operator[] (size_t index)
        {
            assert(index < 4 && index >= 0);
            return Values_[index];
        }

        const T& operator[] (size_t index) const
        {
            assert(index < 4 && index >= 0);
            return Values_[index];
        }

        T getX() const
        {
            return x_;
        }

        void setX(T x)
        {
            x_ = x;
        }

        T getY() const
        {
            return y_;
        }

        void setY(T y)
        {
            y_ = y;
        }

        T getZ() const
        {
            return z_;
        }

        void setZ(T z)
        {
            z_ = z;
        }

        T getW() const
        {
            return w_;
        }

        void setW(T w)
        {
            w_ = w;
        }

    private:
        T &x_ = Values_[0];
        T &y_ = Values_[1];
        T &z_ = Values_[2];
        T &w_ = Values_[3];

        std::array<T, 4> Values_;
    };
}

#endif //FR_MATH_VECTOR4_H
