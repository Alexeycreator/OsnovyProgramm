#include <iostream>
using namespace std;

const int n = 5;

void task1() {
    cout << "\nЗадание 1." << endl;

    int a = 13;
    float b = 9.5;
    char ch = 'C';
    void* v = nullptr;

    int* Aa = &a;
    float* Bb = &b;
    char* Ch = &ch;

    int& Aa1 = a;
    float& Bb1 = b;
    char& Ch1 = ch;

    cout << "Значение int, полученное через указатель: " << *Aa << endl;
    cout << "Значение float, полученное через указатель: " << *Bb << endl;
    cout << "Значение char, полученное через указатель: " << *Ch << endl;
}
void task2() {
    cout << "\nЗадание 2." << endl;

    int a = 13;
    float b = 9.5;
    char ch = 'C';

    int* Aa = &a;
    float* Bb = reinterpret_cast<float*>(&a);
    char* Ch = reinterpret_cast<char*>(&a);

    cout << "Значение integer, полученное через указатель: " << *Aa << endl;
    cout << "Значение integer, полученное через указатель Bb (явное приведение): " << *Bb << endl;
    cout << "Значение integer, полученное через указатель Ch (явное приведение): " << *Ch << endl;

    *Bb = 9.5;
    *Ch = 'C';

    cout << "Новое значение integer после явного приведения: " << a << endl;

    Bb = reinterpret_cast<float*>(&Bb);
    Ch = reinterpret_cast<char*>(&Bb);

    cout << "Значение floating, полученное через указатель Bb: " << *Bb << endl;
    cout << "Значение floating, полученное через указатель Ch (неявное приведение): " << *Ch << endl;
}
void task3() {
    cout << "\nЗадание 3." << endl;

    int value = 10;
    int* a = &value; // объявление и инициализация указателя на переменную value
    int& b = value; // объявление и инициализация ссылки на переменную value

    // Вывод значения переменной через указатель
    cout << "Значение переменной value через указатель: " << *a << std::endl;

    // Изменение значения переменной через указатель
    *a = 20;
    cout << "Новое значение переменной value: " << value << std::endl;

    // Вывод значения переменной через ссылку
    cout << "Значение переменной value через ссылку: " << b << std::endl;

    // Изменение значения переменной через ссылку
    b = 30;
    cout << "Новое значение переменной value: " << value << std::endl;
}
void task4() {
    cout << "\nЗадание 4." << endl;

    int num = 5;// переменная int
    int* ptr1 = &num;// константный указатель на int
    const int* ptr2 = &num;// указатель на целочисленную константу
    int** ptr3 = &ptr1;// указатель на указатель на int
    int** const ptr4 = &ptr1;// константный указатель на указатель на int
    const int** ptr5 = &ptr2;// указатель на константный указатель на целое
    const int** const ptr6 = &ptr2;// указатель на указатель на целочисленную константу
    const int** const ptr7 = &ptr2;// константный указатель на указатель на целочисленную константу
    const int* const* ptr8 = &ptr2;// константный указатель на константный указатель на int
    const int* const* const ptr9 = &ptr2;// константный указатель на константный указатель на целочисленную константу

    cout << "num: " << num << endl;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;
    cout << "**ptr3: " << **ptr3 << endl;
    cout << "**ptr4: " << **ptr4 << endl;
    cout << "*ptr5: " << **ptr5 << endl;
    cout << "**ptr6: " << **ptr6 << endl;
    cout << "**ptr7: " << **ptr7 << endl;
    cout << "*ptr8: " << **ptr8 << endl;
    cout << "**ptr9: " << **ptr9 << endl;

}
void task5() {
    cout << "\nЗадание 5." << endl;
    int sum = 0;
    int mass[n] = { 1,-3,4,2,-12 };
    for (int i = 0;i < n;i++) {
        cout << "mass[" << i << "]" << mass[i] << endl;
        if (mass[i] > 0) {
            sum += mass[i];
        }
    }
    cout << "sum = " << sum << endl;
}
void task6() {
    double mass[n];
    double max, min, x;
    for (int i = 0;i < n;i++) {
        cout << "Введите значение для " << i << " элемента массива: ";
        cin >> mass[i];
    }
    for (int i = 0;i < n;i++) {
        max = mass[0], min = mass[0];
        if (mass[i] > max) {
            max = mass[i];
        }
        if (mass[i] < min) {
            min = mass[i];
        }
    }
    cout << "Максимальный элемент массива: " << max << endl;
    cout << "Минимальный элекмент массива: " << min << endl;
    x = (max * max) - (2 * max * min) + (min * min);
    cout << "Разность квадратов максимального и минимального элементов = " << x << endl;
}
void task7() {
    cout << "\nЗадание 7." << endl;

    int mass[n];

    //заполенение массива
    for (int i = 0;i < n;i++) {
        mass[i] = 1 + rand() % 100;
        cout << "mass: " << mass[i] << endl;
    }

    // Вычисление среднего арифметического
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mass[i];
    }
    double rage = sum / n;
    cout << "Среднее арифметическое: " << rage << endl;

    // Поиск максимального и минимального элементов
    int* maxMass = &mass[0];
    int* minMass = &mass[0];
    for (int i = 1; i < n; i++) {
        if (*(mass + i) > *maxMass) {
            maxMass = &mass[i];
        }
        if (*(mass + i) < *minMass) {
            minMass = &mass[i];
        }
    }

    // Вывод максимального и минимального элементов
    cout << "Максимальный элемент: " << *maxMass << endl;
    cout << "Минимальный элемент: " << *minMass << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №5." << endl;

    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();

    system("pause");
    return 0;
}
