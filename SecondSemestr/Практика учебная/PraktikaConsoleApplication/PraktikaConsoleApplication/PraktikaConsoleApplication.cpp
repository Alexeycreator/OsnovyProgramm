#include <iostream>
#include <string>
using namespace std;

//Задание 1 (блок 1)
void Task1_block1() {
	double v, v1, t1, t2, distance;
	cout << "Введите скорость лодки в стоячей воде (км/ч): ";
	cin >> v;
	cout << "Введите скорость течения реки (км/ч): ";
	cin >> v1;
	cout << "Введите время движения по озеру (ч): ";
	cin >> t1;
	cout << "Введите время движения против течения реки (ч): ";
	cin >> t2;
	distance = (v * t1) + (v - v1) * t2;
	cout << "Пройденный путь: " << distance << " км" << endl;
}
//Задание 2 (блок 1)
void Task2_block1() {
	double kat1, kat2, hypotenuse;
	cout << "Введите первый катет: ";
	cin >> kat1;
	cout << "Введите второй катет: ";
	cin >> kat2;
	hypotenuse = sqrt(kat1 * kat1 + kat2 * kat2);
	cout << "Длинга гипотенузы = " << hypotenuse << endl;
}
//Задание 3 (блок 1)
void Task3_block1() {
	char letter1, letter2;
	int position1, position2, distance;
	cout << "Введите первую букву: ";
	cin >> letter1;
	cout << "Введите вторую букву: ";
	cin >> letter2;
	// Получаем позиции букв в алфавите
	position1 = (int)letter1 - 'a' + 1;
	position2 = (int)letter2 - 'a' + 1;
	// Определяем расстояние между буквами
	distance = abs(position1 - position2) - 1;
	cout << "Первая буква находится на позиции: " << position1 << endl;
	cout << "Вторая буква находится на позиции: " << position2 << endl;
	cout << "Расстояние между буквами: " << distance << endl;
}
//Задание 4 (блок 1)
void Task4_block1() {
	int position, check;
	char letter;
	cout << "Выберите алфавит (1 - английский, 2 - русский): ";
	cin >> check;
	if (check == 1) {
		cout << "Введите номер буквы в алфавите: ";
		cin >> position;
		// Проверка на корректность ввода
		if (position < 1 || position > 26) {
			cout << "Ошибка: некорректный номер. В английском алфавите 26 букв." << endl;
			return;
		}
		// Определение буквы по номеру
		letter = 'a' + position - 1;
		cout << "Буква с номером " << position << " в английском алфавите: " << letter << endl;
	}
	else if (check == 2) {
		cout << "Введите номер буквы в алфавите: ";
		cin >> position;
		// Проверка на корректность ввода
		if (position < 1 || position > 32) {
			cout << "Ошибка: некорректный номер. В русском алфавите 32 буквы." << endl;
			return;
		}
		// Определение буквы по номеру
		letter = 'а' + position - 1;
		cout << "Буква с номером " << position << " в русском алфавите: " << letter << endl;
	}
	else {
		cout << "Ошибка: Вы не выбрали алфавит" << endl;
		return;
	}
}
//Задание 7 (блок 1)
void Task7_block1() {
	int dl, sh, S, P;
	cout << "Введите длину прямоугольника: ";
	cin >> dl;
	cout << "Ввеидите ширину прямоугольника: ";
	cin >> sh;
	S = dl * sh;
	P = (dl + sh) * 2;
	cout << "Площадь прямоугольника = " << S << endl << "Периметр прямоугольника = " << P << endl;
}
//Задание 8 (блок 1)
void Task8_block1() {
	double r, S, dl;
	cout << "Введите радиус окружности: ";
	cin >> r;
	S = 3.14 * (r * r);
	cout << "Площадь окружности = " << S << endl;
	dl = 3.14 * r;
	cout << "Длина дуги окружности = " << dl << endl;
}
//Задание 9 (блок 1)
void Task9_block1() {
	double Credit_sum, procent, every_mought, Total;
	int n, year;
	cout << "Введите сумму кредита (руб.): ";
	cin >> Credit_sum;
	cout << "Введите процентную ставку в год (%): ";
	cin >> procent;
	procent = procent / 100 / 12;
	cout << "Введите количество лет: ";
	cin >> year;
	n = year * 12;
	every_mought = (Credit_sum * procent * pow(1 + procent, n)) / (pow(1 + procent, n) - 1); // Ежемесячный аннуитетный платеж
	Total = every_mought * n;
	cout << "Ежемесячный платеж: " << every_mought << " руб." << endl;
	cout << "Суммарная выплата: " << Total << " руб." << endl;
}
//Задание 13 (блок 1)
int SurfaceArea(int a, int b, int c) {
	int S;
	S = 2 * (a * b + b * c + a * c);
	return S;
}
int VolumeParallelepiped(int a, int b, int c) {
	int V;
	V = a * b * c;
	return V;
}
void TaskIndivid13_block1() {
	int a, b, c, _v, _s;
	cout << "Введите длину ребра a: ";
	cin >> a;
	cout << "Введите длину ребра b: ";
	cin >> b;
	cout << "Введите длину ребра c: ";
	cin >> c;
	_s = SurfaceArea(a, b, c);
	_v = VolumeParallelepiped(a, b, c);
	cout << "Площадь поверхности = " << _s << endl << "Объем параллепипеда = " << _v << endl;
}
//Задание 14 (блок 1)
void Task14_block1() {
	int reb1, V, S;
	cout << "Введите длину ребра куба: ";
	cin >> reb1;
	V = reb1 * reb1 * reb1;
	S = 6 * (reb1 * reb1);
	cout << "Объем куба = " << V << endl << "Площадь куба = " << S << endl;
}
//Задание 16 (блок 1)
double Calc(double x) {
	double y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	return y;
}
void Task16_block1() {
	double x = 4;
	double result = Calc(x);
	cout << "Ответ: " << result << endl;

}



