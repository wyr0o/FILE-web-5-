#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public rectangle {
public:
    Square(int abcd);
    std::string getName() const override;
};

#endif