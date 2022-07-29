// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure {
private:
    int num = 0;
public:
    virtual std::string side() {
        std::cout << "Фигура: ";
        return std::to_string(num);
    };
};

class Triangle : public Figure {
private:
    const int num = 3;
public:
    std::string side() override {
        std::cout << "Треугольник: ";
        return std::to_string(num);
    }
};
class Quadrilateral : public Figure {
private:
    const int num = 4;
public:
    std::string side() override {
        std::cout << "Четырехугольник: ";
        return std::to_string(num);
    }
};

void side_count(Figure* figure) {
    std::cout << figure->side() << '\n';
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    std::cout << "Количество сторон: \n";
    side_count(&figure);
    side_count(&triangle);
    side_count(&quadrilateral);
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
