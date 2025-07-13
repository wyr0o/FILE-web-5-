#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : sideA(a), sideB(b), sideC(c), angleA(A), angleB(B), angleC(C), name("Треугольник") {
}

int Triangle::getSideA() const { return sideA; }
int Triangle::getSideB() const { return sideB; }
int Triangle::getSideC() const { return sideC; }
int Triangle::getAngleA() const { return angleA; }
int Triangle::getAngleB() const { return angleB; }
int Triangle::getAngleC() const { return angleC; }
std::string Triangle::getName() const { return name; }