//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_MATH_VECTOR3_H
#define FR_MATH_VECTOR3_H

namespace FRMathDef
{
    template <typename T>
    class Vector3
    {
    public:
        Vector3(T x, T y, T z) :
                x_(x), y_(y), z_(z)
        {

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

    private:
        T x_ = 0;
        T y_ = 0;
        T z_ = 0;
    };
}

#endif //FR_MATH_VECTOR3_H
