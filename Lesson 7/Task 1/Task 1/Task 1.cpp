﻿// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define MODE 1

int add(int num1, int num2) {
    return num1 + num2;
}

int main()
{
    setlocale(LC_ALL, "Russian");
#ifndef MODE
#error Константа не определена
#endif
    int num1 = 0, num2 = 0;
#if MODE == 0 
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения : " << add(num1, num2);
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
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