//Задание 1 (блок 2)
void Task1_block2() {
	cout << "Hello Student!\n";
}
//Задание 2 (блок 2)
void Task2_block2() {
	bool b;
	char c;
	wchar_t w;
	int i;
	float f;
	double d;
	b = true;
	c = 'A';
	w = 655;
	i = 10;
	f = 1.1f;
	d = 1.21e22;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "w = " << w << endl;
	cout << "i = " << i << endl;
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;
}
//Задание 3 (блок 3)
void Task3_block2() {
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	c = a + b;
	cout << "Сумма чисел = " << c << endl;
}
//Задание 4 (блок 4)
void Task4_block2() {
	double a, b, f;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите f: ";
	cin >> f;
	cout << "x= " << (a + b - f / a) + f * pow(a, 2) - (a + b);
}
//Задание 5 (блок 2)
void Task5_block2() {
	int number, sum = 0;
	cout << "Введите трёхзначное число: ";
	cin >> number;
	if (number < 100 || number > 999) {
		cout << "Ошибка!\n";
		return;
	}
	int digit;
	digit = number % 10;
	sum += digit;
	number /= 10;
	digit = number % 10;
	sum += digit;
	number /= 10;
	sum += number;
	cout << "Сумма цифр введенного числа: " << sum << endl;
}
//Задание 6 (блок 2)
void Task6_block2() {
	int a;
	cin >> a;
	a %= 100;
	a /= 10;
	cout << a;
}
//Задание 7 (блок 2)
void Task7_block2() {
	int a;
	cin >> a;
	a /= 60;
	cout << "Минут: " << a << " ";
	a /= 60;
	cout << "Часов: " << a;
}
//Задание 8 (блок 2)
void Task8_block2() {
	double d;
	cout << "Введите угол поворота часовой стрелки: " << endl;
	cin >> d;
	int h = d / 30; // каждый час - 30 градусов
	int m = (d - h * 30) * 2; // каждая минута - 0.5 градуса
	cout << "Сейчас " << h << " часов " << m << " минут.";
}
//Задание 9 (блок 2)
void Task9_block2() {
	int m1[3];
	int m2[3];
	cout << "Второй момент времени должен быть не раньше первого\n";
	cout << "Введите данные для первого момента времени в пордке:\nЧасы(от 0 до 23), минуты(от 0 до 59), секунды(от 0 до 59):\n";
	for (int i = 0; i < 3; i++) {
		cin >> m1[i];
	}
	cout << "Введите данные для второго момента времени в пордке:\nЧас(от 0 до 23), мин(от 0 до 59), сек(от 0 до 59):\n";
	for (int i = 0; i < 3; i++) {
		cin >> m2[i];
	}
	if (((m1[0] >= 0 and m2[0] >= 0) and (m1[0] <= 23 and m2[0] <= 23)) and ((m1[1] >= 0 and m2[1] >= 0 and m1[2] >= 0 and m2[2] >= 0) and ((m1[1] <= 59 and m2[1] <= 59 and m1[2] <= 59 and m2[2] <= 59)))) {


		int sek1 = m1[0] * 60 * 60 + m1[1] * 60 + m1[2];
		int sek2 = m2[0] * 60 * 60 + m2[1] * 60 + m2[2];
		if (sek1 <= sek2) {
			cout << "Разрница в секундах: " << sek2 - sek1;
		}
		else  cout << "Второй момент должен быть не раньше первого";
	}
	else cout << "Данные введены неверно";
}
//Задание 10 (блок 2)
void Task10_block2() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << a + b + c + d;
}
//Задание 11 (блок 2)
void Task11_block2() {
	int choco, coffe, milk;
	cout << "Введите стоимость плитоки шоколада: ";
	cin >> choco;
	cout << "Введите стоимость кофе: ";
	cin >> coffe;
	cout << "Введите стоимость пакета молока: ";
	cin >> milk;
	int sum_product = choco + coffe + milk;
	cout << "Общая сумма покупки товаров: " << sum_product;
}
//Задание 12 (блок 2)
void Task12_block2() {
	int cups, knives, spoons, forks, saucers;
	cout << "Введите количество чашек: ";
	cin >> cups;
	cout << "Введите количество ножей: ";
	cin >> knives;
	cout << "Введите количество ложек: ";
	cin >> spoons;
	cout << "Введите количество вилок: ";
	cin >> forks;
	cout << "Введите количество блюдец: ";
	cin >> saucers;
	int sum_tableware = cups + knives + spoons + forks + saucers;
	cout << "Общее количество предметов для сервировки стола: " << sum_tableware;
}
//Задание 13 (блок 2)
void TaskIndivid13_block2() {
	double sant, duim;
	cout << "Введите значение см: ";
	cin >> sant;
	duim = sant * 2.54;
	cout << "В " << sant << " см: " << duim << " дюйма." << endl;
}
//Задание 14 (блок 2)
void Task14_block2() {
	long long n;
	cin >> n;
	cout << n * (n + 1) / 2 << "\n";
}
//Задание 15 (блок 2)
void Task15_block2() {
	printf("Базовае типы языка с++\n");
	printf("Hello student!\n");
}



