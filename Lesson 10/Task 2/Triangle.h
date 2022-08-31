#pragma once
#include "Figure.h"
class Triangle : public Figure {
private:
    int a = 10, b = 20, c = 30;
    int A = 50, B = 60, C = 70;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    Triangle();
    std::string name() override;
    std::string side();
    std::string angle();
};