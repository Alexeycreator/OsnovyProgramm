#include <iostream>
using namespace std;

struct Tree {
	int field; //поле данных
	Tree* left;	//левый потомок
	Tree* right; //правый потомок
};
void InitMassiv(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 10;
	}
}
void PrintMassiv(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void AddNode(int x, Tree*& _tree) {
	if (_tree == NULL) { //проверяем на пустоту, если дерева нет - формируем его
		_tree = new Tree;
		_tree->field = x;
		_tree->left = NULL;
		_tree->right = NULL;
	}
	else if (x < _tree->field) { //условие добавления левого потомка
		AddNode(x, _tree->left);
	}
	else { //условие добавления правого потомка
		AddNode(x, _tree->right);
	}
}
//префиксная форма
void TreePrintPrefix(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		cout << _tree->field << "\t"; //Отображаем корень дерева
		TreePrintPrefix(_tree->left); //Рекурсивная функция для левого поддерева
		TreePrintPrefix(_tree->right);
	}
}
//инфиксная форма
void TreePrintInfix(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		TreePrintInfix(_tree->left); //Рекурсивная функция для левого поддерева
		cout << _tree->field << "\t"; //Отображаем корень дерева
		TreePrintInfix(_tree->right);
	}
}
//постфиксная форма
void TreePrintPostfix(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		TreePrintPostfix(_tree->left); //Рекурсивная функция для левого поддерева
		TreePrintPostfix(_tree->right);
		cout << _tree->field << "\t"; //Отображаем корень дерева
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Лабораторная работа №9 (Бинарное дерево)" << endl;
	const int n = 5;
	int arr[n];
	Tree* _tree = NULL;
	InitMassiv(arr, n);
	cout << "Исходный массив:\n";
	PrintMassiv(arr, n);
	for (int i = 0; i < n; i++) {
		AddNode(arr[i], _tree);
	}
	cout << "Обход дерева в прямом порядке:" << endl;
	TreePrintPrefix(_tree);
	cout << "\nОбход дерева в симметричном порядке:" << endl;
	TreePrintInfix(_tree);
	cout << "\nОбход дерева в обратном порядке:" << endl;
	TreePrintPostfix(_tree);
	cout << endl;
	system("pause");
	return 0;
}
