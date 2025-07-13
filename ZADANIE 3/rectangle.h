#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quadrangle.h"

class rectangle : public Quadrangle {
public:
    rectangle(int a, int b);
    std::string getName() const override;
};

#endif