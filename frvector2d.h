//
// Created by rsalogub on 26.11.19.
//

#ifndef FRVECTOR2D_H
#define FRVECTOR2D_H

#include "types.h"

namespace FRMathDef
{
    using FRMath::pointType;
    class FRVector2d
    {

    public:
        FRVector2d() = default;

        FRVector2d(pointType x, pointType y);

        inline void setX(pointType x);

        inline void setY(pointType y);

        inline pointType getX();

        inline pointType getY();

    private:
        pointType x_ = 0;
        pointType y_ = 0;
    };
}

namespace FRMath
{
    using Vector2D = FRMathDef::FRVector2d;
}

#endif //FRVECTOR2D_H
