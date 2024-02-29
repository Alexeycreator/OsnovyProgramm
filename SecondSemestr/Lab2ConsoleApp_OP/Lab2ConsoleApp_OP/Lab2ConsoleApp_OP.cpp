#include <iostream>
using namespace std;

int RecursionSum(int* arr, int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return arr[n - 1] + RecursionSum(arr, n - 1);
	}
	return 0;
}
int RecursionFactorial(int f) {
	if (f == 1) {
		return 1;
	}
	else {
		return RecursionFactorial(f - 1) * f;
	}
}
int CycleSum(int* arr, int n) {
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += arr[i];
	}
	return result;
}
int CycleFactorial(int f) {
	int factorial = 1;
	for (int i = 1; i < f + 1; i++) {
		factorial *= i;
	}
	return factorial;
}
void Recursion_Qsort(int* arr, int n, int start, int end) {
	int pivot; // разрешающий элемент
	int index; // индекс разрешающего элемента
	pivot = arr[start];
	while (start < end) // пока границы не сомкнутся
	{
		while ((arr[end] > pivot) && (start < end))
			end--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		if (start != end) // если границы не сомкнулись
		{
			arr[start] = arr[end]; // перемещаем элемент [right] на место разрешающего
			start++; // сдвигаем левую границу вправо
		}
		while ((arr[start] < pivot) && (start < end))
			start++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		if (start != end) // если границы не сомкнулись
		{
			arr[end] = arr[start]; // перемещаем элемент [left] на место [right]
			end--; // сдвигаем правую границу влево
		}
	}
	arr[start] = pivot; // ставим разрешающий элемент на место
	index = start;
	if (start < index) // Рекурсивно вызываем сортировку для левой и правой части массива
		Recursion_Qsort(arr, n, start, index - 1);
	if (end > index)
		Recursion_Qsort(arr, n, index + 1, end);
}
void PrintMassiv(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}
int Task13(int a, int m, int current = 1) {
	if (m == 0) {
		return 0;
	}
	cout << pow(a, current) << "\t";
	Task13(a, m - 1, current + 1);
}
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 4;
	int arr[n];
	int f, start, end;
	int a, m;
	start = 0;
	end = n - 1;
	cout << "Введите число, для вычисления факториала: ";
	cin >> f;
	//Заполнение массива
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 50;
	}
	cout << "Вычисление факториала в цикле: "<< CycleFactorial(f) << endl;
	cout << "Вычисление суммы в цикле: "<< CycleSum(arr, n) << endl;
	cout << "Вычисление факториала при помощи рекурсии: " << RecursionFactorial(f) << endl;
	cout << "Вычисление суммы при помощи рекурсии: " << RecursionSum(arr, n) << endl;
	//сортировка массива
	Recursion_Qsort(arr, n, start, end);
	cout << endl;
	//вывод массива
	PrintMassiv(arr, n);
	//индивидуальное задание № 13
	cout << "\nВведите число a: ";
	cin >> a;
	cout << "Введите число m: ";
	cin >> m;
	cout << "Последовательность a^(m+1) для a = " << a << " и для m = " << m << ":\n";
	Task13(a, m);
	cout << endl;
	system("pause");
	return 0;
}
