#include <iostream>
#include <stdio.h>

using namespace std;

//инициализация массива
int InputMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 50;
	}
	return *arr;
}
//вывод массива
void PrintMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//сортировка массива
void SortMass(int* arr, int n) {
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
void WriteToFile(int* arr, int n, char* filePath) {
	FILE* _writeToFile;
	fopen_s(&_writeToFile, filePath, "w");
	if (_writeToFile != NULL) {
		for (int i = 0; i < n; i++) {
			fprintf(_writeToFile, "%d\t", arr[i]);
		}
		fclose(_writeToFile);
		cout << "Массив записан в файл успешно!" << endl;
	}
	else {
		cout << "Не удалось открыть файл!" << endl;
	}
}
void WriteToFileForTask(FILE* file, FILE* outFile, char* filePath) {
	int num;
	fopen_s(&file, filePath, "r");
	while (fscanf_s(file, "%d", &num) != EOF) {
		fprintf_s(outFile, "%d", num);
	}
	cout << "Данные записаны в общий файл!" << endl;
}
//запись слияния массива в файл
void MergeWriteToFile(char* filePath1, char* filePath2, char* filePath3) {
	FILE* file1, * file2, * outFile;
	fopen_s(&file1, filePath1, "r");
	fopen_s(&file2, filePath2, "r");
	if (file1 == NULL || file2 == NULL) {
		cout << "Ошибка открытия отдельных файлов!" << endl;
		return;
	}
	fopen_s(&outFile, filePath3, "w");
	int num1, num2;
	if (fscanf_s(file1, "%d", &num1) == EOF) {
		fclose(file2);
		fopen_s(&file2, filePath2, "r");
		while (fscanf_s(file2, "%d", &num2) != EOF) {
			fprintf_s(outFile, "%d\t", num2);
		}
		cout << "Данные из 2 файла записаны в общий файл!" << endl;
		return;
	}
	else if (fscanf_s(file2, "%d", &num2) == EOF) {
		fclose(file1);
		fopen_s(&file1, filePath1, "r");
		while (fscanf_s(file1, "%d", &num1) != EOF) {
			fprintf_s(outFile, "%d\t", num1);
		}
		cout << "Данные из 1 файла записаны в общий файл!" << endl;
		return;
	}
	else {
		while (true) {
			if (num1 <= num2) {
				fprintf(outFile, "%d ", num1);
				if (fscanf_s(file1, "%d", &num1) == EOF) {
					fprintf(outFile, "%d\t ", num2);
					break;
				}
			}
			else {
				fprintf(outFile, "%d ", num2);
				if (fscanf_s(file2, "%d", &num2) == EOF) {
					fprintf(outFile, "%d\t", num1);
					break;
				}
			}
		}
	}
	fclose(file1);
	fclose(file2);
	fclose(outFile);
}
//Индивидуальное задание
int Task6_WriteToFile(char* filePath) {
	FILE* task6;
	fopen_s(&task6, filePath, "r");
	if (task6 == NULL) {
		cout << "Ошибка открытия файла, он пустой" << endl;
		return -1;
	}
	int _count = 0;
	char ch;
	while ((ch = fgetc(task6)) != EOF && !isspace(ch)) {
		_count++;
	}
	fclose(task6);
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
	int arr1[n1];
	int arr2[n2];
	cout << "Первый массив: ";
	InputMass(arr1, n1);
	PrintMass(arr1, n1);
	cout << endl;
	cout << "Второй массив: ";
	InputMass(arr2, n2);
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
