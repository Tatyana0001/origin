#include <string>
#include <iostream>
#include "Triangle.h"
#include "figure_error.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        if ((A + B + C) != 180) {
            print();
            throw figure_error("�������: ����� ����� �� ����� 180");
        }
}
    std::string Triangle::name() {
        return "�����������";
    }
    std::string Triangle::side() {
        std::cout << "(�������: ";
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "; ";
    }
    std::string Triangle::angle() {
        std::cout << "����: ";
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + ")";
    }
    void Triangle::print() {
        std::cout << name();
        std::cout << side();
        std::cout << angle();
        if (((A + B + C) == 180) && (num = 3)) {
            std::cout << " ������. ";
        }
        else std::cout << " �� ������. ";
    }