// Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct address {
    std::string city;
    std::string street;
    int house;
    int flat;
    int index;
};

void ADDRESS(address* address_array, int x) {
    std::cout << "Город: " << address_array[x].city << std::endl;
    std::cout << "Улица: " << address_array[x].street << std::endl;
    std::cout << "Номер дома: " << address_array[x].house << std::endl;
    std::cout << "Номер квартиры: " << address_array[x].flat << std::endl;
    std::cout << "Индекс: " << address_array[x].index << std::endl << std::endl;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    address* address_array = new address[5];
    address_array[0] = { "Москва", "Арбат", 12, 8, 123456 };
    address_array[1] = { "Ижевск", "Пушкина", 59, 43, 953769 };
    address_array[2]  = { "Йошкар-Ола", "Гагарина", 1, 13, 424303 };
    address_array[3] = { "Чебоксары", "Комсомольская", 12, 28, 345456 };
    ADDRESS(address_array, 0);
    ADDRESS(address_array, 1);
    ADDRESS(address_array, 2);
    ADDRESS(address_array, 3);
    delete[] address_array;
    address_array = nullptr;
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
