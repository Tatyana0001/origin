#include <iostream>
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrilateral.h" 
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void print_info(FigureDynamicLib::Figure* figure) {
    std::cout << figure->name() << '\n';
    std::cout << figure->side() << '\n';
    std::cout << figure->angle() << '\n' << '\n';
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FigureDynamicLib::Triangle triangle;
    FigureDynamicLib::Right_Triangle right_triangle;
    FigureDynamicLib::Isosceles_Triangle isosceles_triangle;
    FigureDynamicLib::Equilateral_Triangle equilateral_triangle;
    FigureDynamicLib::Quadrilateral quadrilateral;
    FigureDynamicLib::Rectangle rectangle;
    FigureDynamicLib::Square square;
    FigureDynamicLib::Parallelogram parallelogram;
    FigureDynamicLib::Rhomb rhomb;
    print_info(&triangle);
    print_info(&right_triangle);
    print_info(&isosceles_triangle);
    print_info(&equilateral_triangle);
    print_info(&quadrilateral);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhomb);
    return 0;
}