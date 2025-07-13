#include "print_functions.h"
#include <iostream>

void printInfo(const Triangle* t) {
    std::cout << t->getName() << ":\n";
    std::cout << "Стороны: a=" << t->getSideA() << " b=" << t->getSideB() << " c=" << t->getSideC() << "\n";
    std::cout << "Углы: A=" << t->getAngleA() << " B=" << t->getAngleB() << " C=" << t->getAngleC() << "\n\n";
}

void printInfo(const Quadrangle* q) {
    std::cout << q->getName() << ":\n";
    std::cout << "Стороны: a=" << q->getSideA() << " b=" << q->getSideB()
        << " c=" << q->getSideC() << " d=" << q->getSideD() << "\n";
    std::cout << "Углы: A=" << q->getAngleA() << " B=" << q->getAngleB()
        << " C=" << q->getAngleC() << " D=" << q->getAngleD() << "\n\n";
}