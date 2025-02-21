#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//инициализация массива
double InputMass(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 50;
	}
	return *arr;
}
//Для дробного примера
double InputMass2(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1.0 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / 49.0));
		arr[i] += static_cast<double>(rand()) / RAND_MAX;
	}
	return *arr;
}
//вывод массива
void PrintMass(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//сортировка массива
void SortMass(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//запись массива в файл
void WriteToFile(double* arr, int n, char* filePath) {
	ofstream outFile(filePath);
	if (outFile.is_open()) {
		for (int i = 0; i < n; i++) {
			outFile << arr[i] << "\n";
		}
		outFile.close();
		cout << "Массив записан в файл успешно!" << endl;
	}
	else {
		cout << "Не удалось открыть файл!" << endl;
	}
}
//void WriteToFileForTask(FILE* file, FILE* outFile, char* filePath) {
//	int num;
//	fopen_s(&file, filePath, "r");
//	while (fscanf_s(file, "%d", &num) != EOF) {
//		fprintf_s(outFile, "%d", num);
//	}
//	cout << "Данные записаны в общий файл!" << endl;
//}
//запись слияния массива в файл
void MergeWriteToFile(char* filePath1, char* filePath2, char* filePath3) {
	ifstream file1(filePath1);
	ifstream file2(filePath2);
	ofstream outFile(filePath3);
	if (!file1.is_open() || !file2.is_open()) {
		cout << "Ошибка открытия отдельных файлов!" << endl;
		return;
	}
	double num1, num2;
	bool file1Read = (bool)(file1 >> num1);
	bool file2Read = (bool)(file2 >> num2);
	while (file1Read && file2Read) {
		if (num1 <= num2) {
			outFile << num1 << endl;
			file1Read = (bool)(file1 >> num1);
		}
		else {
			outFile << num2 << endl;
			file2Read = (bool)(file2 >> num2);
		}
	}
	while (file1Read) {
		outFile << num1 << endl;
		file1Read = (bool)(file1 >> num1);
	}
	while (file2Read) {
		outFile << num2 << endl;
		file2Read = (bool)(file2 >> num2);
	}
	cout << "Данные из файлов записаны в общий файл!" << endl;
	file1.close();
	file2.close();
	outFile.close();
}
//Индивидуальное задание
int Task6_WriteToFile(char* filePath) {
	ifstream task6(filePath);
	if (!task6.is_open()) {
		cout << "Ошибка открытия файла, он пустой" << endl;
		return -1;
	}
	int _count = 0;
	char ch;
	while (task6.get(ch) && !isspace(ch)) {
		_count++;
	}
	task6.close();
	cout << "Количество символов в файле до первого пробела: " << _count << endl;
	return _count;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Лабораторная работа №5" << endl;
	//Задание 1
	const int n1 = 5;
	const int n2 = 4;
	double arr1[n1];
	double arr2[n2];
	cout << "Первый массив: ";
	InputMass(arr1, n1);
	PrintMass(arr1, n1);
	cout << endl;
	cout << "Второй массив: ";
	InputMass2(arr2, n2);
	PrintMass(arr2, n2);
	cout << endl;
	cout << "Сортировка первого массива: ";
	SortMass(arr1, n1);
	PrintMass(arr1, n1);
	cout << endl;
	cout << "Сортировка второго массива: ";
	SortMass(arr2, n2);
	PrintMass(arr2, n2);
	cout << endl;
	//Задание с файлами
	char filePath1[] = "Array1.txt";
	char filePath2[] = "Array2.txt";
	char filePath3[] = "AllArray.txt";
	WriteToFile(arr1, n1, filePath1);
	WriteToFile(arr2, n2, filePath2);
	MergeWriteToFile(filePath1, filePath2, filePath3);
	//Индивидуальное задание
	char task6_FilePath[] = "Task6.txt";
	cout << Task6_WriteToFile(task6_FilePath) << endl;
	system("pause");
	return 0;
}
