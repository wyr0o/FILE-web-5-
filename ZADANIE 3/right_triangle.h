#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B);
    std::string getName() const override;
};

#endif