//Задание 1 (блок 3)
void Task1_block3() {
	int num1, num2, num3;
	cout << "Введите три целых числа: ";
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 and num1 >= num3) {
		cout << "Наибольшее число: " << num1 << endl;
	}
	else if (num2 >= num1 and num2 >= num3) {
		cout << "Наибольшее число: " << num2 << endl;
	}
	else {
		cout << "Наибольшее число: " << num3 << endl;
	}
}
//Задание 2 (блок 3)
void Task2_block3() {
	int number;
	cout << "Введите число:" << endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << "Число чётное";
	}
	else {
		cout << "Число нечётное";
	}

}
//Задание 3 (блок 3)
void Task3_block3() {
	int a;
	cout << "Enter your number: ";
	cin >> a;
	if (a % 3 == 0) {
		cout << "\nDivisible by three" << endl;
	}
	else {
		cout << "\nNot divisible!" << endl;
	}
}
//Задание 4 (блок 3)
void Task4_block3() {
	double x, y, R;
	cout << "Введите координаты точки (x, y): ";
	cin >> x >> y;
	cout << "Введите радиус круга R: ";
	cin >> R;
	if (sqrt(pow(x, 2) + pow(y, 2)) <= pow(R, 2)) {
		cout << "Точка находится внутри круга.\n";
	}
	else {
		cout << "Точка находится за пределами круга.\n";
	}
}
//Задание 5 (блок 3)
void Task5_block3() {
	float length, radius, diameter;
	cout << "Введите длину стороны квадрата: ";
	cin >> length;
	cout << "Введите радиус круга: ";
	cin >> radius;
	diameter = 2 * radius;
	if (diameter <= length) {
		cout << "Круг может быть вписан в квадрат." << endl;
	}
	else {
		cout << "Квадрат может быть вписан в круг." << endl;
	}
}
//Задание 6 (блок 3)
void Task6_block3() {
	int a;
	cin >> a;
	if (a < 7) {
		cout << "Дошкольник";
	}
	else if (a < 21) {
		cout << "Ученик";
	}
	else if (a < 63) {
		cout << "Работующий";
	}
	else {
		cout << "Пенсионер";
	}
}
//Задание 7 (блок 3)
void Task7_block3() {
	int a, b;
	cin >> a;
	cin >> b;
	if (a < b) {
		cout << a;
	}
	else if (b < a) {
		cout << b;
	}
	else {
		cout << "Числа равны";
	}
}
//Задание 8 (блок 3)
void Task8_block3() {
	int N;
	cin >> N;
	if (N == 0) {
		cout << "Вы ввели ноль.";
	}
	else {
		if (N % 2 == 0)
		{
			cout << "N четное ";
		}
		else
		{
			cout << "N нечетное ";
		}
		if (N > 0)
		{
			cout << " и положительное. ";
		}
		else
		{
			cout << "и отрицательное.";
		}

	}
}
//Задание 9 (блок 3)
void Task9_block3() {
	int data;
	cout << "Введите число дня недели\n";
	cin >> data;
	if (data > 0 && data < 8) {
		if (data > 0 && data < 6) {
			cout << "Будний";
		}
		else {
			cout << "Выходной";
		}
	}
	else {
		cout << "Ошибка. Такого дня недели не существует!";
	}
}
//Задание 13 (блок 3)
void TaskIndivid13_block3() {
	double x, y, total;
	char check;
	cout << "Балл за экзамен: ";
	cin >> x;
	cout << "Балл за полугодие: ";
	cin >> y;
	total = (x + y) / 2;
	if (total >= 90.1 && total <= 100) {
		check = 'A';
		cout << "Общий балл: " << total << endl << "Его оценка: " << check << endl;
	}
	else if (total >= 74.4 && total <= 90) {
		check = 'B';
		cout << "Общий балл: " << total << endl << "Его оценка: " << check << endl;
	}
	else if (total >= 60.1 && total <= 74.3) {
		check = 'C';
		cout << "Общий балл: " << total << endl << "Его оценка: " << check << endl;
	}
	else {
		check = 'F';
		cout << "Общий балл: " << total << endl << "Его оценка: " << check << endl;
	}
}
//Задание 14 (блок 3)
void Task14_block3() {
	double a, b, c;
	cin >> a >> b >> c;
	double discriminant = b * b - 4 * a * c;
	if (discriminant > 0) {
		double root1 = (-b + sqrt(discriminant)) / (2 * a);
		double root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Уравнение имеет два корня: D = " << discriminant << ". Первый корень = " << max(root1, root2) << ", второй корень = " << min(root1, root2) << ". Больший корень = " << max(root1, root2) << endl;
	}
	else if (discriminant == 0) {
		double root = -b / (2 * a);
		cout << "Уравнение имеет один корень: D = " << discriminant << ". Единственный корень = " << root << endl;
	}
	else {
		cout << "Уравнение не имеет корней: D = " << discriminant << ". Уравнение не имеет корней" << endl;
	}
}
//Задание 15 (блок 3)
void Task15_block3() {
	cout << "Операторы ветвления языка с++\n";
	int distance, weight;
	cout << "Введите расстояние в километрах: ";
	cin >> distance;
	//int distance = 134;
	cout << "Введите вес посылки в килограммах: ";
	cin >> weight;
	//int weight = 40;
	int cost;
	if (distance < 10) {
		cost = 100 * weight;
	}
	else if (distance <= 50) {
		cost = 300 * weight;
	}
	else {
		cost = 750 * weight;
	}
	int delivery_time = distance / 60; // Время доставки в часах
	if (distance % 60 != 0) {
		delivery_time++; // Если есть остаток от деления, добавляем ещё один час
	}
	cout << "Доставка будет ехать ";
	if (delivery_time < 1) {
		cout << "меньше часа";
	}
	else if (delivery_time == 1) {
		cout << "ровно час";
	}
	else {
		cout << "больше часа";
	}
	cout << ", стоимость - " << cost << " руб." << endl;
}
//Задание 16 (блок 3)
void Task16_block3() {
	char startCol, endCol;
	int startRow, endRow;
	cout << "Введите начальную позицию (буква и число): ";
	cin >> startCol >> startRow;
	cout << "Введите конечную позицию (буква и число): ";
	cin >> endCol >> endRow;
	int colDiff = abs(endCol - startCol);
	int rowDiff = abs(endRow - startRow);
	if ((colDiff == 1 && rowDiff == 2) || (colDiff == 2 && rowDiff == 1)) {
		cout << "Ход допустим для коня" << endl;
	}
	else if (tolower(startCol) == tolower(endCol) && (endRow - startRow == 1)) {
		cout << "Ход допустим для пешки" << endl;
	}
	else {
		cout << "Ход недопустим ни для одной фигуры" << endl;
	}
}



