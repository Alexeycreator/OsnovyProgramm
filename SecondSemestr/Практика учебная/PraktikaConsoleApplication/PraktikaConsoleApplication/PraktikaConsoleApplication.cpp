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
//Задание 3 (блок 2)
void Task3_block2() {
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	c = a + b;
	cout << "Сумма чисел = " << c << endl;
}
//Задание 4 (блок 2)
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
	int a = 3, b = a + 3, c = a + b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
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
	cout << "Введиет число: ";
	cin >> a;
	if (a % 3 == 0) {
		cout << "\nЧисло делится на 3" << endl;
	}
	else {
		cout << "\nНе делится!" << endl;
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
//Задание 10 (блок 3)
void Task10_block3() {
	cout << "task_3_variant10\n";
	string player1, player2;
	cin >> player1 >> player2;
	if (player1 == player2) {
		cout << "Ничья" << endl;
	}
	if ((player1 == "камень" && player2 == "ножницы") || (player1 == "ножницы" && player2 == "бумага") || (player1 == "бумага" && player2 == "камень"))
	{
		cout << "Игрок 1 выиграл" << endl;
	}
	else {
		cout << "Игрок 2 выиграл" << endl;
	}
}
//Задание 11 (блок 3)
void Task11_block3() {
	string month;
	cin >> month;
	if ((month == "september") || (month == "october") || (month == "november")) {
		cout << "autumn" << endl;
	}
	else if ((month == "december") || (month == "january") || (month == "february")) {
		cout << "winter" << endl;
	}
	else if ((month == "june") || (month == "july") || (month == "august")) {
		cout << "summer" << endl;
	}
	else if ((month == "march") || (month == "april ") || (month == "may")) {
		cout << "spring" << endl;
	}
	else {
		cout << "error" << endl;
	}

}
//Задание 12 (блок 3)
void Task12_block3() {
	int price, discount;
	cout << "Цена на товар: ";
	cin >> price;
	cout << "Скидка в процентах: ";
	cin >> discount;
	if (price <= 150 && discount <= 50) {
		cout << "«Ошибка 1. Низкая цена» – если цена не превышает 150 руб., но скидка меньше или равна 50 %";
	}
	else if (price > 150 && discount > 50) {
		cout << "«Ошибка 2. Большая скидка» – если скидка больше 50 %, но цена превышает 150 руб.";
	}
	else if (price <= 150 && discount > 50) {
		cout << "«Ошибка 3. Оба условия» – если оба условия не соблюдаются";
	}
	else {
		float price_with_discount = price - (price * discount / 100);
		cout << price_with_discount;
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
//Задание 17 (блок 3)
void Task17_block3() {
	int min, hours;
	cin >> min;
	hours = min / 60;
	if (hours >= 4 && hours <= 11) {
		cout << "morning" << endl;
	}
	else if (hours >= 12 && hours <= 16) {
		cout << "afternoon" << endl;
	}
	else if (hours >= 17 && hours <= 23) {
		cout << "evening" << endl;
	}
	else if ((hours >= 0 || hours == 24) && hours <= 3) {
		cout << "night" << endl;
	}
	else {
		cout << "error" << endl;
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
		reversedNumber = reversedNumber * 10 + remainder; //перевернутое число, которое ввели, то и получили - палиндром
		number /= 10;
	}
	if (originalNumber == reversedNumber) {
		cout << originalNumber << " является палиндромом" << endl;
	}
	else {
		cout << originalNumber << " не является палиндромом" << endl;
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
	int num;
	cout << "Введите целое положительное число в десятичной системе: ";
	cin >> num;
	int result = 0;
	int index = 0;
	if (num > 0) {
		while (num > 0) {
			result += num % 10;
			num /= 10;
		}
		cout << "Число в системе с основанием " << ": " << result;
	}
	else {
		cout << "Число отрицательное" << endl;
	}
}
//Задание 6 (блок 4)
void Task6_block4() {
	int n;
	cin >> n;
	int even_product = 1, odd_product = 1;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 0) {
			even_product *= digit;
		}
		else {
			odd_product *= digit;
		}
		n /= 10;
	}
	if (even_product == 1 && odd_product == 1) {
		cout << "1 1";
	}
	else {
		if (even_product == 1) {
			cout << "1 ";
		}
		else {
			cout << even_product << " ";
		}
		if (odd_product == 1) {
			cout << "1";
		}
		else {
			cout << odd_product;
		}
	}
}
//Задание 7 (блок 4)
void Task7_block4() {
	int N;
	cin >> N;
	for (int i = 1; i < N; ++i) {
		cout << "Урожай растет. Прошло " << i << " д." << endl;
	}
	cout << "Урожай созрел!" << endl;
}
//Задание 8 (блок 4)
void Task8_block4() {
	int N;
	cin >> N;
	int a = 0, b = 1, m = 1;

	while (b < N) {
		int next = a + b;
		a = b;
		b = next;
		m++;
	}

	if (b == N) {
		cout << m;
	}
	else {
		cout << "Число не является числом Фибоначчи.";
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
//Задание 10 (блок 4)
void Task10_block4() {
	int N = 4;
	for (int i = 1; i <= N; ++i) {
		if (i % 2 == 0) {
			cout << "Я сдам все экзамены\n";
		}
		else {
			cout << "Я успешно защищу диплом\n";
		}
	}
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
//Задание 17 (блок 4)
void Task17_block4() {
	int k = 0;
	int x;
	cin >> x;
	if (x % 1000 == 763) {
		cout << "Число оканчивающееся на 763" << endl;
	}
	else {
		cout << "Число должно быть четырехзначное" << endl;
	}
}
//Задание 18 (блок 4)
void Task18_block4() {
	int n, n2;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> n2;
		if (n2 / 100 == 6) {
			while (n2 != 0) {
				int c = n2 % 10;
				sum += c;
				n2 /= 10;
			}
		}
	}
	cout << "SUm= " << sum << endl;
}
//Задание 19 (блок 4)
void Task19_block4() {
	int n, m;
	cin >> n >> m;
	for (int i = n; i < m; i++) {
		if (i % 10 == (i % 100) / 10 && (i % 100) / 10 == i % 10) {
			cout << i << " " << endl;
		}
	}
}
//Задание 20 (блок 4)
void Task20_block4() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << j << " ";
		}
		cout << endl;
	}
}
//Задание 21 (блок 4)
void Task21_block4() {
	int D;
	cin >> D;
	for (int i = 100; i < 300; i++) {
		if (i % D == 0) {
			cout << i << " ";
		}
	}
}
//Задание 22 (блок 4)
void Task22_block4() {
	int x;
	double sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> x;
		sum += x;
	}
	printf("%.2f\n", sum);
}
//Задание 23 (блок 4)
bool isPrime(int number) {
	if (number <= 1) return false;
	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0) return false;
	}
	return true;
}
void Task23_block4() {
	int N;
	cin >> N;
	for (int i = 2; i <= N + 5; ++i) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}cout << endl;
}
//Задание 24 (блок 4)
bool isPerfectSquare(int product) {
	for (int i = 1; i * i <= product; ++i) {
		if (i * i == product) {
			return true;
		}
	}
	return false;
}
void Task24_block4() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = i; j <= N; ++j) {
			if (isPerfectSquare(i * j)) {
				cout << i << ", " << j << endl;
			}
		}
	}
}
//Задание 25 (блок 4)
void Task25_block4() {
	int N;
	cin >> N;
	for (int x = 1; x <= 1000; ++x) {
		for (int y = x; y <= 1000; ++y) {
			if (y * y - x * x == N) {
				cout << "(" << x << ", " << y << ")" << endl;
			}
		}
	}
}
//Задание 26 (блок 4)
void Task26_block4() {
	int N, S;
	cin >> N >> S;
	for (int x = 1; x <= 500; ++x) {
		for (int y = x; y <= 500; ++y) {
			if (x * y == N && x + y == S) {
				cout << "(" << x << ", " << y << ")" << endl;
			}
		}
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
//Задание 6 (блок 5)
void Task6_block5() {
	int a = 3, b = 4, c = 7;
	int& _a = a;
	int& _b = b;
	int& _c = c;
	int& min = _a;
	if (_b < min) {
		min = _b;
	}
	else if (_c < min) {
		min = _c;
	}
	cout << "Минимальное значение: " << min << endl;
}
//Задание 7 (блок 5)
void Task7_block5() {
	int a = 5, b = 12, c = 7;
	int* ptr;
	if (a <= b && a <= c) {
		ptr = &a;
	}
	else if (b <= a && b <= c) {
		ptr = &b;
	}
	else {
		ptr = &c;
	}
	cout << "Наименьшее значение: " << *ptr << endl;
}
//Задание 8 (блок 5)
void Task8_block5() {
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 15;
		cout << arr[i] << "\t";
		//cin >> arr[i];
	}
	int* _max = &arr[0];
	for (int i = 0; i < n; i++) {
		if (_max < &arr[i]) {
			_max = &arr[i];
		}
	}
	cout << "\nМаксимальное значение в массиве = " << *_max << endl;
}
//Задание 9 (блок 5)
void Task9_block5() {
	int a = 5, b = 3, c;
	int& p1 = a;
	int& p2 = b;
	c = (p1 + p2) * (p1 - p2);
	cout << c;
}
//Задание 10 (блок 5)
void Task10_block5() {
	int x = 5;
	int y = 10;
	int& ref = x;
	int* ptr = &y;
	*ptr = *ptr * 2;
	ref = ref * 2;
	cout << "Значение переменной x после удвоения через ссылку: " << x << endl;
	cout << "Значение переменной y после удвоения через указатель: " << y << endl;
}


//Задание 1 (блок 6)
void task1_block6() {
	const int n = 11;
	int m[n] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5 }; // Пример массива
	// Начинаем с самой длинной серии равных элементов равной 1
	int len = 1;
	int mlen = 1;
	for (int i = 1; i < n; i++) {
		if (m[i] == m[i - 1]) {
			len++;
			if (len > mlen) {
				mlen = len;
			}
		}
		else {
			len = 1;
		}
	}
	cout << "Самая длинная серия повторяющихся элементов: " << mlen << endl;
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
//Задание 3 (блок 6)
void Task3_block6() {
	const int n = 5;
	const int m = 6;
	int arr[n] = { 1,3,4,6,7 };
	int array[m] = { 1,2,4,5,3,8 };
	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[i + 1] && arr[i] < arr[n]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int j = 0; j < m; j++) {
		if (array[j] > array[j + 1] && array[j] < array[m]) {
			int temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
		}
	}
	cout << "\nMin element just in one array - ";
	int min1, min2;
	for (int i = 0;; i++) {
		min1 = arr[i];
		min2 = array[i];
		if (min1 > min2) {
			cout << min2;
			break;
		}
		else if (min1 < min2) {
			cout << min1;
			break;
		}
	}
	cout << endl;
}
//Задание 4 (блок 6)
void Task4_block6() {
	const int size = 5;
	int arr[size] = { 1, -2, 3, 4, -5 };
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int* pointer_negative = nullptr;
	for (int i = 0; i < size; ++i) {
		if (arr[i] < 0) {
			pointer_negative = &arr[i];
			break;
		}
	}
	if (pointer_negative != nullptr) {
		for (int* p = pointer_negative; p < arr + size - 1; ++p) {
			*p = *(p + 1);
		}
		arr[size - 1] = 0;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
//Задание 5 (блок 6)
void Task5_block6() {
	const int size = 10;
	int array[size];
	for (int i = 0; i < size; ++i) {
		cout << "Введите элемент " << i << ": ";
		cin >> array[i];
	}
	int min_val = array[0];
	int min_index = 0;
	for (int i = 1; i < size; ++i) {
		if (array[i] < min_val) {
			min_val = array[i];
			min_index = i;
		}
	}
	cout << "Минимальный элемент: " << min_val << ", его индекс: " << min_index << endl;
	int next_min_val = INT_MAX;
	int next_min_index = -1;
	for (int i = 0; i < size; ++i) {
		if (i != min_index && array[i] < next_min_val) {
			next_min_val = array[i];
			next_min_index = i;
		}
	}
	cout << "Следующий минимальный элемент: " << next_min_val << ", его индекс: " << next_min_index << endl;
}
//Задание 6 (блок 6)
void Task6_block6() {
	const int SIZE = 6;
	int mas[SIZE] = { 1, -3, 4, -2, 5, -6 };
	int maxIndex = 0;
	for (int i = 1; i < SIZE; ++i) {
		if (abs(mas[i]) > abs(mas[maxIndex])) {
			maxIndex = i;
		}
	}
	mas[maxIndex] = -mas[maxIndex];
	for (int i = 0; i < SIZE; ++i) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
//Задание 7 (блок 6)
void Task7_block6() {
	const int  z = 20;
	int mas[z] = { -1,5,7,8,3,6,-23,45,-65,43,1,-23,76,8,90,-43,-23,14,-56,-78 };
	int sum = 0;
	for (int i = 0; i < z; i++) {
		sum += mas[i];
	}
	cout << sum << endl;
	int k = 0;
	for (int i = 0; i < z; i++) {
		if (mas[i] > sum) {
			k++;
		}
	}
	cout << k;
}
//Задание 9 (блок 6)
void Task9_block6() {
	int m[10];
	for (int i = 0; i < 10; i++) {
		m[i] = -8 + rand() % 16;
		cout << m[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (m[i] < 0 and m[i + 1] < 0) {
			for (int j = i + 2; j < 10; j++) {
				cout << m[j] << " ";
			}
			break;
		}
	}
}
//Задание 10 (блок 6)
void Task10_block6() {
	const int len = 5;
	int array[len] = { 2, -2, -3, 4, -5 };
	int sumPositive = 0, sumNegative = 0;
	for (int num = 0; num < len; num++) {
		if (array[num] > 0) {
			sumPositive += array[num];
		}
		else {
			sumNegative += array[num];
		}
	}
	cout << "Разность: " << sumPositive + sumNegative << endl;
}
//Задание 11 (блок 6)
void Task11_block6() {
	const int n = 10;
	int number;
	int arr[n];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Введите число для вставки: ";
	cin >> number;
	// Находим индекс последнего четного элемента
	int lastEvenIndex = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			lastEvenIndex = i;
			break;
		}
	}
	// Если четные элементы есть, производим вставку
	if (lastEvenIndex != -1) {
		// Смещаем элементы вправо
		for (int i = n - 1; i > lastEvenIndex; i--) {
			arr[i] = arr[i - 1];
		}
		// Вставляем число
		arr[lastEvenIndex + 1] = number;
	}
	else {
		cout << "В массиве нет четных элементов." << endl;
	}
	// Выводим результат
	cout << "Измененный массив: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
//Задание 12 (блок 6)
void Task12_block6() {
	int multiplication = 1;
	int y = 0;
	const int size = 10;
	int the_number_of_the_first_negative_element = size;
	int array[size]{ 1,5,4,2,6,1,-7,8,5,1 };
	for (int i = 0; i < size; i++) {
		if (array[i] < 0) {
			the_number_of_the_first_negative_element = i;
			break;
		}
	}
	for (int i = 0; i < the_number_of_the_first_negative_element; i++) {
		multiplication *= array[i];
		y += multiplication;
	}
	cout << "Результат вычисления: y = " << y;

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
//Задание 14 (блок 6)
void Task14_block6() {
	const int s = 10;
	int arr[s];
	for (int i = 0; i < s; i++) {
		cin >> arr[i];
	}
	// сдвигаем мас на две позиц влево
	for (int i = 0; i < 2; i++) {
		int temp = arr[0]; // сохр первый эл мас
		// сдвигаем эл влево на одну поз
		for (int j = 0; j < s - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[s - 1] = temp; // первый эл становится послед
	}
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
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
//Задание 17 (блок 6)
void Task17_block6() {
	int size = 10; // Размер массива
	// Выделение памяти под динамический массив целых чисел
	int* arr = new int[size];
	// Инициализация элементов массива (например, увеличим значения на индекс элемента)
	for (int i = 0; i < size; ++i) {
		arr[i] = i;
	}
	// Вывод элементов массива
	cout << "Элементы массива:" << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	// Освобождение памяти
	delete[] arr;
}
//Задание 18 (блок 6)
void Task18_block6() {
	const int n = 5;
	float arr[n];
	cout << "array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "\nMin array value - ";
	float min;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			min = arr[i + 1];
		}
	}
	cout << min;
	cout << "\nMax array value - ";
	float max;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			max = arr[i + 1];
		}
	}
	cout << max;
	cout << "\nmax and min values = " << max * max - min * min << endl;
}
//Задание 19 (блок 6)
void Task19_block6() {
	double arr[] = { 1, 2, 3, 4, 5 };
	double sum = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i) {
		sum += *(arr + i);
	}
	double average = sum / size;
	cout << "Среднее арифметическое элементов массива: " << average << endl;
}
//Задание 20 (блок 6)
void Task20_block6() {
	int** pointer_to_pointer;
	pointer_to_pointer = new int* [5];
	for (int i = 0; i < 5; ++i) {
		pointer_to_pointer[i] = new int[5];
	}
	pointer_to_pointer[2][3] = 10;
	for (int i = 0; i < 5; ++i) {
		delete[] pointer_to_pointer[i];
	}
	delete[] pointer_to_pointer;
}
//Задание 21 (блок 6)
void Task21_block6() {
	int n = 3; // число строк
	int m = 4; // число столбцов
	// Выделение памяти под двумерный динамический массив
	double** arr = new double* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new double[m];
	}
	// Инициализация двумерного массива arr (например)
	arr[0][0] = 3.5;
	arr[0][1] = 2.8;
	arr[0][2] = 1.2;
	arr[0][3] = 4.6;
	arr[1][0] = 5.1;
	arr[1][1] = 6.2;
	arr[1][2] = 7.3;
	arr[1][3] = 8.4;
	arr[2][0] = 9.5;
	arr[2][1] = 10.6;
	arr[2][2] = 11.7;
	arr[2][3] = 12.8;
	// Настройка элементов массива указателей на минимальные элементы в каждой строке
	double* minElements = new double[n];
	for (int i = 0; i < n; ++i) {
		minElements[i] = arr[i][0];
		for (int j = 1; j < m; ++j) {
			if (arr[i][j] < minElements[i]) {
				minElements[i] = arr[i][j];
			}
		}
	}
	// Нахождение максимального значения среди сумм элементов в строках
	double maxSum = 0;
	for (int i = 0; i < n; ++i) {
		double sum = 0;
		for (int j = 0; j < m; ++j) {
			sum += arr[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
		}
	}
	// Нахождение минимального значения среди произведений элементов в столбцах
	double minProduct = arr[0][0];
	for (int j = 0; j < m; ++j) {
		double product = 1;
		for (int i = 0; i < n; ++i) {
			product *= arr[i][j];
		}
		if (product < minProduct) {
			minProduct = product;
		}
	}
	// Вывод результатов
	cout << "Максимальное значение среди сумм элементов в строках: " << maxSum << endl;
	cout << "Минимальное значение среди произведений элементов в столбцах: " << minProduct << endl;
	// Освобождение памяти
	delete[] minElements;
	for (int i = 0; i < n; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
}
//Задание 22 (блок 6)
void Task22_block6() {
	const int n = 2, m = 2;
	int mas[n][m], sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введите элемент:";
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += mas[i][j];
		}
	}
	cout << "Сумма массива: " << sum;
}
//Задание 23 (блок 6)
void Task23_block6() {
	const int rows = 3;
	const int cols = 4;
	int arr[rows][cols] = { {3, 5, 2, 7},
							{1, 8, 4, 3},
							{6, 0, 9, 10} };
	int minElement = arr[0][0];
	int minRowIndex = 0;
	int minColIndex = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] < minElement) {
				minElement = arr[i][j];
				minRowIndex = i;
				minColIndex = j;
			}
		}
	}
	cout << "Минимальный элемент: " << minElement << endl;
	cout << "Индексы: [" << minRowIndex << "][" << minColIndex << "]" << endl;
}
//Задание 24 (блок 6)
void Task24_block6() {
	int max_duplicate = -100500;
	const int size = 5;
	int array[size]{ 10,4,1,10,1 };
	for (int i = 0; i < size; i++) {
		int count = 0;
		for (int j = 0; j < size; j++) {
			if (array[i] == array[j]) {
				count++;
			}
		}
		if (count > 1 && array[i] > max_duplicate) {
			max_duplicate = array[i];
		}
	}
	if (max_duplicate != 0) {
		cout << "Максимальное число, встречающееся в массиве более одного раза: " << max_duplicate;
	}
	else {
		cout << "В массиве нет чисел, встречающихся более одного раза";
	}
}
//Задание 27 (блок 6)
void Task27_block6() {
	int m[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m[i][j] = -15 + rand() % 64;
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	int count = 0;
	bool f = true;
	for (int i = 0; i < 4; i++) {
		f = true;
		for (int j = 0; j < 4; j++) {
			if (m[j][i] < 0) {
				f = false;
				break;
			}
		}
		if (f)count++;
	}
	cout << count;
}
//Задание 28 (блок 6)
void Task28_block6() {
	int rows, cols;
	cin >> rows >> cols; // Вводим количество строк и столбцов
	int count = 0; // Переменная для подсчета количества строк без нулевых элементов
	for (int i = 0; i < rows; ++i) {
		bool hasZero = false; // Переменная для проверки наличия нулевого элемента в текущей строке
		for (int j = 0; j < cols; ++j) {
			int num;
			cin >> num; // Вводим элементы строки
			if (num == 0) {
				hasZero = true;
			}
		}
		if (!hasZero) {
			count++;
		}
	}
	cout << count << endl; // Выводим количество строк без нулевых элементов
}
//Задание 29 (блок 6)
void Task29_block6() {
	const int n = 5, m = 4;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mas[i][j];
		}
	}
	int min = mas[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] < min) min = mas[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] < 0) mas[i][j] = min;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}
