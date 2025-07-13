#include <iostream>
#include <Windows.h>
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "print_functions.h"

int main() {
    SetConsoleOutputCP(1251);

    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt(10, 20, 30, 50, 60);
    IsoscelesTriangle it(10, 20, 50, 60);
    EquilateralTriangle et(30);

    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    rectangle r(10, 20);
    Square s(20);
    Parallelogram p(20, 30, 30, 40);
    Rhomb rh(30, 30, 40);

    printInfo(&t);
    printInfo(&rt);
    printInfo(&it);
    printInfo(&et);

    printInfo(&q);
    printInfo(&r);
    printInfo(&s);
    printInfo(&p);
    printInfo(&rh);

    return 0;
}