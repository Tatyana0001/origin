// Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure {
private:
    int num = 0;
public:
    Figure(int num) {
        this->num = num;
    }
    Figure() {};
    std::string name() {
        return "Фигура: ";
    }
    std::string accuracy() {
        if (num == 0) {
            return "Правильная";
        }
        else return "Неправильная";
    }
    std::string side_num() {
        std::cout << "Количество сторон: ";
        return std::to_string(num);
    }
};

class Triangle {
private:
    int a = 10, b = 20, c = 30;
    int A = 50, B = 60, C = 70;
    int num = 3;
public:
    Triangle(int a, int b, int c, int A, int B, int C, int num) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        this->num = num;
    }
    Triangle() {};
    virtual std::string name() {
        return "Треугольник: ";
    }
    std::string accuracy() {
        if ((A + B + C == 180) && (num == 3)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
    std::string side_num() {
        std::cout << "Количество сторон: ";
        return std::to_string(num);
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
private:
    int a = 10, b = 20, c = 30;
    int A = 50, B = 60, C = 90;
    int num = 3;
public:
    Right_Triangle() : Triangle(10, 20, 30, 50, 60, 90, 3) {};
    std::string name() override {
        return "Прямоугольный треугольник: ";
    }
    std::string accuracy() {
        Triangle::accuracy();
        if (C = 90) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};

class Isosceles_Triangle : public Triangle {
private:
    int a = 10, b = 20, c = 10;
    int A = 50, B = 60, C = 50;
    int num = 3;
public:
    Isosceles_Triangle() :Triangle(10, 20, 10, 50, 60, 50, 3) {};
    std::string name() override {
        return "Равнобедренный треугольник: ";
    }
    std::string accuracy() {
        Triangle::accuracy();
        if ((a == c) && (A == C)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};

class Equilateral_Triangle : public Triangle {
private:
    int a = 30, b = 30, c = 30;
    int A = 60, B = 60, C = 60;
    int num = 3;
public:
    Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60, 3) {};
    std::string name() override {
        return "Равносторонний треугольник: ";
    }
    std::string accuracy() {
        Triangle::accuracy();
        if ((a == b) && (a == c) && (A == 60) && (B == 60) && (C == 60)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};
class Quadrilateral {
private:
    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;
    int num = 4;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, int num) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->num = num;
    }
    Quadrilateral() {};
    virtual std::string name() {
        return "Четырехугольник: ";
    }
    std::string accuracy() {
        if ((A + B + C + D == 360) && (num == 4)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
    std::string side_num() {
        std::cout << "Количество сторон: ";
        return std::to_string(num);
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
private:
    int a = 10, b = 20, c = 10, d = 20;
    int A = 90, B = 90, C = 90, D = 90;
    int num = 4;
public:
    Rectangle() :Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90, 4) {};
    std::string name() override {
        return "Прямоугольник: ";
    }
    std::string accuracy() {
        Quadrilateral::accuracy();
        if ((a = c) && (b = d) && (A = 90) && (B = 90) && (C = 90) && (D = 90)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};

class Square : public Quadrilateral {
private:
    int a = 20, b = 20, c = 20, d = 20;
    int A = 90, B = 90, C = 90, D = 90;
    int num = 4;
public:
    Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90, 4) {};
    std::string name() override {
        return "Квадрат: ";
    }
    std::string accuracy() {
        Quadrilateral::accuracy();
        if ((a = b) && (a = c) && (a = d) && (A = 90) && (B = 90) && (C = 90) && (D = 90)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};

class Parallelogram : public Quadrilateral {
private:
    int a = 20, b = 30, c = 20, d = 30;
    int A = 30, B = 40, C = 30, D = 40;
    int num = 4;
public:
    Parallelogram() : Quadrilateral(20, 30, 20, 30, 30, 40, 30, 40, 4) {};
    std::string name() override {
        return "Параллелограмм: ";
    }
    std::string accuracy() {
        Quadrilateral::accuracy();
        if ((a = c) && (b = d) && (A = C) && (B = D)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};

class Rhomb : public Quadrilateral {
private:
    int a = 30, b = 30, c = 30, d = 30;
    int A = 30, B = 40, C = 30, D = 40;
    int num = 4;
public:
    Rhomb() : Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40, 4) {};
    std::string name() override {
        return "Ромб: ";
    }
    std::string accuracy() {
        Quadrilateral::accuracy();
        if ((A = C) && (B = D)) {
            return "Правильная";
        }
        else return "Неправильная";
    }
};
void print_info(Figure* figure) {
    std::cout << figure->name() << "\n";
    std::cout << figure->accuracy() << '\n';
    std::cout << figure->side_num() << '\n' << '\n';
}
void print_info(Triangle* triangle) {
    std::cout << triangle->name() << '\n';
    std::cout << triangle->accuracy() << "\n";
    std::cout << triangle->side_num() << "\n";
    std::cout << triangle->side() << '\n';
    std::cout << triangle->angle() << '\n' << '\n';
}
void print_info(Quadrilateral* quadrilateral) {
    std::cout << quadrilateral->name() << '\n';
    std::cout << quadrilateral->accuracy() << "\n";
    std::cout << quadrilateral->side_num() << "\n";
    std::cout << quadrilateral->side() << '\n';
    std::cout << quadrilateral->angle() << '\n' << '\n';
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Right_Triangle right_triangle;
    Isosceles_Triangle isosceles_triangle;
    Equilateral_Triangle equilateral_triangle;
    Quadrilateral quadrilateral;
    Rectangle rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;
    print_info(&figure);
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
