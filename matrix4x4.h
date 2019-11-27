//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_MATH_MATRIX4X4_H
#define FR_MATH_MATRIX4X4_H

#include <array>
#include "vector3.h"
#include "vector4.h"
#include "cassert"
#include "iostream"

namespace FRMathDef
{
    template <typename T>
    class Matrix4x4
    {
    public:
        Matrix4x4<T>(std::initializer_list<T> initializerList)
        {
            assert(initializerList.size() == 4*4);
            int i = 0;
            for (const auto &initializer : initializerList) {
                Values_[i / 4][i % 4] = initializer;
                ++i;
            }
        }

        T& operator[] (size_t index)
        {
            assert(index < 4 && index >=0 );
            return Values_[index];
        }

        const T& operator[] (size_t index) const
        {
            assert(index < 4 && index >=0 );
            return Values_[index];
        }

        const T* getValues() const
        {
            return &(Values_[0][0]);
        }

        static Matrix4x4<T> translationMatrix (const Vector3<T> &vector3)
        {
            Matrix4x4 result(unitMatrix);
            result[0].setX(vector3.getX());
            result[0].setY(vector3.getY());
            result[0].setZ(vector3.getZ());
            return result;
        }

        static const Matrix4x4<T> unitMatrix;

    private:
        std::array<Vector4<T>, 4> Values_;
    };

    template <typename T>
    const Matrix4x4<T> Matrix4x4<T>::unitMatrix({
            static_cast<T>(1), static_cast<T>(0), static_cast<T>(0), static_cast<T>(0),
            static_cast<T>(0), static_cast<T>(1), static_cast<T>(0), static_cast<T>(0),
            static_cast<T>(0), static_cast<T>(0), static_cast<T>(1), static_cast<T>(0),
            static_cast<T>(0), static_cast<T>(0), static_cast<T>(0), static_cast<T>(1)});
}

#endif //FR_MATH_MATRIX4X4_H