//Задание 1 (блок 4)
void Task1_block4() {
	int num, minnum = 100500, maxnum = -100500;
	cout << "Введите последовательность целых чисел (для завершения введите -1): ";
	while (true) {
		cin >> num;
		if (num == -1) {
			break;
		}
		if (num < minnum) {
			minnum = num;
		}
		if (num > maxnum) {
			maxnum = num;
		}
	}
	cout << "Минимальное число: " << minnum << endl;
	cout << "Максимальное число: " << maxnum << endl;
}
//Задание 2 (блок 4)
void Task2_block4() {
	int number, originalNumber, reversedNumber = 0, remainder;
	cout << "Введите целое положительное число: ";
	cin >> number;
	originalNumber = number;
	while (number != 0) {
		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	if (originalNumber == reversedNumber) {
		cout << originalNumber << " является палиндромом" << std::endl;
	}
	else {
		cout << originalNumber << " не является палиндромом" << std::endl;
	}
}
//Задание 3 (блок 4)
void Task3_block4() {
	float a;
	cout << "Сколько литров выпивает Павел: ";
	cin >> a;
	for (int i = 0; ; i++) {
		if (a > 1) {
			a = (a / 2) - 1;
			i++;
		}
		else {
			cout << "\nДни в поездке - " << i - 2 << endl;
			break;
		}
	}
}
//Задание 4 (блок 4)
void Task4_block4() {
	int N;
	cout << "Введите целое число N: ";
	cin >> N;
	cout << "Делители числа " << N << ": ";
	for (int i = 1; i <= N; ++i) {
		if (N % i == 0) {
			cout << i << " ";
		}
	}
}
//Задание 5 (блок 4)
void Task5_block4() {
	int num, osnovanie;
	cout << "Введите целое положительное число в десятичной системе: ";
	cin >> num;
	cout << "Введите основание системы счисления от 2 до 9: ";
	cin >> osnovanie;
	int result[32];
	int index = 0;
	while (num > 0) {
		result[index] = num % osnovanie;
		num /= osnovanie;
		index++;
	}
	cout << "Число в системе с основанием " << osnovanie << ": ";
	for (int i = index - 1; i >= 0; --i) {
		cout << result[i];
	}
}
//Задание 9 (блок 4)
void Task9_block4() {
	int a, b, o;
	bool f;
	cout << "Введите два числа:\n";
	cin >> a;
	cin >> b;
	do {
		f = true;
		cout << "Введите операцию:\n";
		cin >> o;
		switch (o) {
		case 0:
			cout << "Программа завершена.";
			break;
		case 1:
			cout << a + b;
			break;
		case 2:
			cout << a - b;
			break;
		case 3:
			cout << a * b;
			break;
		case 4:
			if (b != 0) {
				cout << a / b;
			}
			else cout << "Делить на ноль нельзя!\n";
			f = false;
			break;
		default:
			cout << "Неверная команда!\n";
			f = false;
			break;
		}
	} while (!f);
}
//Задание 11 (блок 4)
void Task11_block4() {
	int N;
	cin >> N;
	while (N >= 0)
	{
		cout << N << endl;
		N--;
	}
}
//Задание 12 (блок 4)
void Task12_block4() {
	int number;
	cout << "Введите целое положительное число N: ";
	cin >> number;
	for (int i = 1; i <= number; i++) {
		int cubes_of_numbers = i * i * i;
		cout << "Куб числа " << i << " равен: " << cubes_of_numbers << '\n';
	}
}
//Задание 13 (блок 4)
void TaskIndivid13_block4() {
	int N;
	cout << "Введите целое неотрицательное число: ";
	cin >> N;
	for (int i = 1; i <= N; i += 2) {
		cout << i << "\t";
	}
	cout << endl;
}
//Задание 14 (блок 4)
void Task14_block4() {
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << sum;
}
//Задание 15 (блок 4)
void Task15_block4() {
	cout << "Операторы организации языка с++\n";
	int N;
	cout << "Введите целое положительное число N: ";
	cin >> N;

	int product = 1;
	bool found = false;
	for (int i = 1; i < N; i++) {
		if (i % 6 == 0 && i % 9 != 0) {
			product *= i;
			found = true;
		}
	}
	if (found) {
		cout << "Произведение чисел от 1 до N, делящихся на 6, но не делящихся на 9: " << product << endl;
	}
	else {
		cout << "Такие числа не найдены, произведение равно 1" << endl;
	}
}
//Задание 16 (блок 4)
void Task16_block4() {
	int N;
	cout << "Введите целое положительное число N: ";
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0 && i % 10 == 9) {
			sum += i;
		}
	}
	if (sum > 0) {
		cout << "Сумма чисел от 1 до " << N << ", которые делятся на 3 и оканчиваются на 9: " << sum << endl;
	}
	else {
		cout << "Такие числа не найдены" << endl;
	}
}



