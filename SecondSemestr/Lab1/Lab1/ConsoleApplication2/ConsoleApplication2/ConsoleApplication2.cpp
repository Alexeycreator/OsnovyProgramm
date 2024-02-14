#include <iostream>
using namespace std;

const int n = 5;
const int m = 5;
//1 задание
int InitMassiv() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = 1 + rand() % 50;
		cout << arr[i] << "\t";
	}
	cout << endl;
	return *arr;
}
//2 задание
void PrintMassiv(int n, int m, int** mass) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mass[i][j] << "\t";
		}
		cout << endl;
	}
}
//3 задание
int TableProizvod(int x) {
	int result;
	for (int i = 1; i <= 9; i++) {
		result = x * i;
		cout << x << "x" << i << " = " << result << endl;
	}
	return result;
}
//4 задание
int MinSumCellsMassiv(int n, int m, int** mass) {
	int sumMinElem = 0;
	for (int i = 0; i < n; i++) {
		int minElem = mass[i][0];
		for (int j = 0; j < m; j++) {
			if (minElem > mass[j][i]) {
				minElem = mass[j][i];
			}
		}
		sumMinElem += minElem;
	}
	return sumMinElem;
}
//5 задание
int MaxSumRowsMassiv(int n, int m, int **mass) {
	int sumMaxElem = 0;
	for (int j = 0; j < m; j++) {
		int maxElem = mass[0][j];
		for (int i = 0; i < n; i++) {
			if (maxElem < mass[j][i]) {
				maxElem = mass[j][i];
			}
		}
		sumMaxElem += maxElem;
	}
	return sumMaxElem;
}
//6 задание
void SortViborMassiv(int n, int *arr) {
	for (int i = 0; i < n; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[k]) {
				int temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
}
//7 задание
void SortVstavkaMassiv(int n, int m, int** mass) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int pos = j;
			int t = *(*(mass + i) + j);
			for (int k = j + 1; k < m; k++)
			{
				if (*(*(mass + i) + k) < t)
				{
					pos = k;
					t = *(*(mass + i) + k);
				}
			}
			*(*(mass + i) + pos) = *(*(mass + i) + j);
			*(*(mass + i) + j) = t;
		}
	}

}
//8 задание
int Factorial(int _x) {
	int F = _x;
	for (int i = 1; i < _x; i++) {
		F *= i;
	}
	return F;
}
//9 задание
int SumNatural(int y) {
	int sum = 0;
	for (int i = 1; i < y; i++) {
		sum += i;
	}
	return sum;
}
//10 задание
int DifferenceOfSquares(int *arr, int n) {
	int result;
	int maxElem = arr[0];
	int minElem = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > maxElem) {
			maxElem = arr[i];
		}
		if (arr[i] < minElem) {
			minElem = arr[i];
		}
	}
	result = (maxElem * maxElem) - (minElem * minElem);
	return result;
}
int main()
{
	setlocale(LC_ALL, "rus");
	//1 задание
	cout << "Задание 1." << endl;
	InitMassiv();
	//2 задание
	cout << "\nЗадание 2." << endl;
	//Создание массива
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
	//Вызов функции вывода массива
	PrintMassiv(n, m, mass);
	//Задание 3
	cout << "\nЗадание 3." << endl;
	int x;
	cout << "Введите число: ";
	cin >> x;
	TableProizvod(x);
	//Задание 4
	cout << "\nЗадание 4." << endl;
	int sumCellsMin = MinSumCellsMassiv(n, m, mass);
	cout << "Сумма минимальных элементов в столбцах массива = " << sumCellsMin << endl;
	//Задание 5
	cout << "\nЗадание 5." << endl;
	int sumRowsMax = MaxSumRowsMassiv(n, m, mass);
	cout << "Сумма максимальных элементов в строках массива = " << sumRowsMax << endl;
	//Задание 6
	cout << "\nЗадание 6." << endl;
	int arr[n] = { 5,14,23,6,9 };
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	SortViborMassiv(n, arr);
	cout << "Отсортированный массив: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Задание 7
	cout << "\nЗадание 7." << endl;
	SortVstavkaMassiv(n, m, mass);
	cout << "Отсортированный массив." << endl;
	PrintMassiv(n, m, mass);
	//Задание 8
	cout << "\nЗадание 8." << endl;
	int _x;
	cout << "Введите число для факторила: ";
	cin >> _x;
	cout << "Факториал числа " << _x << " = " << Factorial(_x);
	//Задание 9
	cout << "\nЗадание 9." << endl;
	int y;
	cout << "Введите параметр: ";
	cin >> y;
	int resNatural = SumNatural(y);
	cout << "Сумма натуральных чисел = " << resNatural << endl;
	//Задание 10
	cout << "\nЗадание 10." << endl;
	int resDifferenceOfSquares = DifferenceOfSquares(arr, n);
	cout << "Квадрат разности = " << resDifferenceOfSquares << endl;
	//Освобождение памяти у массива
	for (int i = 0; i < m; i++) {
		delete[] mass[i];
	}
	delete[] mass;
	cout << endl;
	system("pause");
}
