#include "square.h"

Square::Square(int abcd)
    : rectangle(abcd, abcd) {
}

std::string Square::getName() const {
    return " вадрат";
}