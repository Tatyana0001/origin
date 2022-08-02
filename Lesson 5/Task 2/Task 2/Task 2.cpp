// Task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


class Figure {
public:
    Figure() {};
    virtual std::string name() {
        return "Фигура: ";
    }
    virtual std::string side() {
        return "";
    }
    virtual std::string angle() { return ""; }
};

class Triangle : public Figure  { 
private:
    int a = 10, b = 20, c = 30;
    int A = 50, B = 60, C = 70;
public:
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Triangle() {};
    virtual std::string name() {
        return "Треугольник: ";
    }
    std::string side() {
        std::cout << "Стороны: ";
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
    }
    std::string angle() {
        std::cout << "Углы: ";
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
    }
};

class Right_Triangle : public Triangle {
public:
    Right_Triangle() :Triangle(10, 20, 30, 50, 60, 90){};
    std::string name() override {
        return "Прямоугольный треугольник: ";
    }
};

class Isosceles_Triangle : public Triangle {
public:
    Isosceles_Triangle() :Triangle(10, 20, 10, 50, 60, 50) {};
    std::string name() override {
        return "Равнобедренный треугольник: ";
    }
};

class Equilateral_Triangle : public Triangle {
public:
    Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60) {};
    std::string name() override {
        return "Равносторонний треугольник: ";
    }
};
class Quadrilateral : public Figure {
private:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    Quadrilateral() {};
    virtual std::string name() {
        return "Четырехугольник: ";
    }
    std::string side() {
        std::cout << "Стороны: ";
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
    }
    std::string angle() {
        std::cout << "Углы: ";
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle() :Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90) {};
    std::string name() override {
        return "Прямоугольник: ";
    }
};

class Square : public Quadrilateral {
public:
    Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {};
    std::string name() override {
        return "Квадрат: ";
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram() : Quadrilateral(20, 30, 20, 30, 30, 40, 30, 40) {};
    std::string name() override {
        return "Параллелограмм: ";
    }
};

class Rhomb : public Quadrilateral {
public:
    Rhomb() : Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40) {};
    std::string name() override {
        return "Ромб: ";
    }
};

void print_info (Figure* figure) {
    std::cout << figure->name() << '\n';
    std::cout << figure->side() << '\n';
    std::cout << figure->angle() << '\n' << '\n';
}


int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle;
    Right_Triangle right_triangle;
    Isosceles_Triangle isosceles_triangle;
    Equilateral_Triangle equilateral_triangle;
    Quadrilateral quadrilateral;
    Rectangle rectangle;
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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
