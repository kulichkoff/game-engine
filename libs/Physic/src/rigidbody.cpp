//
// Created by Даниил Куличков on 17.03.2023.
//

#include <Physic/rigidbody.h>

namespace Physic {
    Rigidbody::Rigidbody(Geometry::Vector2D position, float mass) {
        this->position = position;
        this->mass = mass;
    }

    void Rigidbody::ApplyForce(Geometry::Vector2D force) {
        acceleration = force / mass;
    }

    void Rigidbody::Update(float deltaTime) {
        velocity = velocity + acceleration * deltaTime;
        position = position + velocity * deltaTime;
        acceleration = Geometry::Vector2D(0, 0);
    }
} // Physic