//Задание 30 (блок 6)
void Task30_block6() {
	const int rows = 3;
	const int cols = 4;
	int arr[rows][cols] = { {5, 8, 2, 7},
						   {3, 9, 1, 4},
						   {6, 2, 0, 8} };
	int* ptr[rows]; // Массив указателей на строки массива
	// Настроим указатели на строки массива
	for (int i = 0; i < rows; ++i) {
		ptr[i] = arr[i];
	}
	// Вызываем функцию для вывода минимальных элементов через указатели
	int* minElements[rows]; // Массив указателей на минимальные элементы строк
	// Находим минимальные элементы в каждой строке
	for (int i = 0; i < rows; ++i) {
		int minElement = **arr; // Инициализируем минимальный элемент значением первого элемента строки
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] < minElement) {
				minElement = arr[i][j];
				minElements[i] = &arr[i][j]; // Сохраняем указатель на минимальный элемент
			}
		}
	}
	// Выводим минимальные элементы через указатели
	for (int i = 0; i < rows; ++i) {
		cout << "Минимальный элемент в строке " << i + 1 << ": " << *minElements[i] << endl;
	}
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
//Задание 32 (блок 6)
void Task32_block6() {
	const int n = 5;
	const int m = 5;
	int mas[n][m];
	//заполнение массива и суммы строк
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m - 1; j++) {
			mas[i][j] = rand() % 20;
			sum += mas[i][j];
		}
		mas[i][m - 1] = sum;
	}
	//вывод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	// сортировка
	for (int i = 0; i < n - 1; i++) {
		int max = i;
		for (int j = max + 1; j < n; j++) {
			if (mas[j][m - 1] < mas[max][m - 1]) {
				max = j;
			}
		}
		int tmp = mas[i][m - 1];
		mas[i][m - 1] = mas[max][m - 1];
		mas[max][m - 1] = tmp;
	}
	//вывод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}
