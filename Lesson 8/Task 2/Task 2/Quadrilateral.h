#pragma once
#include "Figure.h"

class Quadrilateral : public Figure {
private:
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
    int num = 4;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual std::string name();
    std::string side() override;
    std::string angle() override;
    void print() override;
};