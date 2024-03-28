#include <iostream>
#include <string>
using namespace std;
const int rows = 4;
const int _lenght = 100;
const int n = 2;
const int m = 6;
//Вывод массива
void PrintMassiv(int** mass, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mass[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
//Сумма элементов массива целых чисел
int SumMassiv(int** mass, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += mass[i][j];
		}
	}
	return sum;
}
//Сортировка массива целых чисел
void SortMassiv(int** mass, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			for (int k = 0; k < m - j - 1; k++) {
				if (mass[i][k] > mass[i][k + 1])
				{
					int temp = mass[i][k];
					mass[i][k] = mass[i][k + 1];
					mass[i][k + 1] = temp;
				}
			}
		}
	}
}
//Сложение массивов символов
char* SumMassiv(char charMassiv[][m]) {
	int k = 0;
	char* resMassiv = new char[n * m * 2];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			resMassiv[k++] = charMassiv[i][j];
			if (i == n - 1 && j == m - 2)
			{
				resMassiv[k++] = '.';
			}
		}
		resMassiv[k++] = ' ';
	}
	resMassiv[k] = '\0';
	resMassiv[0] = toupper(resMassiv[0]);
	return resMassiv;
}
char SortMassiv(char charMassiv[][m], int n, int m) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (strcmp(charMassiv[j], charMassiv[j + 1]) > 0) {
				char temp[255];
				strcpy_s(temp, charMassiv[j]);
				strcpy_s(charMassiv[j], charMassiv[j + 1]);
				strcpy_s(charMassiv[j + 1], temp);
			}
		}
	}
	return **charMassiv;
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Задание 1." << endl;
	//создание массива целых чисел
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
	//вывод массива целых чисел
	PrintMassiv(mass, n, m);
	int sumTask1 = SumMassiv(mass, n, m);
	cout << "\nСумма элементов массива = " << sumTask1 << endl;
	//сортировка целочисленного массива
	SortMassiv(mass, n, m);
	cout << "\nОтсортированный массив:" << endl;
	//вывод целочисленного массива
	PrintMassiv(mass, n, m);
	cout << "\nЗадание 2." << endl;
	char _charMass[n][m] = { {"world"}, {"hello"} };
	const char* resMass = new char[n * m * 2];
	//сложение массива символов
	resMass = SumMassiv(_charMass);
	cout << "Сумма массива символов: " << resMass << endl;
	//сортировка массива символов
	SortMassiv(_charMass, n, m);
	//вывод массива символов
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << _charMass[i][j];
		}
		cout << endl;
	}
	//вывод сложения массива символов отсортированных
	resMass = SumMassiv(_charMass);
	cout << "Сумма массива символов: " << resMass << endl;
	cout << "\nЗадание 3." << endl;
	char* (*ptr)(char[][m]) = &SumMassiv;
	cout << "Сумма символьного массива: " << (*ptr)(_charMass) << endl;
	int(*pf2)(int**, int, int) = &SumMassiv;
	int resultTask3 = (*pf2)(mass, n, m);
	cout << "Сумма целочисленного массива: " << resultTask3 << endl;
	//Освобождение памяти у массива
	for (int i = 0; i < n; i++) {
		delete[] mass[i];
	}
	delete[] mass;
	system("pause");
	return 0;
}
