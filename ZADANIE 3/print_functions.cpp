#include "print_functions.h"
#include <iostream>

void printInfo(const Triangle* t) {
    std::cout << t->getName() << ":\n";
    std::cout << "�������: a=" << t->getSideA() << " b=" << t->getSideB() << " c=" << t->getSideC() << "\n";
    std::cout << "����: A=" << t->getAngleA() << " B=" << t->getAngleB() << " C=" << t->getAngleC() << "\n\n";
}

void printInfo(const Quadrangle* q) {
    std::cout << q->getName() << ":\n";
    std::cout << "�������: a=" << q->getSideA() << " b=" << q->getSideB()
        << " c=" << q->getSideC() << " d=" << q->getSideD() << "\n";
    std::cout << "����: A=" << q->getAngleA() << " B=" << q->getAngleB()
        << " C=" << q->getAngleC() << " D=" << q->getAngleD() << "\n\n";
}