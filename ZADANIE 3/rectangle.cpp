#include "rectangle.h"

rectangle::rectangle(int a, int b)
    : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
}

std::string rectangle::getName() const {
    return "Прямоугольник";
}