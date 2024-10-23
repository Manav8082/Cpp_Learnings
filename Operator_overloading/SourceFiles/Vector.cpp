#include "Vector.h"
Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}
void Vector::display() const {
    std::cout << "Vector(" << x << ", " << y << ", " << z << ")\n";
}
Vector Vector::operator+(const Vector& other) const
{
    return Vector(x + other.x, y + other.y, z + other.z);
}