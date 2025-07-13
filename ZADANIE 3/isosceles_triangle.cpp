#include "isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(int ab, int c, int AB, int C)
    : Triangle(ab, ab, c, AB, AB, C) {
}

std::string IsoscelesTriangle::getName() const {
    return "Равнобедренный треугольник";
}