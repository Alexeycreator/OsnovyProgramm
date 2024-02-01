#include <iostream>
using namespace std;

void task1() {
	cout << "Задание 1." << endl;

	int a, b;
	int sum = 0;

	cout << "введите число a: " << endl;
	cin >> a;
	cout << "введите число b: " << endl;
	cin >> b;

	sum = a + b;

	cout << "сумма = " << sum << endl;
}

void task2() {
	cout << "Задание 2." << endl;

	int sum = 0;
	int n = 5;

	for (int i = 1; i <= n;i++) {
		int a;
		cout << "введите число " << i << endl;
		cin >> a;
		sum += a;
	}

	cout << "сумма чисел = " << sum << endl;
}

void task3() {
	cout << "Задание 3." << endl;

	int x, y;

	cout << "введите x: " << endl;
	cin >> x;

	if (x < 0) {
		y = x * x;
	}
	else if (x > 0) {
		y = -x;
	}
	else if (x == 0) {
		y = 7;
	}

	cout << "y = " << y << endl;
}

void task4() {
	cout << "Задание 4." << endl;

	int sum = 0;
	int i = 0;

	for (i;i < 5;) {
		int a;
		cout << "Введите число: " << i << endl;
		cin >> a;
		if (a > 0) {
			sum += a;
			i++;
		}
	}

	cout << "Сумма чисел = " << sum << endl;
}

void task5() {
	cout << "Задание 5." << endl;

	int sum = 0;
	int n = 5;

	for (int i = 0;i < n;i++) {
		int a;
		cout << "Введите число " << i << endl;
		cin >> a;
		if (a > 0) {
			sum += a;
		}
	}

	cout << "Сумма чисел = " << sum << endl;
}

void task6() {
	cout << "Задание 6." << endl;

	double x0 = 1, x = 5;
	double a0 = 1.5, a = 10;
	double y;
	double deltaA = 0.5, deltaB = 0.2;

	while (x0 < x) {
		while (a0 < a) {
			a0 += deltaA;
			y = ((x0 * x0) + a0) / (x0 + a0);
			cout << "y = " << y << endl;
		}
		a0 = a0;
		x0 += deltaB;
	}
}

int main()
{
   setlocale(LC_ALL, "rus");

   cout << "Лабораторная работа №1" << endl;
   
   /*task1();

   task2();   

   task3();

   task4();

   task5();*/
 
   task6();

   system("pause");

   return 0;
}