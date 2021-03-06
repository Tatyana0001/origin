// Task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter {
private:
    int count;
public:
    void add() {
        count++;
    }
    void subtract() {
        count--;
    }
    void result() {
        std::cout << count << std::endl;
    }
    Counter() {
        Counter::count = 1;
    }
    Counter(int numb) {
        this->count = numb;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    const std::string starts[] = { "да", "нет" }; 
    std::string start, command;
    int numb;
    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    std::cin >> start;
    if (start == starts[0]) {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> numb;
        Counter counter(numb);
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
            std::cin >> command;
            if (command == "+") {
                counter.add();
            }
            if (command == "-") {
                counter.subtract();
            }
            if (command == "=") {
                counter.result();
            }
        } while (command != "х");
    }  else {
        std::cout << "Начальное значение счётчика: 1";
        std::cout << std::endl;
        Counter counter;
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
            std::cin >> command;
            if (command == "+") {
                counter.add();
            }
            if (command == "-") {
                counter.subtract();
            }
            if (command == "=") {
                counter.result();
            }
        } while (command != "х");
    }
    std::cout << "До свидания!" << std::endl;
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
