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
void Recursion_Qsort(int* arr, int start, int end) {
	int pivot; // разрешающий элемент
	int index; // индекс разрешающего элемента
	int l_hold = start; //левая граница
	int r_hold = end; // правая граница
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
	start = l_hold;
	end = r_hold;
	if (start < index) // Рекурсивно вызываем сортировку для левой и правой части массива
		Recursion_Qsort(arr, start, index - 1);
	if (end > index)
		Recursion_Qsort(arr, index + 1, end);
}
void PrintMassiv(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}
int f(int n) {
	if (n == 0) {
		return 1;
	}
	return f(n - 1) * n;
}
// a(n-1) + 1
void Task1(int n) {
	if (n == 1) {
		cout << n;
	}
	else {
		Task1(n - 1);
		cout << ", " << n;
	}
}
//a(n) = a(n-1) + 5, a(1) = 0
void Task2(int n, int x = 0) {
	if (n == 0) {
		return;
	}
	else {
		cout << x << ", ";
		Task2(n - 1, x + 5);
	}
}
void Task3(int n, int i) {
	int k = 1;
	if (i <= n) {
		cout << k << "\t";
		Task3(n, i + 1);
	}
}
void Task4(int n, int i) {
	int k = 1;
	if (i < n) {
		cout << k * pow(-1, i) << "\t";
		Task4(n, i + 1);
	}
}
void Task5(int n, int i, int k) {
	if (i < n) {
		cout << k * pow(-1, i) << "\t";
		Task5(n, i + 1, k + 1);
	}
}
void Task6(int n, int i) {
	int k = 2; if (i < n) {
		cout << pow(k, i) << "\t";
		Task6(n, i + 1);
	}
}
void Task7(int n, int i, int k) {
	if (i < n) {
		cout << pow(sqrt(k), 2) << "\t";
		k = pow(k, 2);
		Task7(n, i + 1, k);
	}
}
void Task8(int n, int i, int k) {
	if (i < n) {
		if (k < 4) {
			cout << k << "\t";

			Task8(n, i + 1, k + 1);
		}
		else {
			k = 0;
			Task8(n, i + 1, k);
		}
	}
}
//a(n) = (2n-1)
void Task9(int n) {
	if (n != 0) {
		Task9(n - 1);
		cout << f((2 * n) - 1) << ", ";
	}
}
void Task10(int n, int i, int k) {
	if (i < n) {
		if (k < 2) {
			cout << k << "\t";
			Task10(n, i + 1, k + 1);
		}
		else {
			cout << "a^" << i << "\t";
			Task10(n, i + 1, k);
		}
	}
}
//a(n) = a(n-1) + a^(n-1)
void Task11(int a, int n, int sum = 0, int i = 0) {
	if (i < n) {
		sum += pow(a, i);
		cout << sum << ", ";
		Task11(a, n, sum, i + 1);
	}
}
// a(n) = a ^ (n - 1) / ((n - 1)!)
void Task12(int a, int n) {
	if (n == 0) {
		cout << "1, ";
	}
	else {
		int element = pow(a, n) / f(n);
		Task12(a, n - 1);
		cout << element << ", ";
	}
}
void Task13(int a, int m) {
	if (m == 1)
	{
		cout << a + 1;
	}
	else
	{
		cout << pow(a, m) + 1 << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 6;
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
	Recursion_Qsort(arr, start, end);
	cout << endl;
	//вывод массива
	PrintMassiv(arr, n);
	int k, i;
	cout << "\nВведите значение i: ";
	cin >> i;
	cout << "Введите значение k: ";
	cin >> k;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число m: ";
	cin >> m;
	//индивидуальное задание № 1
	cout << "\nВывод задания 1: ";
	Task1(n);
	cout << endl;
	//индивидуальное задание № 2
	cout << "\nВывод задания 2: ";
	Task2(n);
	cout << endl;
	//индивидуальное задание № 3
	cout << "\nВывод задания 3: ";
	Task3(n, i);
	cout << endl;
	//индивидуальное задание № 4
	cout << "Вывод задания 4: ";
	Task4(n, i);
	cout << endl;
	//индивидуальное задание № 5
	cout << "Вывод задания 5: ";
	Task5(n, i, k);
	cout << endl;
	//индивидуальное задание № 6
	cout << "Вывод задания 6: ";
	Task6(n, i);
	cout << endl;
	//индивидуальное задание № 7
	cout << "Вывод задания 7: ";
	Task7(n, i, k);
	cout << endl;
	//индивидуальное задание № 8
	cout << "Вывод задания 8: ";
	Task8(n, i, k);
	cout << endl;
	//индивидуальное задание № 9
	cout << "Вывод задания 9: ";
	Task9(n);
	cout << endl;
	//индивидуальное задание № 10
	cout << "Вывод задания 10: ";
	Task10(n, i, k);
	cout << endl;
	//индивидуальное задание № 11
	cout << "Вывод задания 11: ";
	Task11(a, n);
	cout << endl;
	//индивидуальное задание № 12
	cout << "Вывод задания 12: ";
	Task12(a, n);
	cout << endl;
	//индивидуальное задание № 13
	cout << "Последовательность a^(m+1) для a = " << a << " и для m = " << m << ":\n";
	Task13(a, m);
	cout << endl;
	system("pause");
	return 0;
}
