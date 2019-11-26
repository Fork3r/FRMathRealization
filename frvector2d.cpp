//
// Created by rsalogub on 26.11.19.
//

#include "frvector2d.h"

namespace FRMathDef
{
    FRVector2d::FRVector2d(pointType x, pointType y) : x_(x), y_(y)
    {

    }

    void FRVector2d::setX(pointType x)
    {
        x_ = x;
    }

    void FRVector2d::setY(pointType y)
    {
        y_ = y;
    }

    pointType FRVector2d::getX()
    {
        return x_;
    }

    pointType FRVector2d::getY()
    {
        return y_;
    }
}