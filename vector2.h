//
// Created by rsalogub on 26.11.19.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "types.h"

namespace FRMathDef
{
    using FRMath::pointType;
    class Vector2
    {

    public:
        Vector2() = default;

        Vector2(pointType x, pointType y);

        inline void setX(pointType x);

        inline void setY(pointType y);

        inline pointType getX();

        inline pointType getY();

    private:
        pointType x_ = 0;
        pointType y_ = 0;
    };
}

#endif //VECTOR2D_H
