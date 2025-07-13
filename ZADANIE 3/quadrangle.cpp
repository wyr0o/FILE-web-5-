#include "quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : sideA(a), sideB(b), sideC(c), sideD(d), angleA(A), angleB(B), angleC(C), angleD(D), name("Четырёхугольник") {
}

int Quadrangle::getSideA() const { return sideA; }
int Quadrangle::getSideB() const { return sideB; }
int Quadrangle::getSideC() const { return sideC; }
int Quadrangle::getSideD() const { return sideD; }
int Quadrangle::getAngleA() const { return angleA; }
int Quadrangle::getAngleB() const { return angleB; }
int Quadrangle::getAngleC() const { return angleC; }
int Quadrangle::getAngleD() const { return angleD; }
std::string Quadrangle::getName() const { return name; }