//Задание 1 (блок 5)
void Task1_block5() {
	double m, h;
	double* ptr_m = &m;
	double* ptr_h = &h;
	const double g = 9.81; // Ускорение свободного падения
	cout << "Введите массу (кг): ";
	cin >> m;
	cout << "Введите высоту (м): ";
	cin >> h;
	double Ep = (*ptr_m) * g * (*ptr_h); // Вычисление потенциальной энергии
	cout << "Потенциальная энергия: " << Ep << " Дж" << endl;

}
//Задание 2 (блок 5)
void Task2_block5() {
	double k = 3.14;
	double* p = &k;
	double** const cp = &p;
	cout << "Исходное значение k: " << k << endl;
	**cp = 2.71828; // Меняем значение переменной k через cp
	cout << "Новое значение k после изменения через cp: " << k << endl;
}
//Задание 3 (блок 5)
void TaskIndivid3_block5() {
	char c = 'A';
	char* ptr = &c;
	char** ptr_ptr = &ptr;
	cout << "Изначальное значение переменной c: " << c << endl;
	**ptr_ptr = 'B';
	cout << "Измененное значение переменной c: " << c << endl;
}
//Задание 4 (блок 5)
void Task4_block5() {
	int a = 5, b = 10, c;
	int* ptr = &a;
	int& ref = b;
	c = *ptr + ref;
	cout << "Сумма a и b равна: " << c << endl;
}
//Задание 5 (блок 5)
void Task5_block5() {
	cout << "Указатели и ссылки\n";
	int a = 7, b = 11;
	int* ptr = &a; // указатель на первую переменную
	int& ref = b; // ссылка на вторую переменную
	int c = *ptr + ref; // сумма первых двух переменных через указатель и ссылку
	cout << "Сумма первых двух переменных: " << c << endl;
}
//Задание 9 (блок 5)
void Task9_block5() {
	int a = 5, b = 3, c;
	int& p1 = a;
	int& p2 = b;
	c = (p1 + p2) * (p1 - p2);
	cout << c;
}



//Задание 2 (блок 6)
void Task2_block6() {
	const int n = 5;
	int mas[n] = { 1,3,5,7,6 };
	bool t = false;
	for (int i = 0; i < n; i++) {
		int num = mas[i];
		if (num > 0 && (num & (num - 1)) == 0) {
			t = true;
			break;
		}
	}
	if (t) cout << "В массиве есть элемент, являющийся степенью 2";
	else cout << "Нужных элементов нет"; //1 считается степенью двойки
}
//Задание 13 (блок 6)
void TaskIndivid13_block6() {
	const int n = 5;
	int arr[n] = { 4, 8, 2, 6, 10 };
	int max = -100500, min = 100500, maxIndex, minIndex, sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	int _max = minIndex < maxIndex ? minIndex : maxIndex;
	int _min = minIndex < maxIndex ? maxIndex : minIndex;
	for (int i = _max; i <= _min; i++) {
		sum += arr[i];
	}
	cout << "\nСумма элементов между " << max << " и " << min << " = " << sum << endl;
}
//Задание 15 (блок 6)
void Task15_block6() {
	cout << "Массивы\n";
	const int n = 6;
	int arr[n] = { 10, 5, 3, 8, 2, 7 };
	// Находим минимальный элемент массива и его индекс
	int min_element = 100500;
	int min_index = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min_element) {
			min_element = arr[i];
			min_index = i;
		}
	}
	cout << "Минимальный элемент массива: " << min_element << ", его номер: " << min_index << endl;
	// Находим второй минимальный элемент и его индекс
	int second_min_element = 100500;
	int second_min_index = -1;
	for (int i = 0; i < n; i++) {
		if (i != min_index && arr[i] < second_min_element) {
			second_min_element = arr[i];
			second_min_index = i;
		}
	}
	cout << "Элемент, являющийся минимальным без учета первого найденного элемента: " << second_min_element
		<< ", его номер: " << second_min_index << endl;
}
//Задание 16 (блок 6)
void Task16_block6() {
	int* dyn = new int;
	*dyn = 16;
	cout << "Значение динамической переменной: " << *dyn << endl;
	delete dyn;
}
//Задание 31 (блок 6)
void Task31_block6() {
	const int rows = 3;
	const int cols = 3;
	int array[rows][cols] = { {3, 7, 2}, {9, 4, 6}, {1, 8, 5} };
	int maxEl = array[0][0];
	int rowIndex = 0;
	int colIndex = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] > maxEl) {
				maxEl = array[i][j];
				rowIndex = i;
				colIndex = j;
			}
		}
	}
	cout << "Максимальный элемент: " << maxEl << endl;
	cout << "Индексы: [" << rowIndex << "][" << colIndex << "]" << endl;
}


