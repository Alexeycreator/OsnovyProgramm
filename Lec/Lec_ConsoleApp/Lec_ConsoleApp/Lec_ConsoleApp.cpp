#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Лекция по файлам" << endl;
	string filePath = "C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\Lec\\Lec_ConsoleApp\\Text.txt";
	ofstream _ofstream;
	char ch;
	_ofstream.open(filePath);
	if (_ofstream.is_open()) {
		cout << "Введите текст (в конце поставьте .): ";
		do {
			ch = cin.get();
			_ofstream.put(ch);
		} while (ch != '.');
	}
	_ofstream.close();
	cout << "\nЗапись в файл произведена успешно!" << endl;
	cout << "\n2 задание" << endl;
	ifstream _ifstream;
	string lineFile;
	_ifstream.open(filePath);
	if (_ifstream.is_open()) {
		while (getline(_ifstream, lineFile))
		{
			cout << lineFile << endl;
		}
	}
	_ifstream.close();
	system("pause");
	return 0;
}
