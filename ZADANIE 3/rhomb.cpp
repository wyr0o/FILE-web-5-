#include "rhomb.h"

Rhomb::Rhomb(int a, int A, int B)
    : Parallelogram(a, a, A, B) {
}

std::string Rhomb::getName() const {
    return "����";
}