#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int abc);
    std::string getName() const override;
};

#endif