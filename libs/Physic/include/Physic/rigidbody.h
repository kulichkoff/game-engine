//
// Created by Даниил Куличков on 17.03.2023.
//

#ifndef PHYSICS_RIGIDBODY_H
#define PHYSICS_RIGIDBODY_H


#include <Geometry/vector-2d.h>

namespace Physic {

    class Rigidbody {
    public:
        Geometry::Vector2D position;
        Geometry::Vector2D velocity;
        Geometry::Vector2D acceleration;

        float mass;

        Rigidbody(Geometry::Vector2D position, float mass);

        void ApplyForce(Geometry::Vector2D force);

        void Update(float deltaTime);
    };

} // Physic

#endif //PHYSICS_RIGIDBODY_H
