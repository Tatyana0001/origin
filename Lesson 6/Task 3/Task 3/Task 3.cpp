// Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <Windows.h>
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


void print_info(Figure* figure) {
    std::cout << figure->name() << '\n';
    std::cout << figure->side() << '\n';
    std::cout << figure->angle() << '\n' << '\n';
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle triangle;
    Right_Triangle right_triangle;
    Isosceles_Triangle isosceles_triangle;
    Equilateral_Triangle equilateral_triangle;
    Quadrilateral quadrilateral;
    Rect rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;
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