//Задание 2 (блок 7)
struct Zavod {
	char fam[100];
	float vozrast;
	char spec[100];
	int oklad;
};
void Task2_block7() {
	const int N = 3;
	Zavod mas[N];
	for (int i = 0; i < N; i++) {
		cout << "Фамилия:" << endl;	
		cin >> mas[i].fam;
		cout << "Средний возраст:" << endl;
		cin >> mas[i].vozrast;
		cout << "Специальность:" << endl;
		cin >> mas[i].spec;
		cout << "Оклад:" << endl;
		cin >> mas[i].oklad;
	}
	for (int i = 0; i < N; i++) {
		if (mas[i].vozrast > 35) {
			cout << "Завод №" << i + 1 << endl;
		}
	}

}
//Задание 13 (блок 7)
struct NOTE
{
	string fullName;
	string phoneNumber;
	int date[3];
};
void SortedNotes(NOTE* student, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (student[j].fullName > student[j + 1].fullName) {
				string temp = student[j].fullName;
				student[j].fullName = student[j + 1].fullName;
				student[j].fullName = temp;
			}
		}
	}
}
void TaskIndivid13_block7() {
	const int n = 3;
	NOTE student[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите ФИО: ";
		getline(cin, student[i].fullName);
		cout << "Введите номер телефона: ";
		cin >> student[i].phoneNumber;
		cout << "Введите дату рождения (через пробел): ";
		cin >> student[i].date[0] >> student[i].date[1] >> student[i].date[2];
		cin.ignore();
	}
	SortedNotes(student, n);
	int month;
	cout << "Введите номер месяца: ";
	cin >> month;
	if (month >= 1 && month <= 12) {
		bool found = false;
		for (int i = 0; i < n; i++) {
			if (student[i].date[1] == month) {
				found = true;
				cout << "\nИнформация о человеке с днем рождения в " << month << " месяце:\n";
				cout << "Фамилия, Имя: " << student[i].fullName << endl;
				cout << "Номер телефона: " << student[i].phoneNumber << endl;
				cout << "Дата рождения: " << student[i].date[0] << "." << student[i].date[1] << "." << student[i].date[2] << endl;
			}
		}
		if (!found) {
			cout << "Людей с днем рождения в указанном месяце нет." << endl;
		}
	}
	else {
		cout << "Ошибка: данного месяца с таким номером не существует." << endl;
	}
}
//Задание 15 (блок 7)
struct NOTE2 {
	string name;
	string phoneNumber;
	int birthDate[3];
};
const int ARRAY_SIZE = 2;
NOTE2 notes[ARRAY_SIZE];
void Task15_block7() {
	cout << "Пользовательские типы данных.Структура\n";
	// Ввод данных с клавиатуры
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "Введите данные для человека " << i + 1 << ":" << endl;
		cout << "Фамилия, имя: ";
		cin >> notes[i].name;
		cout << "Номер телефона: ";
		cin >> notes[i].phoneNumber;
		cout << "Дата рождения (через пробел день, месяц, год): ";
		for (int j = 0; j < 3; j++) {
			cin >> notes[i].birthDate[j];
		}
	}
	// Сортировка по трем первым цифрам номера телефона (пузырьковая сортировка)
	for (int i = 0; i < ARRAY_SIZE - 1; i++) {
		for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
			/*if (notes[j].phoneNumber.substr(0, 3) > notes[j + 1].phoneNumber.substr(0, 3)) {//супер легкий способ
				NOTE temp = notes[j];
				notes[j] = notes[j + 1];
				notes[j + 1] = temp;
			}*/
			if (notes[j].phoneNumber[0] > notes[j + 1].phoneNumber[0] ||
				(notes[j].phoneNumber[0] == notes[j + 1].phoneNumber[0] &&
					notes[j].phoneNumber[1] > notes[j + 1].phoneNumber[1]) ||
				(notes[j].phoneNumber[0] == notes[j + 1].phoneNumber[0] &&
					notes[j].phoneNumber[1] == notes[j + 1].phoneNumber[1] &&
					notes[j].phoneNumber[2] > notes[j + 1].phoneNumber[2])) {
				NOTE2 temp = notes[j];
				notes[j] = notes[j + 1];
				notes[j + 1] = temp;
			}
		}
	}
	// Поиск по фамилии
	string searchName;
	cout << "Введите фамилию для поиска: ";
	cin >> searchName;
	bool found = false;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (notes[i].name == searchName) {
			found = true;
			cout << "Информация о человеке с фамилией " << searchName << ":" << endl;
			cout << "Имя: " << notes[i].name << endl;
			cout << "Номер телефона: " << notes[i].phoneNumber << endl;
			cout << "Дата рождения: " << notes[i].birthDate[0] << "/" << notes[i].birthDate[1] << "/" << notes[i].birthDate[2] << endl;
			break;
		}
	}
	if (!found) {
		cout << "Человека с фамилией " << searchName << " в массиве нет." << endl;
	}
}




