#pragma once
#include "Quadrilateral.h"
class Square : public Quadrilateral {
private:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string name() override;
    std::string side() override;
    std::string angle() override;
    void print() override;
};