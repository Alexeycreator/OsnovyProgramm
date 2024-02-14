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
//Сортировка массива вставками
void SortMassiv(int arr[], int n) {
    for(int i = 1;i < n;i++) {
        for (int j = i; j > 0 && arr[j - 1] < arr[j]; j--) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
        }
    }
}
//Вывод отсортированной функции
void PrintMassiv(int arr[], int n) {
    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №1" << endl;
    cout << "\nЗадание 1." << endl;
    int a = 5, b = 4, c = 3;
    cout << "Изначальное значение a = " << a << endl;
    cout << "Изначальное значение b = " << b << endl;
    cout << "Изначальное значение c = " << c << endl;
    int summa = Sum(a, b, c);
    cout << "Сумма с начальными значениями = " << summa << endl;
    cout << "\nЗадание 2." << endl;
    DifferentMeanings(a, &b, c);
    summa = Sum(a, b, c);
    cout << "Сумма с новыми значениями = " << summa << endl;
    cout << "Значение a: " << a << endl;
    cout << "Значение b: " << b << endl;
    cout << "Значение c: " << c << endl;
    cout << endl;
    int arr[n] = { 23, 4, 15, 9 };
    PrintMassiv(arr, n);
    cout << endl;
    Massiv(arr);
    SortMassiv(arr, n);
    PrintMassiv(arr, n);

    system("pause");
    return 0;
}