#include <iostream>
using namespace std;

struct Node
{
	char data;
	Node* next;
};
//добавление
void AddElem(Node*& elem, char value) {
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (elem == NULL) {
		elem = temp;
	}
	else {
		temp->next = elem;
		elem = temp;
	}
}
//извлечение
char Izvl(Node*& _elem) {
	Node* temp = _elem;
	char a = temp->data;
	_elem = temp->next;
	delete(temp);
	return a;
}
bool Check(char str[]) {
	int count = 0, i = 0;
	while (str[i] != '\0')
	{
		//проверка на скобки
		if (str[i] == '(') count++;
		if (str[i] == ')' && count == 0) return false;
		if (str[i] == ')') count--;
		if ((str[i] == '(') && (str[i + 1] == ')')) return false;
		//проверка на знаки
		if ((str[i] == '+') && ((str[i + 1] == '+') || (str[i + 1] == '-') || (str[i + 1] == '*') || (str[i + 1] == '/') || (str[i + 1] == '\\0'))) return false;
		if ((str[i] == '-') && ((str[i + 1] == '+') || (str[i + 1] == '-') || (str[i + 1] == '*') || (str[i + 1] == '/') || (str[i + 1] == '\\0'))) return false;
		if ((str[i] == '*') && ((str[i + 1] == '+') || (str[i + 1] == '-') || (str[i + 1] == '*') || (str[i + 1] == '/') || (str[i + 1] == '\\0'))) return false;
		if ((str[i] == '/') && ((str[i + 1] == '+') || (str[i + 1] == '-') || (str[i + 1] == '*') || (str[i + 1] == '/') || (str[i + 1] == '\\0'))) return false;
		i++;
	}
	if (count == 0) {
		return true;
	}
	return false;
}
//получение приоритетов
int GetPriority(char ch) {
	switch (ch)
	{
	case '*':
	case '/':
		return 3;
	case '+':
	case '-':
		return 2;
	case '(':
		return 1;
	default:
		return 0;
	}
}
//выполнение операций
char ApplyOperations(char operation, int a, int b) {
	switch (operation) {
	case '+': {
		return a + b;
	}
	case '-': {
		return a - b;
	}
	case '*': {
		return a * b;
	}
	case '/': {
		if (b == 0) {
			throw "\nОшибка. Деление на ноль!";
		}
		return a / b;
	}
	default:
		cout << "Некорректная операция" << endl;
		return -1;
	}
}
void ToOPZ(char str[], char OPZstr[])
{
	if (Check(str)) {
		int i = 0, j = 0;
		Node* stack = NULL;
		while (str[i] != '\0') {
			if (str[i] == '(') AddElem(stack, str[i]);
			else if (str[i] == ')') {
				while (stack != nullptr && stack->data != '(') {
					OPZstr[j] = Izvl(stack);
					cout << OPZstr[j];
					j++;
				}
				if (stack != nullptr && stack->data == '(') {
					Izvl(stack);
				}
			}
			else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
				while (stack != nullptr && GetPriority(stack->data) >= GetPriority(str[i])) {
					OPZstr[j] = Izvl(stack);
					cout << OPZstr[j];
					j++;
				}
				AddElem(stack, str[i]);
			}
			else {
				OPZstr[j] = str[i];
				cout << OPZstr[j];
				j++;
			}
			i++;
		}
		while (stack != nullptr) {
			OPZstr[j] = Izvl(stack);
			cout << OPZstr[j];
			j++;
		}
		OPZstr[j] = '\0';
	}
	else cout << "ERROR";
}
int ReversePolishNotation(char expression[]) {
	Node* stack = NULL;
	int i = 0;
	while (expression[i] != '\0') {
		if (expression[i] >= '0' && expression[i] <= '9') {
			AddElem(stack, expression[i]);
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
			int b = Izvl(stack) - '0';
			int a = Izvl(stack) - '0';
			int result;
			try {
				result = ApplyOperations(expression[i], a, b);
			}
			catch (const char* e) {
				cout << e << endl;
				return -1;
			}
			AddElem(stack, result + '0');
		}
		i++;
	}
	return Izvl(stack) - '0';
}
void CheckDel(char *str) {
	int res = ReversePolishNotation(str);
	if (res == -1) {
		cout << "Посчитать не получилось, из-за ошибки." << endl;
	}
	else {
		cout << "\nОтвет: " << ReversePolishNotation(str) << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Лабораторная работа №8 (Обратная польская запись)" << endl;
	char mass[100], str[100];
	cout << "Введите выражение: ";
	cin.getline(mass, 100);
	cout << "До преобразования:\n" << mass << endl;
	cout << "После преобразования:\n";
	ToOPZ(mass, str);
	CheckDel(str);
	system("pause");
	return 0;
}
