// Task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
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
#include "figure_error.h"

void print_info(Figure* figure) {
    figure->print();
    std::cout << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        Right_Triangle right_triangle(10, 20, 30, 50, 60, 70);
        Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
        Equilateral_Triangle equilateral_triangle(30, 30, 30, 60, 60, 60);
        Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
        Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
        print_info(&triangle);
        print_info(&right_triangle);
        print_info(&isosceles_triangle);
        print_info(&equilateral_triangle);
        print_info(&quadrilateral);
        print_info(&rectangle);
        print_info(&square);
        print_info(&parallelogram);
        print_info(&rhomb);
    }
    catch (figure_error& err) { std::cout << err.what() << std::endl; }
    catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
