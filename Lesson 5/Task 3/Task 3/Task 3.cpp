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
    virtual std::string name() {
        return "Фигура: ";
    }
    virtual bool check() {
        if (num == 0) {
            return true;
        }
        else return false;
    }
    virtual std::string side() {
        return "";
    }
    virtual std::string angle() {
        return "";
    }
    virtual void print() {
        std::cout << name() << "\n";
        std::cout << (check() ? "Правильная" : "Неправильная") << "\n";
        std::cout << "Количество сторон: " << num;
    }
};

class Triangle : public Figure{
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
    bool check() override {
        if ((A + B + C == 180) && (num == 3)) {
            return true;
        }
        else return false;
    }
    void print() override{
        std::cout << name() << "\n";
        std::cout << (check() ? "Правильная" : "Неправильная") << "\n";
        std::cout << "Количество сторон: " << num << "\n";
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << "\n";
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C;
    }
};

class Right_Triangle : public Triangle {
private:
    int C = 90;
public:
    Right_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, 3) {};
    std::string name() override {
        return "Прямоугольный треугольник: ";
    }
    bool check() override {
        if ((Triangle::check() == true) && (C == 90)) {
            return true;
        }
        else return false;
    }
};

class Isosceles_Triangle : public Triangle {
private:
    int a, c, A, C;
public:
    Isosceles_Triangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A, 3) {
        this->a = a;
        this->c = a;
        this->A = A;
        this->C = A;
    };
    std::string name() override {
        return "Равнобедренный треугольник: ";
    }
    bool check() override {
        if ((Triangle::check() == true) && (a == c) && (A == C)) {
            return true;
        }
        else return false;
    }
};

class Equilateral_Triangle : public Triangle {
private:
    int a, b, c, A = 60, B = 60, C = 60;
public:
    Equilateral_Triangle(int a) : Triangle(a, a, a, 60, 60, 60, 3) {
        this->c = a;
        this->b = a;
        this->a = a;
    };
    std::string name() override {
        return "Равносторонний треугольник: ";
    }
    bool check() override {
        if ((Triangle::check() == true) && (a == b) && (a == c) && (A == 60) && (B == 60) && (C == 60)) {
            return true;
        }
        else return false;
    }
};
class Quadrilateral : public Figure {
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
    bool check() {
        if ((A + B + C + D == 360) && (num == 4)) {
            return true;
        }
        else return false;
    }
    void print() override {
        std::cout << name() << "\n";
        std::cout << (check() ? "Правильная" : "Неправильная") << "\n";
        std::cout << "Количество сторон: " << num << "\n";
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D;
    }
};

class Rectangle : public Quadrilateral {
private:
    int a, b, c, d, A = 90, B = 90, C = 90, D = 90;
public:
    Rectangle(int a, int b) :Quadrilateral(a, b, a, b, 90, 90, 90, 90, 4) {
        this->c = a;
        this->a = a;
        this->b = b;
        this->d = b;
    };
    std::string name() override {
        return "Прямоугольник: ";
    }
    bool check() override {
        if ((Quadrilateral::check() == true) && (a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90)) {
            return true;
        }
        else return false;
    }
};

class Square : public Quadrilateral {
private:
    int a, b, c, d, A=90, B=90, C=90, D=90;
public:
    Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, 4) {
        this->c = a;
        this->a = a;
        this->b = a;
        this->d = a;
    };
    std::string name() override {
        return "Квадрат: ";
    }
    bool check() override {
        if ((Quadrilateral::check() == true) && (a == b) && (a == c) && (a == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90)) {
            return true;
        }
        else return false;
    }
};

class Parallelogram : public Quadrilateral {
private:
    int a, b, c, d, A, B, C, D;
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B, 4) {
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = D;
    };
    std::string name() override {
        return "Параллелограмм: ";
    }
    bool check() override {
        if ((Quadrilateral::check() == true) && (a == c) && (b == d) && (A == C) && (B == D)) {
            return true;
        }
        else return false;
    }
};

class Rhomb : public Quadrilateral {
private:
    int A, B, C, D;
public:
    Rhomb(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B, 4) {
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    };
    std::string name() override {
        return "Ромб: ";
    }
    bool check() override {
        if ((Quadrilateral::check() == true) && (A == C) && (B == D)) {
            return true;
        }
        else return false;
    }
};
void print_info(Figure* figure) {
    figure->print();
    std:: cout << '\n' << '\n';
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Right_Triangle right_triangle(10, 20, 30, 50, 60);
    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_Triangle equilateral_triangle(30);
    Quadrilateral quadrilateral;
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhomb rhomb(30, 30, 40);
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
