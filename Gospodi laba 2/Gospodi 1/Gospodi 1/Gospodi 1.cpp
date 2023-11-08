﻿// Gospodi 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    if (n <= 0) {
       cout << "Количество чисел должно быть положительным числом." << endl;
        return 1;
    }

    int min_element;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Введите число: ";
        cin >> num;

        if (i == 0 || num < min_element) {
            min_element = num;
            count = 1;
        }
        else if (num == min_element) {
            count++;
        }
    }

    cout << "Минимальное число: " << min_element << endl;
    cout << "Количество повторений: " << count << endl;

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
