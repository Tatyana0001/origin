#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
    int a = 0, b = 0, c = 0;
    int A = 0, B = 0, C = 0;
    int num = 3;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    virtual std::string name();
    std::string side() override;
    std::string angle() override;
    void print() override;
};