#include "equilateral_triangle.h"

EquilateralTriangle::EquilateralTriangle(int abc)
    : Triangle(abc, abc, abc, 60, 60, 60) {
}

std::string EquilateralTriangle::getName() const {
    return "Равносторонний треугольник";
}