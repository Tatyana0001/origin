#pragma once
#include "Figure.h"
class Quadrilateral : public Figure {
private:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    Quadrilateral();
    std::string name() override;
    std::string side();
    std::string angle();
};