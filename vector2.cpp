//
// Created by rsalogub on 26.11.19.
//

#include "vector2.h"

namespace FRMathDef
{
    Vector2::Vector2(pointType x, pointType y) : x_(x), y_(y)
    {

    }

    void Vector2::setX(pointType x)
    {
        x_ = x;
    }

    void Vector2::setY(pointType y)
    {
        y_ = y;
    }

    pointType Vector2::getX()
    {
        return x_;
    }

    pointType Vector2::getY()
    {
        return y_;
    }
}