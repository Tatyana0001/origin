﻿// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

class Address
{
private:
    int house, flat;
    std::string city, street;
public:
    Address() { 
        city = " ";
        street = " ";
        house = 0;
        flat = 0;
    };
    Address(std::string city, std::string street, int house, int flat) {
        this->city = city;
        this->street = street;
        this->house = house;
        this->flat = flat;
    }
    std::string get_output_address() {
        return city + ", " + street + ", " + std::to_string (house) + ", " + std::to_string (flat);
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, house, flat;
    std::string city, street;
    std::ifstream fin("in.txt");
    fin >> N;
    Address* arr = new Address[N];
    for (int i = 0; i < N; i++) {
        fin >> city;
        fin >> street;
        fin >> house;
        fin >> flat;
        arr[i] = Address(city, street, house, flat);
    }  
    std::ofstream fout("out.txt");
    fout << N << std::endl;
    for (int i = N; i > 0; i--) {
        fout << arr[i-1].get_output_address() << std::endl;
    }
    fin.close();
    fout.close();
    delete[] arr;
    arr = nullptr;
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
