#include <iostream>
#include "AllFunctions.h";
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №6" << endl;
    const int n1 = 4;
    const int n2 = 5;
    int arr1[n1];
    int arr2[n2];
    InputMass(arr1, n1);
    InputMass(arr2, n2);
    SortMass(arr1, n1);
    SortMass(arr2, n2);
    PrintScreenMass(arr1, n1);
    PrintScreenMass(arr2, n2);
    char filePath1[] = "Text1.txt";
    char filePath2[] = "Text2.txt";
    WriteToFile(arr1, n1, filePath1);
    WriteToFile(arr2, n2, filePath2);
    system("pause");
    return 0;
}
