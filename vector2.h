//
// Created by rsalogub on 26.11.19.
//

#ifndef FR_MATH_VECTOR2_H
#define FR_MATH_VECTOR2_H

namespace FRMathDef
{
    template <typename T>
    class Vector2
    {
    public:
        Vector2() = default;
        
        Vector2(T x, T y) : x_(x), y_(y)
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

    private:
        T x_ = 0;
        T y_ = 0;
    };
}

#endif //FR_MATH_VECTOR2_H
