#include <iostream>
using namespace std;

void task1_for() {
	cout << "\nЗадание 1 при помощи for." << endl;

	double den = 10, sum = den;
	for (int i = 2; i <= 7; i++) {
		den *= 1.1;
		sum += den;
		cout << "За " << i << " день спортсмен пробежит - " << sum << " км." << endl;
	}
	cout << "Спортсмен пробежит за 7 дней: " << sum << " км" << endl;
}

void task1_while() {
	cout << "\nЗадание 1 при помощи while." << endl;

	double den = 10, sum = den;
	int i = 1;
	while (i < 7)
	{
		den *= 1.1;
		sum += den;
		i++;
	}
	cout << "Спортсмен пробежит за 7 дней: " << sum << " км" << endl;
}

void task1_do_while() {
	cout << "\nЗадание 1 при помощи do while." << endl;

	double den = 10, sum = den;
	int i = 1;
	do
	{
		den *= 1.1;
		sum += den;
		i++;
	} while (i < 7);
	cout << "Спортсмен пробежит за 7 дней: " << sum << " км" << endl;
}

void task2_for() {
	cout << "\nЗадание 2 при помощи for." << endl;

	int hour = 3;
	int ameba = 1;

	for (; hour <= 24; hour += 3) {
		ameba *= 2;
		cout << "через " << hour << " часа(ов) количество амеб будет - "<< ameba << endl;
	}
}

void task2_while() {
	cout << "\nЗадание 2 при помощи while." << endl;

	int hour = 0, ameba = 1;

	while (hour < 24) {
		ameba *= 2;
		hour += 3;
	}
	cout << "Через " << hour << " часа количество амеб будет - " << ameba << endl;
}
void task2_do_while() {
	cout << "\nЗадание 2 при помощи do while." << endl;

	int hour = 0, ameba = 1;

	do
	{
		ameba *= 2;
		hour += 3;
	} while (hour < 24);
	cout << "Через " << hour << " часа количество амеб будет - " << ameba << endl;
}
void task3_for() {
	cout << "\nЗадание 3 при помощи for" << endl;

	double x, y = 2, a, k, h;
	const double pi = 3.14159265;
	cout << "Введите длину палки: ";
	cin >> k;
	cout << "Введите шаг: ";
	cin >> h;

	for (y; y <= 3; y += h) {
		x = k;
		a = atan(y / x);
		a = a * 180 / pi;

		cout << "Значение угла alpha для x = " << k << " м, y = " << y << " м = " << a << " градусов" << endl;
	}
}
void task3_while() {
	cout << "\nЗадание 3 при помощи while" << endl;

	double x, y = 2, a, k, h;
	const double pi = 3.14159265;
	cout << "Введите длину палки: ";
	cin >> k;
	cout << "Введите шаг: ";
	cin >> h;

	while (y <= 3) {
		x = k;
		a = atan(y / x);
		a = a * 180 / pi;

		cout << "Значение угла alpha для x = " << k << " м, y = " << y << " м = " << a << " градусов" << endl;
		y += h;
	}
}
void task3_do_while() {
	cout << "\nЗадание 3 при помощи do while" << endl;

	double x, y = 2, a, k, h;
	const double pi = 3.14159265;
	cout << "Введите длину палки: ";
	cin >> k;
	cout << "Введите шаг: ";
	cin >> h;

	do
	{
		x = k;
		a = atan(y / x);
		a = a * 180 / pi;

		cout << "Значение угла alpha для x = " << k << " м, y = " << y << " м = " << a << " градусов" << endl;
		y += h;
	} while (y<=3);
}
void task4_for() {
	cout << "\nЗадание 4 при помощи for" << endl;

	int laps = 64, animal = 0;

	for (int rabbits = 0;rabbits <= laps / 4;rabbits++) {
		int geese = (laps - (rabbits * 4)) / 2;

		if ((rabbits * 4 + geese * 2) == laps) {
			animal++;
			cout << "Кроликов: " << rabbits << endl << "Гусей: " << geese << endl;
		}
	}
	cout << "Всего возможных сочетаний: " << animal << endl;
}
void task4_while() {
	cout << "\nЗадание 4 при помощи while" << endl;

	int laps = 64, animal = 0, rabbits = 0;

	while (rabbits <= laps / 4) {
		int geese = (laps - (rabbits * 4)) / 2;

		if ((rabbits * 4 + geese * 2) == laps) {
			animal++;
			cout << "Кроликов: " << rabbits << endl << "Гусей: " << geese << endl;
		}
		rabbits++;
	}
	cout << "Всего возможных сочетаний: " << animal << endl;
}
void task4_do_while() {
	cout << "\nЗадание 4 при помощи do while" << endl;

	int laps = 64, animal = 0, rabbits = 0;

	do
	{
		int geese = (laps - (rabbits * 4)) / 2;
		animal++;
		cout << "Кроликов: " << rabbits << endl << "Гусей: " << geese << endl;
		rabbits++;
	} while (rabbits <= laps / 4);
	cout << "Всего возможных сочетаний: " << animal << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Лабораторная работа №4." << endl;

	task1_for();
	task1_while();
	task1_do_while();

	task2_for();
	task2_while();
	task2_do_while();

	task3_for();
	task3_while();
	task3_do_while();

	task4_for();
	task4_while();
	task4_do_while();

	system("pause");

	return 0;
}
