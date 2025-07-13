#ifndef RHOMB_H
#define RHOMB_H

#include "parallelogram.h"

class Rhomb : public Parallelogram {
public:
    Rhomb(int a, int A, int B);
    std::string getName() const override;
};

#endif