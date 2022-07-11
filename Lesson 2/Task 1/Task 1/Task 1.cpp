// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int m;
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        if ((m < 0) || (m > 12)) { std::cout << "Неправильный номер! " << std::endl; }
        months month = static_cast<months>(m);
        switch (month) {
        case months::January:
            std::cout << "Январь" << std::endl;
            break;
        case months::February:
            std::cout << "Февраль" << std::endl;
            break;
        case months::March:
            std::cout << "Март" << std::endl;
            break;
        case months::April:
            std::cout << "Апрель" << std::endl;
            break;
        case months::May:
            std::cout << "Май" << std::endl;
            break;
        case months::June:
            std::cout << "Июнь" << std::endl;
            break;
        case months::July:
            std::cout << "Июль" << std::endl;
            break;
        case months::August:
            std::cout << "Август" << std::endl;
            break;
        case months::September:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::October:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::November:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::December:
            std::cout << "Декабрь" << std::endl;
            break;
        }
    } while (m != 0);
    std::cout << "До свидания" << std::endl;
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