//Задание 2 (блок 8)
void Print(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
}
void Task2_block8() {
	const int n = 3, m = 3;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = 1 + rand() % 20;
		}
	}
	Print(mas, n, m);

}
//Задание 3 (блок 8)
void ProizvedFunc(int x) {
	for (int i = 1; i <= 9; i++) {
		int proizved = x * i;
		cout << x << " x " << i << " = " << proizved << endl;
	}
}
void TaskIndivid3_block8() {
	int x;
	cout << "Введите число: ";
	cin >> x;
	ProizvedFunc(x);
}
//Задание 5 (блок 8)
void Task5_block8() {
	cout << "Функции\n";
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS] = { {1, 5, 3, 7},
							{9, 2, 8, 4},
							{6, 0, 10, 12} };
	int sum_max_values = 0;
	for (int i = 0; i < ROWS; i++) {
		int max_value = arr[i][0]; // Предположим, что первый элемент в строке - максимальный
		for (int j = 1; j < COLS; j++) {
			if (arr[i][j] > max_value) {
				max_value = arr[i][j]; // Найдем максимальное значение в строке
			}
		}
		sum_max_values += max_value; // Добавим максимальное значение строки к общей сумме
	}
	cout << "Сумма максимальных значений в строках двумерного массива: " << sum_max_values << endl;
}


