#include <iostream>
#include "AllFunctions.h"
using namespace std;

void InputMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 50;
	}
}
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
void PrintScreenMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void WriteToFile(int* arr, int n, char* filePath) {
	FILE* _writeToFile;
	errno_t err = fopen_s(&_writeToFile, filePath, "w");
	if (_writeToFile != NULL || err != 0) {
		for (int i = 0; i < n; i++) {
			fprintf(_writeToFile, "%d\n", arr[i]);
		}
		fclose(_writeToFile);
		cout << "Массив записан в файл успешно!" << endl;
	}
	else {
		cout << "Не удалось открыть файл!" << endl;
	}
}

