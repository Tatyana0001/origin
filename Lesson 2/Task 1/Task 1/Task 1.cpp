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
    months month = static_cast<months>(1);
    int m = static_cast <int> (month);
   
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (m) {
        case 0:
            std::cout << "До свидания";
            break;
        case static_cast <int> (months::January):
            std::cout << "Январь";
            break;
        case static_cast <int> (months::February):
            std::cout << "Февраль";
            break;
        case static_cast <int> (months::March):
            std::cout << "Март";
            break;
        case static_cast <int> (months::April):
            std::cout << "Апрель";
            break;
        case static_cast <int> (months::May):
            std::cout << "Май";
            break;
        case static_cast <int> (months::June):
            std::cout << "Июнь";
            break;
        case static_cast <int> (months::July):
            std::cout << "Июль";
            break;
        case static_cast <int> (months::August):
            std::cout << "Август";
            break;
        case static_cast <int> (months::September):
            std::cout << "Сентябрь";
            break;
        case static_cast <int> (months::October):
            std::cout << "Октябрь";
            break;
        case static_cast <int> (months::November):
            std::cout << "Ноябрь";
            break;
        case static_cast <int> (months::December):
            std::cout << "Декабрь";
            break;
        default:
            std::cout << "Неправильный номер!";
        }
        std::cout << std::endl;
    } while (m != 0);
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