//Задание 33 (блок 6)
void Task33_block6() {
	int mas[] = { 5, 8, 3, 12, 7 };
	int* ptr_max = &mas[0]; // указатель на первый элемент массива
	int* ptr_min = &mas[0]; // указатель на первый элемент массива
	for (int i = 1; i < 5; i++) {
		if (mas[i] > *ptr_max) {
			ptr_max = &mas[i]; // обновляем указатель на максимальный элемент, если нашли больший
		}
		else if (mas[i] < *ptr_min) {
			ptr_min = &mas[i]; // обновляем указатель на минимальный элемент, если нашли меньший
		}
	}
	cout << "Разность между максимальным и минимальным элементами массива: " << *ptr_max - *ptr_min << endl;
}
//Задание 34 (блок 6)
void Task34_block6() {
	int m[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m[i][j] = rand() % 64;
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	int min = m[0][0], min_i, min_j;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (min > m[i][j]) {
				min_i = i;
				min_j = j;
				min = m[i][j];
			}
		}
	}
	cout << min_i << " " << min_j;
}



//Задание 1 (блок 7)
struct Zavod2 {
	string surname;
	int age;
	string specialty;
	double money;
};
void Task1_block7() {
	const int N = 7; // Количество сотрудников на заводе
	Zavod2 zavodN[N] = {
		{"Первушкин", 35, "слесарь", 50000},
		{"Петров", 40, "токарь", 55000},
		{"Сидоров", 45, "слесарь", 52000},
		{"козлов", 38, "слесарь", 51000},
		{"Лобанов", 42, "токарь", 52000},
		{"Дружков", 52, "слесарь", 60000},
		{"Романенко", 60, "токарь", 50500}
	};
	int count_slesari = 0;
	int count_tokari = 0;
	// Подсчет количества слесарей и токарей
	for (int i = 0; i < N; i++) {
		if (zavodN[i].specialty == "слесарь") {
			count_slesari++;
		}
		else if (zavodN[i].specialty == "токарь") {
			count_tokari++;
		}
	}
	cout << "Количество слесарей на заводе: " << count_slesari << endl;
	cout << "Количество токарей на заводе: " << count_tokari << endl;
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
//Задание 3 (блок 7)
struct zavod {
	char arr_fam[50];
	int age;
	char arr_work[70];
	int money;
};
void Task3_block7() {
	const int n = 4;
	zavod arr[n];
	for (int i = 0; i < n; i++) {
		cout << "\nSecond name: ";
		cin >> arr[i].arr_fam;
		cout << "\nage: ";
		cin >> arr[i].age;
		cout << "\nProfession: ";
		cin >> arr[i].arr_work;
		cout << "\nSalary: ";
		cin >> arr[i].money;
		cout << endl;
	}
	int max = 0;
	int t;
	for (int i = 0; i < n; i++) {
		if (max < arr[i].money) {
			max = arr[i].money;
			t = i;
		}
	}
	cout << "\nFactory number" << t + 1 << " leading with salary equil a " << max << endl;
}
//Задание 4 (блок 7)
struct Baggage {
	int itemsCount;
	double weight;
};
void Task4_block7() {
	int N = 5;
	Baggage* passengers = new Baggage[N];
	passengers[0] = { 3, 25.5 };
	passengers[1] = { 2, 20.0 };
	passengers[2] = { 4, 30.0 };
	passengers[3] = { 1, 15.5 };
	passengers[4] = { 5, 35.0 };
	int maxItems = passengers[0].itemsCount;
	double minWeight = passengers[0].weight;
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 1; i < N; ++i) {
		if (passengers[i].itemsCount > maxItems) {
			maxItems = passengers[i].itemsCount;
			maxIndex = i;
		}
		if (passengers[i].weight < minWeight) {
			minWeight = passengers[i].weight;
			minIndex = i;
		}
	}
	cout << "Пассажир с самым большим багажом по количеству: " << maxIndex << endl;
	cout << "Пассажир с наименьшим багажом по весу: " << minIndex << endl;
	delete[] passengers;
}
//Задание 5 (блок 7)
struct Baggage2 {
	string passengerName;
	int numberOfItems;
	double totalWeight;
};
void Task5_block7() {
	const int N = 3;
	Baggage2 passengers[N] = { {"Иванов", 1, 21.3}, {"Петров", 2, 15.8}, {"Сидоров", 3, 21.2} };
	int maxItems = 0;
	double maxWeight = 0.0;
	int maxIndex = 0;
	for (int i = 0; i < N; ++i) {
		if (passengers[i].numberOfItems > maxItems || (passengers[i].numberOfItems == maxItems && passengers[i].totalWeight > maxWeight)) {
			maxItems = passengers[i].numberOfItems;
			maxWeight = passengers[i].totalWeight;
			maxIndex = i;
		}
	}
	cout << "Информация о пассажире с самым большим багажом:\n";
	cout << "Имя: " << passengers[maxIndex].passengerName << endl;
	cout << "Количество вещей: " << passengers[maxIndex].numberOfItems << endl;
	cout << "Общий вес: " << passengers[maxIndex].totalWeight << endl;
}
//Задание 6 (блок 7)
struct Baggage3 {
	int itemCount; // количество вещей
	double weight; // общий вес
};
void Task6_block7() {
	const int N = 5;
	Baggage3 baggages[N] = {
		{5, 23.5},
		{3, 12.0},
		{4, 15.2},
		{2, 9.8},
		{6, 30.0}
	};
	Baggage3 minBaggage = baggages[0];
	for (int i = 1; i < N; ++i) {
		if (baggages[i].itemCount < minBaggage.itemCount &&
			baggages[i].weight < minBaggage.weight) {
			minBaggage = baggages[i];
		}
	}
	cout << "Пассажир с самым маленьким багажом по числу вещей и весу:\n";
	cout << "Количество вещей: " << minBaggage.itemCount << '\n';
	cout << "Общий вес: " << minBaggage.weight << " кг\n";

}
//Задание 7 (блок 7)
struct WORKER {
	char name[20];
	char work[20];
	int year;
};
void Task7_block7() {
	const int n = 6;
	WORKER mas[n] = {};
	for (int i = 0; i < n; i++) {
		cout << "Фамилия и инициалы: " << endl;
		cin >> mas[i].name;
		cout << "Должность: " << endl;
		cin >> mas[i].work;
		cout << "Год поступления: " << endl;
		cin >> mas[i].year;
	}
	WORKER temp = {};
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(mas[i].name, mas[j].name) > 0) {
				temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
		}
	}
	int stazh;
	bool found = false;
	cout << "Введите желаемый стаж: " << endl;
	cin >> stazh;
	for (int i = 0; i < n; i++) {
		if ((2024 - mas[i].year) >= stazh) {
			found = true;
			cout << "Фамилия и инициалы: " << endl;
			cout << "Должность: " << endl;
			cout << "Год поступления: " << endl;
		}
	}
	if (!found) cout << "Таких работников нет" << endl;
}
//Задание 8 (блок 7)
struct TRAIN2 {
	char destination[20];
	int number;
	int time;
};
void Task8_block7() {
	const int n = 10;
	TRAIN2 mas[n] = {};
	int right_time;
	bool a = true;
	for (int i = 0; i < n; i++) {
		cout << "Пункт назначения: " << endl;
		cin >> mas[i].destination;
		cout << "Номер: " << endl;
		cin >> mas[i].number;
		cout << "Время: " << endl;
		cin >> mas[i].time;
	}
	cout << "Введите желаемое время: " << endl;
	cin >> right_time;
	TRAIN2 temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(mas[i].destination, mas[j].destination) > 0) {
				temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (mas[i].time > right_time) {
			a = false;
			cout << "Номер: " << mas[i].number << endl;
		}
	}
	if (a) {
		cout << "Подходящих поездов нет " << endl;
	}
}
//Задание 9 (блок 7)
struct train {
	string punkt;
	int num;
	int time[2];
};
void Task9_block7() {
	const int n = 3;
	train m[3];
	for (int i = 0; i < n; i++) {
		cout << "Номер поезда: " << i << endl;
		cin >> m[i].punkt;
		cin >> m[i].num;
		cin >> m[i].time[0];
		cin >> m[i].time[1];
	}
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (m[j].time[0] > m[k].time[0]) {
				k = j;
			}
		}
		if (k != i) {
			train t = m[i];
			m[i] = m[k];
			m[k] = t;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (m[j].time[1] > m[k].time[1]) {
				k = j;
			}
		}
		if (k != i) {
			train t = m[i];
			m[i] = m[k];
			m[k] = t;
		}
	}
	cout << endl;
	cout << "Введите название пункта: ";
	string punkt;
	cin >> punkt;
	for (int i = 0; i < n; i++) {
		if (punkt == m[i].punkt) {
			cout << "Пункт назначения: " << m[i].punkt << endl;
			cout << "Номер поезда: " << m[i].num << endl;
			cout << "Время отправки: " << m[i].time[0] << "ч" << endl;
			cout << "Время прибытия: " << m[i].time[1] << "ч" << endl;
		}
		else {
			cout << "Таких поездов нет ";
		}
	}

}
//Задание 10 (блок 7)
void Task10_block7() {
	const int n = 8;
	TRAIN2 mas[n] = {};
	bool b = true;
	for (int i = 0; i < n; i++) {
		cout << "Пункт назначения: " << endl;
		cin >> mas[i].destination;
		cout << "Номер: " << endl;
		cin >> mas[i].number;
		cout << "Время: " << endl;
		cin >> mas[i].time;
	}
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = k + 1; j < n; j++) {
			if (mas[j].number < mas[k].number) {
				k = j;
			}
		}
		TRAIN2 t = mas[i];
		mas[i] = mas[k];
		mas[k] = t;
	}
	int newNum;
	cout << "" << endl;
	cin >> newNum;
	for (int i = 0; i < n; i++) {
		if (newNum == mas[i].number) {
			b = false;
			cout << "Пункт назначения: " << endl;
			cout << mas[i].destination << endl;
			cout << "Номер: " << endl;
			cout << mas[i].number << endl;
			cout << "Время: " << endl;
			cout << mas[i].time << endl;
		}
	}
	if (b) cout << "Таких поездов нет" << endl;
}
//Задание 11 (блок 7)
struct MARSH
{
	string start;
	string end;
	int numb;
};
void Task11_block7() {
	const int n = 3;
	MARSH M[n];
	MARSH m;
	for (int i = 0; i < n; i++) //ввод
	{
		cout << "start: ";
		cin >> m.start;
		cout << "end: ";
		cin >> m.end;
		cout << "number: ";
		cin >> m.numb;
		M[i] = m;
	}
	int n_min;
	for (int i = 0; i < n; i++)
		for (int m1 = 0; m1 < n; m1++) // сортировка
		{
			n_min = m1;
			for (int m2 = m1; m2 < n; m2++)
				if (M[m2].numb < M[n_min].numb) n_min = m2;
			m = M[m1];
			M[m1] = M[n_min];
			M[n_min] = m;
		}
	cout << "-----------------------" << endl << "-----------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "start: " << M[i].start << endl;
		cout << "end: " << M[i].end << endl;
		cout << "number: " << M[i].numb << endl;
		cout << "-----------------------" << endl;
	}
	cout << "enter number: ";
	int en;
	cin >> en;
	for (int i = 0; i < n; i++)
		if (M[i].numb == en)
		{
			cout << "start: " << M[i].start << endl;
			cout << "end: " << M[i].end << endl;
			cout << "number: " << M[i].numb << endl;
			cout << "-----------------------" << endl;
		}
}
//Задание 12 (блок 7)
struct MARSH2 {
	string start;
	string finish;
	string marshrut;
};
void Task12_block7() {
	const int rows = 3;
	MARSH2 mas[rows];
	for (int i = 0; i < rows; i++) {
		cout << "Введите место начала маршрута - ";
		cin >> mas[i].start;
		cout << "Введите место финиша маршрута - ";
		cin >> mas[i].finish;
		cout << "Введите номер маршрута - ";
		cin >> mas[i].marshrut;
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows - i - 1; j++) {
			if (mas[j].marshrut > mas[j + 1].marshrut) {
				MARSH2 temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < rows; i++) {
		cout << "Номер маршрута - " << mas[i].marshrut << " Начало - " << mas[i].start << " Финиш - " << mas[i].finish << endl;
	}
	string n;
	cout << "Введите пункт - ";
	bool found = false;
	cin >> n;
	for (int i = 0; i < rows; i++) {
		if (n == mas[i].start || n == mas[i].finish) {
			cout << "Номер маршрута - " << mas[i].marshrut << " Начало - " << mas[i].start << " Финиш - " << mas[i].finish << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "Такой маршрут отсутствует" << endl;
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
			if ((student[j].date[0] > student[j + 1].date[0]) && (student[j].date[1] > student[j].date[1]) && (student[j].date[2] > student[j].date[2])) {
				string temp = student[j].fullName;
				student[j].fullName = student[j + 1].fullName;
				student[j].fullName = temp;
			}
		}
	}
}
void TaskIndivid13_block7() {
	const int n = 8;
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
	string searchPhoneNumber;
	cout << "Введите номер телефона для поиска: ";
	cin >> searchPhoneNumber;
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (student[i].phoneNumber == searchPhoneNumber) {
			found = true;
			cout << "ФИО: " << student[i].fullName << "\n";
			cout << "Номер телефона: " << student[i].phoneNumber << "\n";
			cout << "Дата рождения: " << student[i].date[0] << "-" << student[i].date[1] << "-" << student[i].date[2] << "\n";
		}
	}
	if (!found) {
		cout << "Человек с таким номером телефона не найден.\n";
	}
}
//Задание 14 (блок 7)
struct NOTE3 {
	string firstName;
	string lastName;
	string phoneNum;
	int birthDate[3];
};
void Task14_block7() {
	NOTE3 notes[8];
	for (int i = 0; i < 8; i++) {
		cout << "Введите данные для " << i + 1 << "-го человека:\n";
		cout << "Фамилия: ";
		cin >> notes[i].lastName;
		cout << "Имя: ";
		cin >> notes[i].firstName;
		cout << "Номер телефона: ";
		cin >> notes[i].phoneNum;
		cout << "Дата рождения (через пробел день месяц год): ";
		for (int j = 0; j < 3; j++) {
			cin >> notes[i].birthDate[j];
		}
	}
	// Сортировка по алфавиту
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (notes[i].lastName > notes[j].lastName) {
				NOTE3 temp = notes[i];
				notes[i] = notes[j];
				notes[j] = temp;
			}
		}
	}
	int monthToFind;
	cout << "Введите месяц для поиска дней рождения: ";
	cin >> monthToFind;
	bool found = false;
	cout << "Люди, у которых день рождения в указанном месяце:\n";
	for (int i = 0; i < 8; i++) {
		if (notes[i].birthDate[1] == monthToFind) {
			found = true;
			cout << notes[i].firstName << " " << notes[i].lastName << " - " << notes[i].birthDate[0] << "/" << notes[i].birthDate[1] << "/" << notes[i].birthDate[2] << endl;
		}
	}
	if (!found) {
		cout << "Нет людей с днем рождения в указанном месяце.\n";
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




//Задание 1 (блок 8)
void task8(int* mas, int n, int v) {
	for (int i = 0; i < n; i++) {
		mas[i] = v;
	}
	// Вывод массива на экран
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}
void Task1_block8() {
	const int n = 5;
	int mas[n];
	// Пример вызова функции с инициализацией массива значениями 0
	task8(mas, n, 0);
	// Пример вызова функции с инициализацией массива значениями 52
	task8(mas, n, 52);
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
//Задание 4 (блок 8)
const int ROWS2 = 3;
const int COLS2 = 3;
int calculateMinColumnSum(int arr[ROWS2][COLS2]) {
	int sum = 0;
	for (int j = 0; j < COLS2; ++j) {
		int minVal = *arr[j];
		for (int i = 1; i < ROWS2; ++i) {
			if (*(arr[i] + j) < minVal) {
				minVal = *(arr[i] + j);
			}
		}
		sum += minVal;
	}
	return sum;
}
void Task4_block8() {
	int arr[ROWS2][COLS2] = { {7, 9, 10},{9, 5, 8},{6, 1, 4} };
	int result = calculateMinColumnSum(arr);
	cout << "Сумма минимальных значений в столбцах: " << result << endl;
}
//Задание 5 (блок 8)
int sumOfMaxValuesInRows(int array[][4], int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; ++i) {
		int maxValue = array[i][0];
		for (int j = 1; j < cols; ++j) {
			if (array[i][j] > maxValue) {
				maxValue = array[i][j];
			}
		}
		sum += maxValue;
	}
	return sum;
}
void Task5_block8() {
	const int rows = 3;
	const int cols = 4;
	int array[rows][cols] = {
			{1, 5, 3, 2},
			{7, 2, 4, 1},
			{8, 9, 6, 3}
	};
	int result = sumOfMaxValuesInRows(array, rows, cols);
	cout << "Сумма максимальных значений в строках: " << result << endl;
}
//Задание 6 (блок 8)
void massSort(int* mas, int size) {
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (mas[j] < mas[minIndex]) {
				minIndex = j;
			}
		}
		int temp = mas[minIndex];
		mas[minIndex] = mas[i];
		mas[i] = temp;
	}
}
void Task6_block8() {
	const int size = 8;
	int mas[size];
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 14;
		cout << mas[i] << " ";
	}
	massSort(mas, size);
	cout << "\nОтсортированный массив: \n";
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}
//Задание 7 (блок 8)
void insertionSort(int arr[][10], int rows, int cols) {
	for (int i = 1; i < rows; i++) {
		int key = arr[i][0];
		int j = i - 1;
		while (j >= 0 && arr[j][0] > key) {
			arr[j + 1][0] = arr[j][0];
			j--;
		}
		arr[j + 1][0] = key;
	}
}
void Task7_block8() {
	int arr[4][10] = { {5, 2, 3}, {1, 4, 6}, {8, 9, 1}, {7, 0, 5} };
	int rows = 4;
	int cols = 3;
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	insertionSort(arr, rows, cols);
	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
//Задание 8 (блок 8)
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
void Task8_block8() {
	int num;
	cout << "Введите число для вычисления факториала: ";
	cin >> num;
	cout << "Факториал " << num << " равен: " << factorial(num) << endl;
}
//Задание 9 (блок 8)
int Task9_block8(int n) {
	int r = 0;
	for (int i = 1; i < n + 1; i++) {
		r += i;
	}
	return r;
}
//Задание 10 (блок 8)
int differenceOfSquares(int arr[], int n) {
	if (n <= 1) {
		return 0; // Нет разницы, если массив пустой или содержит один элемент
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return (max * max) - (min * min);
}
void Task10_block8() {
	int array[5] = { 2, 5, 1, 8, 3 };
	int size = 5;
	cout << "Разность квадратов максимального и минимального значений массива: " << differenceOfSquares(array, size) << endl;

}




//Задание 1 (блок 9)
struct elem2 {
	int data;
	elem2* next;
};
struct Q2 {
	elem2* h;
	elem2* t;
};
void add(Q2& q, int k) {
	elem2* tmp = new elem2{ k, NULL };
	if (q.h == NULL && q.t == NULL) {
		q.h = tmp; q.t = tmp;
	}
	else {
		q.t->next = tmp;
		q.t = q.t->next;
	}
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
//Задание 4 (блок 9)
int izvlS(elem*& s)
{
	elem* tmp = s;
	int a = tmp->p1;
	s = tmp->p2;
	delete(tmp);
	return a;
}
bool getElem(elem*& s) {
	if (s != NULL) {
		return true;
	}
	else {
		return false;
	}
}
void Task4_block9_dop() {
	elem* stack = { NULL };
	for (int i = 0; i < 5; i++) {
		AddStack(stack, i);
	}
	for (int i = 0; i < 5; i++) {
		if (getElem(stack) != false) {
			cout << izvlS(stack) << endl;
		}
		else {
			cout << "Пустой!" << endl;
		}
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
//Задание 6 (блок 9)
void deleteNode(Node*& head, int key) {
	Node* temp = head;
	Node* prev = nullptr;
	if (temp != nullptr && temp->data == key) {
		head = temp->next; delete temp;
		return;
	}
	while (temp != nullptr && temp->data != key) {
		prev = temp;
		temp = temp->next;
	} if (temp == nullptr)  return;
	prev->next = temp->next;
	delete(temp);
}
//Задание 7 (блок 9)
void pushByKey(Node*& elem, int key, int n) {
	Node* current = elem;
	while (current != NULL && current->data != key) {
		current = current->next;
	}
	if (current != NULL) {
		Node* newElem = new Node{ n, current->next };
		current->next = newElem;
	}
}
//Задание 8 (блок 9)
void add(Node*& head, int data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
		head->next = head; // Устанавливаем указатель на себя, так как это первый и единственный элемент
	}
	else {
		Node* temp = head;
		while (temp->next != head) {
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head; // Делаем новый узел последним и связываем его с головой
	}
}
//Задание 9 (блок 9)
struct Node3 {
	int head;
	Node3* data;
	Node3* next;
};
void append_N(Node3*& head, int value) {
	Node3* newNode = new Node3{ value, nullptr, nullptr };
	if (head == nullptr) {
		head = newNode;
		head->next = head;
		head->data = head;
	}
	else {
		newNode->next = head;
		head->data->next = newNode;
		newNode->data = head->data;
		head->data = newNode;
		head = newNode;
	}
}
//Задание 10 (блок 9)
void Delete(Node*& head, int key) {
	if (head == nullptr) {
		cout << "Список пуст." << endl;
		return;
	}
	Node* current = head;
	do {
		if (current->data == key) {
			if (current == head) {
				if (head->next == head) { // Единственный элемент в списке
					delete head;
					head = nullptr;
					return;
				}
				else {
					head = current->next;
				}
			}
			current->next->next = current->next;
			current->next->data = current->data;
			delete current;
			return;
		}
		current = current->next;
	} while (current != head);
	cout << "Элемент с ключом " << key << " не найден." << endl;
}


void task5_4() {
	int a;
	cout << "Введите число: ";
	cin >> a;
	int* p = &a;
	*p *= 3;
	cout << "Значение умноженное на 3: " << *p << endl;
}
void task8_1(int a, int b) {
	cout << "Сумма чисел " << a << " и " << b << " = " << a + b << endl;
}
struct elem1 {
	int a;
	elem1* next;
};
struct Q {
	elem1* h;
	elem1* t;
};
void add(Q& q, int k) {
	elem1* tmp = new elem1{ k,NULL };
	if (q.h == NULL) {
		q.h = tmp;
		q.t = tmp;

	}
	else {
		q.t->next = tmp;
		q.t = tmp;
	}
}
void izvl(elem1*& h) {
	while (h->a % 2 != 0) {
		h = h->next;
	}
}
void print(elem1*& h) {
	elem1* tmp = h;
	while (tmp != NULL) {
		cout << tmp->a << " ";
		tmp = tmp->next;
	}
}
void task9_1() {
	Q q = { NULL,NULL };

	int const n = 4;
	int m[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 20;
		add(q, m[i]);
		cout << m[i] << " ";
	}
	izvl(q.h);
	cout << endl;
	print(q.h);
}

int main()
{
	setlocale(LC_ALL, "rus");
	//TaskIndivid13_block7();
	//task5_4();
	//task8_1(2, 3);
	task9_1();
}
	//setlocale(LC_ALL, "rus");



	//Task4_block9_dop();
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
	Task14_block1();
	cout << "Задание № 16 (блок 1)" << endl;
	Task16_block1();*/



	/*cout << "Задание № 1 (блок 2)" << endl;
	Task1_block2();
	cout << "Задание № 2 (блок 2)" << endl;
	Task2_block2();
	cout << "Задание № 3 (блок 2)" << endl;
	Task3_block2();
	cout << "Задание № 4 (блок 2)" << endl;
	Task4_block2();
	cout << "Задание № 5 (блок 2)" << endl;
	Task5_block2();
	cout << "Задание № 6 (блок 2)" << endl;
	Task6_block2();
	cout << "Задание № 7 (блок 2)" << endl;
	Task7_block2();
	cout << "Задание № 8 (блок 2)" << endl;
	Task8_block2();
	cout << "Задание № 9 (блок 2)" << endl;
	Task9_block2();
	cout << "Задание №10 (блок 2)" << endl;
	Task10_block2();
	cout << "Задание № 11 (блок 2)" << endl;
	Task11_block2();
	cout << "Задание № 12 (блок 2)" << endl;
	Task12_block2();
	cout << "Задание № 13 (блок 2)" << endl;
	TaskIndivid13_block2();
	cout << "Задание № 14 (блок 2)" << endl;
	Task14_block2();*/



	/*cout << "Задание № 1 (блок 3)" << endl;
	Task1_block3();
	cout << "Задание № 2 (блок 3)" << endl;
	Task2_block3();
	cout << "Задание № 3 (блок 3)" << endl;
	Task3_block3();
	cout << "Задание № 4 (блок 3)" << endl;
	Task4_block3();
	cout << "Задание № 5 (блок 3)" << endl;
	Task5_block3();
	cout << "Задание № 6 (блок 3)" << endl;
	Task6_block3();
	cout << "Задание № 7 (блок 3)" << endl;
	Task7_block3();
	cout << "Задание № 8 (блок 3)" << endl;
	Task8_block3();
	cout << "Задание № 9 (блок 3)" << endl;
	Task9_block3();
	cout << "Задание № 10 (блок 3)" << endl;
	Task10_block3();
	cout << "Задание № 11 (блок 3)" << endl;
	Task11_block3();
	cout << "Задание № 12 (блок 3)" << endl;
	Task12_block3();
	cout << "Задание № 13 (блок 3)" << endl;
	TaskIndivid13_block3();
	cout << "Задание № 14 (блок 3)" << endl;
	Task14_block3();
	cout << "Задание № 15 (блок 3)" << endl;
	Task15_block3();
	cout << "Задание № 16 (блок 3)" << endl;
	Task16_block3();
	cout << "Задание № 17 (блок 3)" << endl;
	Task17_block3();*/



	//cout << "Задание № 13 (блок 4)" << endl;
	//TaskIndivid13_block6();
	/*cout << "Задание № 2 (блок 4)" << endl;
	Task2_block4();*/
	/*cout << "Задание № 3 (блок 4)" << endl;
	Task3_block4();*/
	/*cout << "Задание № 4 (блок 4)" << endl;
	Task4_block4();*/
	/*cout << "Задание № 5 (блок 4)" << endl;
	Task5_block4();*/
	/*cout << "Задание № 6 (блок 4)" << endl;
	Task6_block4();*/
	/*cout << "Задание № 7 (блок 4)" << endl;
	Task7_block4();*/
	/*cout << "Задание № 8 (блок 4)" << endl;
	Task8_block4();*/
	/*cout << "Задание № 9 (блок 4)" << endl;
	Task9_block4();*/
	/*cout << "Задание № 10 (блок 4)" << endl;
	Task10_block4();*/
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
	/*cout << "Задание № 17 (блок 4)" << endl;
	Task17_block4();*/
	/*cout << "Задание № 18 (блок 4)" << endl;
	Task18_block4();*/
	/*cout << "Задание № 19 (блок 4)" << endl;
	Task19_block4();*/
	/*cout << "Задание № 20 (блок 4)" << endl;
	Task20_block4();*/
	/*cout << "Задание № 21 (блок 4)" << endl;
	Task21_block4();*/
	/*cout << "Задание № 22 (блок 4)" << endl;
	Task22_block4();*/
	/*cout << "Задание № 23 (блок 4)" << endl;
	Task23_block4();*/
	/*cout << "Задание № 24 (блок 4)" << endl;
	Task24_block4();*/
	/*cout << "Задание № 25 (блок 4)" << endl;
	Task25_block4();*/
	/*cout << "Задание № 26 (блок 4)" << endl;
	Task26_block4();*/



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
	/*cout << "Задание № 6 (блок 5)" << endl;
	Task6_block5();*/
	//cout << "Задание № 7 (блок 5)" << endl;
	//Task7_block5();
	/*cout << "Задание № 8 (блок 5)" << endl;
	Task8_block5();*/
	/*cout << "Задание № 9 (блок 5)" << endl;
	Task9_block5();*/
	/*cout << "Задание № 10 (блок 5)" << endl;
	Task10_block5();*/



	/*cout << "Задание № 2 (блок 6)" << endl;
	Task2_block6();*/
	/*cout << "Задание № 12 (блок 6)" << endl;
	Task12_block6();*/
	/*cout << "Задание № 13 (блок 6)" << endl;
	TaskIndivid13_block6();*/
	/*cout << "Задание № 15 (блок 6)" << endl;
	Task15_block6();*/
	/*cout << "Задание № 16 (блок 6)" << endl;
	Task16_block6();
	/*cout << "Задание № 24 (блок 6)" << endl;
	Task24_block6();
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
//}
