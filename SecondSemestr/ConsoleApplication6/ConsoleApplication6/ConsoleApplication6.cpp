#include <iostream>
#include "AllFunctions.h";
#include "File.h";
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №6" << endl;
    const int size1 = 10;
    const int size2 = 7;
    int* arr6_1 = new int[size1];
    int* arr6_2 = new int[size2];
    scriptmas(arr6_1, arr6_2, size1, size2);
    writemasToFile(arr6_1, size1, "Text1.txt");
    writemasToFile(arr6_2, size2, "Text2.txt");
    mergeFiles("Text1.txt", "Text2.txt", "Text3.txt");
    cout << endl;
    printfile("Text3.txt");
    cout << endl << endl;
    scriptmas(arr6_1, arr6_2, size1, size2);
    system("pause");
    return 0;

}
