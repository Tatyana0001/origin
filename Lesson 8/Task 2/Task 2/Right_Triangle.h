#pragma once
#include "Triangle.h"

class Right_Triangle : public Triangle {
private:
    int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
public:
    Right_Triangle(int a, int b, int c, int A, int B, int C);
    std::string name() override;
    std::string side() override;
    std::string angle() override;
    void print() override;
};