#include <iostream>
using namespace std;

void PrintMassiv(int** mass, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mass[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
int SumMassiv(int** mass, int n, int m) {

}
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 4;
	const int m = 4;
	//создание массива
	int** mass = new int* [m];
	for (int i = 0; i < m; i++) {
		mass[i] = new int[n];
	}
	//Заполнение массива
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mass[i][j] = 1 + rand() % 50;
		}
	}
	//вывод массива
	PrintMassiv(mass, n, m);
	cout << "Задание 1." << endl;
	cout << "\nЗадание 2." << endl;
	cout << "\nЗадание 3." << endl;
	//Освобождение памяти у массива
	for (int i = 0; i < m; i++) {
		delete[] mass[i];
	}
	delete[] mass;
	system("pause");
	return 0;
}
