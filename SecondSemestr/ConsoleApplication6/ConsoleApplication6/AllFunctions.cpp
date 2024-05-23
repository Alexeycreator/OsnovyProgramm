#include <iostream>
#include "AllFunctions.h"
using namespace std;

extern int dir = 0;

static void InputMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 50;
	}
}
static void SortMass(int* arr, int n) {
	if (dir == 0) {
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
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
static void PrintScreenMass(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void scriptmas(int* mas1, int* mas2, int size1, int size2) {
	static int count = 0;
	InputMass(mas1, size1);
	SortMass(mas1, size1);
	PrintScreenMass(mas1, size1);
	InputMass(mas2, size2);
	SortMass(mas2, size2);
	PrintScreenMass(mas2, size2);
	cout << endl << "Количество вызовов функции: " << ++count << endl;
	dir++;
}


