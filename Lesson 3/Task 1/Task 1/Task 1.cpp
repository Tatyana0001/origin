// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
private:
    double num1, num2;
    double a;
public:
    double add(double num1, double num2) {
       a = num1 + num2;
       return a;
    }
    double multiply(double num1, double num2) {
        a = num1 * num2;
        return a;
    }
    double subtract_1_2(double num1, double num2) {
        a = num1 - num2;
        return a;
    }
    double subtract_2_1(double num1, double num2) {
        a = num2 - num1;
        return a;
    }
    double divide_1_2(double num1, double num2) {
        a = num1 / num2;
        return a;
    }
    double divide_2_1(double num1, double num2) {
        a = num2 / num1;
        return a;
    }
    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 == 0) {
            return false;
        }
        else return true;
    }
    bool set_num2(double num2) {
        this->num2 = num2;
        if (num2 == 0) { 
            return false; 
        }
        else return true;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    Calculator calculator;
    do {
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (!calculator.set_num1(num1)) {
                std::cout << "Неверный ввод! " << std::endl;
            }
        } while (!calculator.set_num1(num1)); 
        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!calculator.set_num2(num2)) {
                std::cout << "Неверный ввод! " << std::endl;
            }
        } while (!calculator.set_num2(num2));
        std::cout << "num1 + num2 = " << calculator.add(num1, num2) << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2(num1, num2) << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1(num1, num2) << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply(num1, num2) << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2(num1, num2) << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1(num1, num2) << std::endl;
    } while (exit);
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
