//
// Created by Даниил Куличков on 17.03.2023.
//

#include <Geometry/vector-2d.h>
#include <cmath>

namespace Geometry {
    Vector2D::Vector2D(float x, float y) {
        this->x = x;
        this->y = y;
    }

    Vector2D::Vector2D() {
        this->x = 0;
        this->y = 0;
    }

    Vector2D Vector2D::Normalized() const {
        float mag = Magnitude();
        return {x / mag, y / mag};
    }

    float Vector2D::Magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    Vector2D Vector2D::operator+(const Vector2D &v) const {
        return {x + v.x, y + v.y};
    }

    Vector2D Vector2D::operator-(const Vector2D &v) const {
        return {x - v.x, y - v.y};
    }

    Vector2D Vector2D::operator*(const float &s) const {
        return {x * s, y * s};
    }

    Vector2D Vector2D::operator/(const float &s) const {
        return {x / s, y / s};
    }
} // Geometry