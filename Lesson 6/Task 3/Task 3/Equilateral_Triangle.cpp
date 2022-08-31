#include <iostream>
#include <string>
#include "Equilateral_Triangle.h"

Equilateral_Triangle::Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60) {};
std::string Equilateral_Triangle::name() {
    setlocale(LC_ALL, "Russian");
    return "Равносторонний треугольник: ";
}