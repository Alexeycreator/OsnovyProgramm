#include <iostream>
using namespace std;

const int n = 4;
//Функция сложения
int Sum(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}

//Функция с разными передачами данных
void DifferentMeanings(int a, int*b, int&c) {
    a = a * a;
    cout << "Новое значение a = " << a << endl;
    (*b)++;
    cout << "Новое значение b = " << *b << endl;
    c = c * c;
    cout << "Новое значение c = " << c << endl;
}
//Вывод сложения всех элементов массива
void Massiv(int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Сумма элементов массива = " << sum << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №1" << endl;
    cout << "\nЗадание 1.\n";
    int a = 5, b = 4, c = 3;
    int arr[n];
    cout << "\nЗадание 2.\n";
    cout << "Изначальное значение a = " << a << endl;
    cout << "Изначальное значение b = " << b << endl;
    cout << "Изначальное значение c = " << c << endl;
    int summa = Sum(a, b, c);
    cout << "Сумма с начальными значениями = " << summa << endl;
    DifferentMeanings(a, &b, c);    
    summa = Sum(a, b, c);
    cout << "Сумма с новыми значениями = " << summa << endl;
    cout << "Массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 50;
        cout << arr[i] << "\t";
    }
    cout << endl;
    Massiv(arr);
    system("pause");
    return 0;
}