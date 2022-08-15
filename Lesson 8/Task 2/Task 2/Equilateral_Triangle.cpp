#include <iostream>
#include <string>
#include "Equilateral_Triangle.h"
#include "figure_error.h"
Equilateral_Triangle::Equilateral_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if ((a != b) && (a != c) && (A != 60) && (B != 60) && (C != 60)) {
        print();
        throw figure_error("������� - ������� �, b � � �� ����� �(���) ���� �, �, � �� ����� 60");
    }
};
std::string Equilateral_Triangle::name() {
    return "�������������� �����������";
}
std::string Equilateral_Triangle::side() {
    std::cout << "(�������: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "; ";
}
std::string Equilateral_Triangle::angle() {
    std::cout << "����: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + ")";
}
void Equilateral_Triangle::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if ((a == b) && (a == c) && (A == 60) && (B == 60) && (C == 60) && ((A + B + C) == 180)) {
        std::cout << " ������. ";
    }
    else std::cout << " �� ������. ";
}