//Задание 2 (блок 9)
struct elem
{
	int p1;
	elem* p2;
};
void AddStack(elem*& st, int k)
{
	elem* tmp = new elem{ k, NULL };
	if (st == NULL) {
		st = tmp;
	}
	else {
		tmp->p2 = st;
		st = tmp;
	}
}
void Task2_block9() {
	const int n = 5;
	int mas[n] = { 1,2,3,4,5 };
	elem* S1 = NULL;
	for (int i = 0; i < n; i++) {
		AddStack(S1, mas[i]);
	}
}
//Задание 3 (блок 9)
struct Node
{
	int data;
	Node* next;
};
bool IsNull(Node* node) {
	return node == NULL;
}
void TaskIndivid3_block9() {
	Node* node = NULL;
	if (IsNull(node)) {
		cout << "Список пустой!" << endl;
	}
	else {
		cout << "Список не пустой!" << endl;
	}
}
//Задание 5 (блок 9)
struct Node2 {
	int data;
	Node2* next;
};
Node2* head = nullptr;
// Добавление элемента в однонаправленный список
void append(int value, Node2*& head) {
	Node2* newNode = new Node2{ value, nullptr };
	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node2* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
// Вывод элементов списка
void output(Node2* head) {
	if (head == nullptr) {
		cout << "Error! List is empty" << endl;
	}
	else {
		Node2* temp = head;
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}
// Удаление элемента по ключу
void deleteKey(int key, Node2*& head) {
	// Если список пуст
	if (head == nullptr) {
		cout << "List is empty!" << endl;
		return;
	}
	// Если голова является нужным элементом
	if (head->data == key) {
		Node2* temp = head;
		head = head->next;
		delete temp;
		printf("Элемент: [%i] успешно удалён.\n", key);
		return;
	}
	// Поиск элемента с нужным ключом
	Node2* temp = head;
	while (temp->next != nullptr && temp->next->data != key) {
		temp = temp->next;
	}
	// Если нашли нужый элемент
	if (temp->next != nullptr && temp->next->data == key) {
		Node2* nodeDelete = temp->next;
		temp->next = temp->next->next;
		delete nodeDelete;
		printf("Элемент: [%i] успешно удалён.\n", key);
	}
	else {
		printf("Элемент c таким ключом не найден\n");
	}
}
void Task5_block9() {
	int const N = 5;
	int mas[N] = { 1, 2, 3, 4, 5 };
	// Добавление элементов массива в список
	for (int i = 0; i < N; i++) {
		append(mas[i], head);
	}
	// Вывод элементов списка до удаления
	output(head);
	// Удаление элемента
	deleteKey(4, head);
	// Вывод элементов списка после удаления элемента
	output(head);
}


int main()
{
	setlocale(LC_ALL, "rus");
	/*cout << "Задание № 1 (блок 1)" << endl;
	Task1_block1();
	cout << "Задание № 2 (блок 1)" << endl;
	Task2_block1();
	cout << "Задание № 3 (блок 1)" << endl;
	Task3_block1();
	cout << "Задание № 4 (блок 1)" << endl;
	Task4_block1();
	cout << "Задание № 7 (блок 1)" << endl;
	Task7_block1();
	cout << "Задание № 8 (блок 1)" << endl;
	Task8_block1();
	cout << "Задание № 9 (блок 1)" << endl;
	Task9_block1();
	cout << "Задание № 13 (блок 1)" << endl;
	TaskIndivid13_block1();
	cout << "Задание № 14 (блок 1)" << endl;
	Task14_block1();*/
	/*cout << "Задание № 16 (блок 1)" << endl;
	Task16_block1();*/



	/*cout << "Задание № 1 (блок 2)" << endl;
	Task1_block2();*/
	/*cout << "Задание № 2 (блок 2)" << endl;
	Task2_block2();*/
	/*cout << "Задание № 3 (блок 2)" << endl;
	Task3_block2();*/
	/*cout << "Задание № 4 (блок 2)" << endl;
	Task4_block2();*/
	/*cout << "Задание № 5 (блок 2)" << endl;
	Task5_block2();*/
	/*cout << "Задание № 6 (блок 2)" << endl;
	Task6_block2();*/
	/*cout << "Задание № 7 (блок 2)" << endl;
	Task7_block2();*/
	/*cout << "Задание № 8 (блок 2)" << endl;
	Task8_block2();*/
	/*cout << "Задание № 9 (блок 2)" << endl;
	Task9_block2();*/
	/*cout << "Задание №10 (блок 2)" << endl;
	Task10_block2();*/
	/*cout << "Задание № 11 (блок 2)" << endl;
	Task11_block2();*/
	/*cout << "Задание № 12 (блок 2)" << endl;
	Task12_block2();*/
	/*cout << "Задание № 13 (блок 2)" << endl;
	TaskIndivid13_block2();*/
	/*cout << "Задание № 14 (блок 2)" << endl;
	Task14_block2();*/
	/*cout << "Задание № 15 (блок 2)" << endl;
	Task15_block2();*/



	/*cout << "Задание № 1 (блок 3)" << endl;
	Task1_block3();*/
	/*cout << "Задание № 2 (блок 3)" << endl;
	Task2_block3();*/
	/*cout << "Задание № 3 (блок 3)" << endl;
	Task3_block3();*/
	/*cout << "Задание № 4 (блок 3)" << endl;
	Task4_block3();*/
	/*cout << "Задание № 5 (блок 3)" << endl;
	Task5_block3();*/
	/*cout << "Задание № 6 (блок 3)" << endl;
	Task6_block3();*/
	/*cout << "Задание № 7 (блок 3)" << endl;
	Task7_block3();*/
	/*cout << "Задание № 8 (блок 3)" << endl;
	Task8_block3();*/
	/*cout << "Задание № 9 (блок 3)" << endl;
	Task9_block3();*/
	/*cout << "Задание № 13 (блок 3)" << endl;
	TaskIndivid13_block3();*/
	/*cout << "Задание № 14 (блок 3)" << endl;
	Task14_block3();*/
	/*cout << "Задание № 15 (блок 3)" << endl;
	Task15_block3();*/
	/*cout << "Задание № 16 (блок 3)" << endl;
	Task16_block3();*/



	/*cout << "Задание № 1 (блок 4)" << endl;
	Task4_block4();*/
	/*cout << "Задание № 2 (блок 4)" << endl;
	Task2_block4();*/
	/*cout << "Задание № 3 (блок 4)" << endl;
	Task3_block4();*/
	/*cout << "Задание № 4 (блок 4)" << endl;
	Task4_block4();*/
	/*cout << "Задание № 5 (блок 4)" << endl;
	Task5_block4();*/
	/*cout << "Задание № 9 (блок 4)" << endl;
	Task9_block4();*/
	/*cout << "Задание № 11 (блок 4)" << endl;
	Task11_block4();*/
	/*cout << "Задание № 12 (блок 4)" << endl;
	Task12_block4();*/
	/*cout << "Задание № 13 (блок 4)" << endl;
	TaskIndivid13_block4();*/
	/*cout << "Задание № 14 (блок 4)" << endl;
	Task14_block4();*/
	/*cout << "Задание № 15 (блок 4)" << endl;
	Task15_block4();*/
	/*cout << "Задание № 16 (блок 4)" << endl;
	Task16_block4();*/



	/*cout << "Задание № 1 (блок 5)" << endl;
	Task1_block5();*/
	/*cout << "Задание № 2 (блок 5)" << endl;
	Task2_block5();*/
	/*cout << "Задание № 3 (блок 5)" << endl;
	TaskIndivid3_block5();*/
	/*cout << "Задание № 4 (блок 5)" << endl;
	Task4_block5();*/
	/*cout << "Задание № 5 (блок 5)" << endl;
	Task5_block5();*/
	/*cout << "Задание № 9 (блок 5)" << endl;
	Task9_block5();*/



	/*cout << "Задание № 2 (блок 6)" << endl;
	Task2_block6();*/
	/*cout << "Задание № 13 (блок 6)" << endl;
	TaskIndivid13_block6();*/
	/*cout << "Задание № 15 (блок 6)" << endl;
	Task15_block6();*/
	/*cout << "Задание № 16 (блок 6)" << endl;
	Task16_block6();
	cout << "Задание № 31 (блок 6)" << endl;
	Task31_block6();*/



	/*cout << "Задание № 2 (блок 7)" << endl;
	Task2_block7();*/
	/*cout << "Задание № 13 (блок 7)" << endl;
	TaskIndivid13_block7();*/
	/*cout << "Задание № 15 (блок 7)" << endl;
	Task15_block7();*/



	//cout << "Задание № 2 (блок 8)" << endl;
	//Task2_block8();
	///*cout << "Задание № 3 (блок 8)" << endl;
	//TaskIndivid3_block8();*/
	/*cout << "Задание № 5 (блок 8)" << endl;
	Task5_block8();*/



	//cout << "Задание № 2 (блок 9)" << endl;
	//Task2_block9();
	/*cout << "Задание № 3 (блок 9)" << endl;
	TaskIndivid3_block9();*/
	/*cout << "Задание № 5 (блок 9)" << endl;
	Task5_block9();*/
}
