#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>

class Triangle {
protected:
    int sideA, sideB, sideC;
    int angleA, angleB, angleC;
    std::string name;

public:
    Triangle(int a, int b, int c, int A, int B, int C);
    virtual ~Triangle() = default;

    virtual int getSideA() const;
    virtual int getSideB() const;
    virtual int getSideC() const;
    virtual int getAngleA() const;
    virtual int getAngleB() const;
    virtual int getAngleC() const;
    virtual std::string getName() const;
};

#endif
