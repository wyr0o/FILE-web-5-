#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int ab, int c, int AB, int C);
    std::string getName() const override;
};

#endif