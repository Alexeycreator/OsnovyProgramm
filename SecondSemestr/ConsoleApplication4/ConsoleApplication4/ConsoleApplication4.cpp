#include <iostream>
using namespace std;

const int n = 3;
const int m = 5;

template<class T> void SortMassiv(T mass, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = 0; j < m - 1; j++)
		{
			for (int k = 0; k < m - j - 1; k++) {
				if (mass[i][k] > mass[i][k + 1])
				{
					flag = true;
					int temp = mass[i][k];
					mass[i][k] = mass[i][k + 1];
					mass[i][k + 1] = temp;
				}
			}
			if (!flag) {
				break;
			}
		}
	}
}
template<class T> void Print(T arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №4" << endl;
	int** mass = new int* [m];
	for (int i = 0; i < n; i++) {
		mass[i] = new int[m];
	}
	//Заполнение массива целых чисел
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mass[i][j] = 1 + rand() % 50;
		}
	}
	cout << "Исходный массив:" << endl;
	Print(mass, n, m);
	SortMassiv(mass, n, m);
	cout << "Отсортированный массив:" << endl;
	Print(mass, n, m);
	float** mass2 = new float* [m];
	for (int i = 0; i < n; i++) {
		mass2[i] = new float[m];
	}
	//Заполнение массива вещественных чисел
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mass2[i][j] = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 100.0));
		}
	}
	cout << "Исходный массив:" << endl;
	Print(mass2, n, m);
	SortMassiv(mass2, n, m);
	cout << "Отсортированный массив:" << endl;
	Print(mass2, n, m);
	char** mass3 = new char* [m];
	for (int i = 0; i < n; i++) {
		mass3[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mass3[i][j] = rand() % 26 + 'A';
		}
	}
	cout << "Исходный массив:" << endl;
	Print(mass3, n, m);
	SortMassiv(mass3, n, m);
	cout << "Отсортированный массив:" << endl;
	Print(mass3, n, m);
	for (int i = 0; i < n; i++) {
		delete[] mass[i];
		delete[] mass2[i];
		delete[] mass3[i];
	}
	delete[] mass;

    system("pause");
    return 0;
}
