#include <iostream>
using namespace std;

void task1(){
    cout << "\nЗадание 1." << endl;
    const int rows = 3;
    const int columns = 4;
    double arr[rows][columns];

    //заполнение массива
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) {
            arr[i][j] = 1 + rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    //указатель массива
    double* mass[rows];
    for (int i = 0; i < rows; i++) {
        mass[i] = &arr[i][0];
    }

    //перебор элементов в строке
    for (int i = 0; i < rows; i++) {
        double min_elem = arr[i][0];
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] < min_elem) {
                min_elem = arr[i][j];
                mass[i] = &arr[i][j];
            }
        }
    }

    //вывод минимальных элементов в строке
    cout << "Минимальные элементы массива: ";
    for (int i = 0; i < rows; i++) {
        cout << *mass[i] << "; ";
    }
    cout << endl;
}
void task2(){
    cout << "\nЗадание 2." << endl;

    //объявление строк и столбцов массива
    int rows, columns;

    //ввод строк и столбцов массива
    cout << "Введите количество строк массива: ";
    cin >> rows;
    cout << "Введите количество столбцов массива: ";
    cin >> columns;

    //выделение памяти под двумерный массив
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }
    
    //заполнение массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = 1 + rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    //максимальное значение среди сумм элементов в строках
    int sumMaxMass = 0;
    int elemMax = 0;
    int indexElem;
    for (int i = 0; i < rows; i++) {
        sumMaxMass = 0;
        for (int j = 0; j < columns; j++) {
            sumMaxMass += arr[i][j];
            if (elemMax < sumMaxMass) {
                elemMax = sumMaxMass;
                indexElem = i;
            }
        }
    }
    cout << "максимальное значение суммы находится в " << indexElem << " строке массива и = " << elemMax << endl;

    //минимальное значение среди произведений элементов в столбцах
    int proizved;
    int elemProizved = 0;
    int indexElemProizved;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            proizved;  
        }
    }
    cout << "минимальное произведение: " << elemProizved << endl;

    //сумму всех элементов массива
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
    }
    cout << "Сумма всех элементов массива = " << sum << endl;

    //найти и вывести на экран индексы минимального элемента массива
    int indexRows, indexColumns;
    int massMin_elem = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] < massMin_elem) {
                massMin_elem = arr[i][j];
                indexRows = i;
                indexColumns = j;
            }
        }
    }
    cout << "Минимальный элемент массива: " << massMin_elem << " с индексами " << indexRows + 1 << "(строка)" << " и " << indexColumns + 1 << "(столбец)" << endl;

    //удаление массивов
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
void task3(){
    cout << "\nЗадание 3." << endl;
    const int n = 5;
    //указатель на указатель на целое, содержащий 5 указателей на целое
    int** mass = new int* [n];
    for (int i = 0; i < n; i++) {
        mass[i] = new int[n];//каждый из указателей на целое настроен на последовательность из 5 целых чисел
    }
    //заполнение массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mass[i][j] = 1 + rand() % 100;
            cout << mass[i][j] << "\t";
        }
        cout << endl;
    }
    //поиск максимального и минимального элементов
    int max = mass[0][0];
    int min = mass[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mass[i][j] < min) {
                min = mass[i][j];
            }
            if (mass[i][j] > max) {
                max = mass[i][j];
            }
        }
    }
    int res = (min - max) * (max - min);
    cout << "Квадрат разности максимального и минимального элементов массива = " << res << endl;
    //освобождение памяти
    for (int i = 0; i < n; i++) {
        delete[] mass[i];
    }
    delete[] mass;
}

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Лабораторная работа №6." << endl;

    task1();
    task2();
    task3();

    system("pause");
    return 0;
}
