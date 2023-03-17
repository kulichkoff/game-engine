//
// Created by Даниил Куличков on 17.03.2023.
//

#ifndef PHYSICS_VECTOR_2D_H
#define PHYSICS_VECTOR_2D_H

namespace Geometry {

    class Vector2D {
    public:
        float x, y;

        Vector2D(float x, float y);

        Vector2D();

        Vector2D operator+(const Vector2D &v) const;

        Vector2D operator-(const Vector2D &v) const;

        Vector2D operator*(const float &s) const;

        Vector2D operator/(const float &s) const;

        [[nodiscard]] float Magnitude() const;

        [[nodiscard]] Vector2D Normalized() const;
    };

} // Geometry

#endif //PHYSICS_VECTOR_2D_H
