#include <iostream>
#include <windows.h>
#include "DynamicLeaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    DynamicLeaver::Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;
    return 0;
}