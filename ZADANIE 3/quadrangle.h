#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include <string>

class Quadrangle {
protected:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
    std::string name;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual ~Quadrangle() = default;

    virtual int getSideA() const;
    virtual int getSideB() const;
    virtual int getSideC() const;
    virtual int getSideD() const;
    virtual int getAngleA() const;
    virtual int getAngleB() const;
    virtual int getAngleC() const;
    virtual int getAngleD() const;
    virtual std::string getName() const;
};

#endif