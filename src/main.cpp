#include <iostream>

#include <Physic/rigidbody.h>

int main() {
    Physic::Rigidbody rb(Geometry::Vector2D(), 10);
    rb.ApplyForce(Geometry::Vector2D(20, 10));

    for (int i = 0; i < 10; i++) {
        rb.Update(0.1);
        std::cout << "Position: (" << rb.position.x << ", " << rb.position.y << ")" << std::endl;
    }

    return 0;
}
