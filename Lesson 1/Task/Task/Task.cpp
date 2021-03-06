// Task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

int main()
{
    int N, M, elem;
    std::ifstream fin("in.txt");
    fin >> N;
    int *arr1 = new int[N];
    for (int i = 0; i < N; i++) {
        fin >> elem;
        arr1[i] = elem;
    }
    fin >> M;
    int* arr2 = new int[M];
    for (int i = 0; i < M; i++) {
        fin >> elem;
        arr2[i] = elem;
    }
    std::ofstream fout("out.txt");
    fout << M << std::endl;
    fout << arr2[M - 1] << " ";
    for (int i = 0; i < M - 1; i++) { fout << arr2[i] << " "; }
    fout << std::endl;
    fout << N << std::endl;
    for (int i = 1; i < N; i++) { fout << arr1[i] << " "; }
    fout << arr1[0] << " ";
    std::cout << std::endl;
    fin.close();
    fout.close();
    delete[] arr1;
    delete[] arr2;
    arr1 = nullptr;
    arr2 = nullptr;
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
