#include <iostream>
using namespace std;

void task1() {
    cout << "\nЗадание 1." << endl;

    // знаковые типы данных (signed)
	short thin_number;
	int integer;
	long long_integer;
	long long very_long_integer;
	float number;
	double long_number;
	bool boolean;
	char character;

	// беззнаковые типы данных (unsigned) 
	unsigned short unsigned_thin_number;
	unsigned int unsigned_integer;
	unsigned long unsigned_long_integer;
	unsigned char unsigned_character;

	// переменную с типом данных void объявить нельзя, так как это не имеет смысла
	// void nothing;

	cout << "short: " << sizeof(thin_number) << " байт" << endl;
	cout << "int: " << sizeof(integer) << " байт" << endl;
	cout << "long: " << sizeof(long_integer) << " байт" << endl;
	cout << "long long: " << sizeof(very_long_integer) << " байт" << endl;
	cout << "float: " << sizeof(number) << " байт" << endl;
	cout << "double: " << sizeof(long_number) << " байт" << endl;
	cout << "bool: " << sizeof(boolean) << " байт" << endl;
	cout << "char: " << sizeof(character) << " байт" << endl;
}

void task1_2() {
	cout << "\nЗадание 1." << endl;

	//int от −2 147 483 648 до 2 147 483 647
	int a = INT_MIN;
	int b = INT_MAX;
	printf("int от %d до %d\n", a, b);

	//char от -128 до 127
	char c = CHAR_MIN;
	char d = CHAR_MAX;
	printf("char от %d до %d\n", c, d);

	//short от –32768 до 32767
	short e = SHRT_MIN;
	short f = SHRT_MAX;
	printf("short от %d до %d\n", e, f);

	//long от −2 147 483 648 до 2 147 483 647
	long int g = LONG_MIN;
	long int h = LONG_MAX;
	printf("long int от %ld до %ld\n", g, h);

	//short от –32768 до 32767
	short int k = SHRT_MIN;
	short int l = SHRT_MAX;
	printf("short int от %d до %d\n", k, l);

	//unsigned int от 0 до 4 294 967 295
	unsigned int s = UINT_MAX;
	printf("unsigned int от 0 до %u\n", s);

	//unsigned short от 0 до 65535
	unsigned short us = USHRT_MAX;
	printf("unsigned short от 0 до %u\n", us);

	//unsigned long от 0 до 4 294 967 295
	unsigned long ul = ULONG_MAX;
	printf("unsigned long от 0 до %u\n", ul);

	//long long от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807
	long long int ll_min = LLONG_MIN;
	long long int ll_max = LLONG_MAX;
	printf("long long от %lld до %lld\n", ll_min, ll_max);

	//unsigned long long от 0 до 18 446 744 073 709 551 615
	unsigned long long int ull_min = ULLONG_MAX;
	printf("unsigned long long от 0 до %llu\n", ull_min);

	//float от +/- 3.4E-38 до 3.4E+38
	float fl_mn = FLT_MIN;
	float fl_mx = FLT_MAX;
	printf("float от %e до %e\n", fl_mn, fl_mx);

	//double от +/- 1.7E-308 до 1.7E+308
	double dbl_min = DBL_MIN;
	double dbl_max = DBL_MAX;
	printf("double от %e до %e\n", dbl_min, dbl_max);
	
	//unsigned char от 0 до 255
	unsigned char uc = UCHAR_MAX;
	printf("unsigned char от 0 до %d\n", uc);
	//cout << "example: " << pow(2, (sizeof(char) * 8)) - 1 << endl;
}

void task2() {
    cout << "\nЗадание 2." << endl;

	int a = 25;
	float b = 123.54;
	char c = 'c';

	a = b;
	printf("a = %i\n", a);

	a = c;
	printf("a = %i\n", a);

	a = 25;
	printf("a = %i\n", a);

	b = a;
	printf("b = %f\n", b);

	b = c;
	printf("b = %f\n", b);

	b = 123.54;
	printf("b = %f\n", b);

	c = a;
	printf("c = %c\n", c);

	c = b;
	printf("c = %c\n", c);
}

void task3() {
    cout << "\nЗадание 3." << endl;

	char a = 65;
	char b = 274;

	printf("a(int) = %i\n", a);
	printf("a(char) = %c\n", a);

	printf("b(int) = %i\n", b);
	printf("b(char) = %c\n", b);
}

void task4() {
    cout << "\nЗадание 4." << endl;

	signed char sc = 0;
	unsigned char usc = 0;

	printf("signed char (int) = %i\n", sc);
	printf("signed char (char) = %c\n", sc);

	printf("unsigned char (int) = %i\n", usc);
	printf("unsigned char (char) = %c\n", usc);

	sc = 255;
	usc = 255;

	printf("signed char (int) = %i\n", sc);
	printf("signed char (char) = %c\n", sc);

	printf("unsigned char (int) = %i\n", usc);
	printf("unsigned char (char) = %c\n", usc);

	sc += 2;
	usc += 2;

	printf("signed char (int) = %i\n", sc);
	printf("signed char (char) = %c\n", sc);

	printf("unsigned char (int) = %i\n", usc);
	printf("unsigned char (char) = %c\n", usc);
}

void task5_1() {
    cout << "\nЗадание 5_1." << endl;

	int d, i = 1;
	d = (++i) + 2;

	printf("d = %i, i = %i\n", d, i);
}

void task5_2() {
	cout << "\nЗадание 5_2." << endl;

	int d, i = 1;
	d = ++i;

	printf("d = %i, i = %i\n", d, i);
}

void task5_3() {
	cout << "\nЗадание 5_3." << endl;

	int d = 1;
	d += d++;

	printf("d = %i\n", d);
}

void task5_4() {
	cout << "\nЗадание 5_4." << endl;

	int a, b, c, d, k;
	b = 2; d = 3;
	k = (a = b) + (c = d);

	printf("k = %i\n", k);
}

void task5_5() {
	cout << "\nЗадание 5_5." << endl;

	int i, l, j, k;
	i = l = j = k = 0;
	int a = (i++ && ++j) || (k || l++);

	printf("a = %i\n", a);
}

void task5_6() {
	cout << "\nЗадание 5_6." << endl;

	int a, b, k;
	a = 2; b = 1;
	k = (a != b) ? (a - b++) : (++a - b);

	printf("k = %i\n", k);
}

void task5_7() {
	cout << "\nЗадание 5_7." << endl;

	int a = 2;
	int b = 3;
	float y1, y2, c = 3.5;
	y1 = c * a / b;
	y2 = c * (a / b);

	printf("y1 = %f; y2 = %f\n", y1, y2);
}

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Лабораторная работа №2" << endl;

    task1();
	task1_2();
    task2();
    task3();
    task4();
    task5_1();
	task5_2();
	task5_3();
	task5_4();
	task5_5();
	task5_6();
	task5_7();

    system("pause");

    return 0;
}