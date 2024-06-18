#include <iostream>
using namespace std;

//Структура для дерева
struct Tree
{
    int field;
    Tree* left;
    Tree* right;
}; 
//Структура для стека
struct Node
{
    int data;
    Node* next;
};
//Структура для очереди
struct Q
{
    Node* h;
    Node* t;
};
//Для инициализации одномерных массивов
void InitMassiv(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 50;
    }
}
//Для вывода на экран одномерных массивов
void PrintMassiv(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
//1) Написать рекурсивную функцию добавления элемента в двоичное дерево.
Tree* Task1(int _field, Tree*& _tree) {
    if (_tree == NULL) {
        _tree = new Tree;
        _tree->field = _field;
        _tree->left = NULL;
        _tree->right = NULL;
    }
    else if (_field < _tree->field) {
        _tree->left = Task1(_field, _tree->left);
    }
    else {
        _tree->right = Task1(_field, _tree->right);
    }
    return _tree;
}
//2) Написать рекурсивную функцию LCR обхода двоичного дерева (симметричный обход).
void TreePrint1(Tree* _tree) {
    if (_tree != NULL) { //Пока не встретится пустой узел
        cout << _tree->field << "\t"; //Отображаем корень дерева
        TreePrint1(_tree->left); //Рекурсивная функция для левого поддерева
        TreePrint1(_tree->right);
    }
}
//3) Написать рекурсивную функцию CLR обхода двоичного дерева (прямой обход).
void TreePrint2(Tree* _tree) {
    if (_tree != NULL) { //Пока не встретится пустой узел
        TreePrint2(_tree->left); //Рекурсивная функция для левого поддерева
        cout << _tree->field << "\t"; //Отображаем корень дерева
        TreePrint2(_tree->right);
    }
}
//4) Написать рекурсивную функцию LRC обхода двоичного дерева (обход снизу).
void TreePrint3(Tree* _tree) {
    if (_tree != NULL) { //Пока не встретится пустой узел
        TreePrint3(_tree->left); //Рекурсивная функция для левого поддерева
        TreePrint3(_tree->right);
        cout << _tree->field << "\t"; //Отображаем корень дерева
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\nЗадание 1." << endl;
    const int n = 5;
    int arr[n];
    Tree* _tree = NULL;
    InitMassiv(arr, n);
    cout << "Исходный массив: \n";
    PrintMassiv(arr, n);
    cout << "Элементы добавлены!" << endl;
    for (int i = 0; i < n; i++) {
        Task1(arr[i], _tree);
    }
    cout << "\nЗадание 2." << endl;
    cout << "Симметричный обход." << endl;
    TreePrint1(_tree);
    cout << endl;
    cout << "\nЗадание 3." << endl;
    cout << "Прямой обход." << endl;
    TreePrint2(_tree);
    cout << endl;
    cout << "\nЗадание 4." << endl;
    cout << "Обход снизу." << endl;
    TreePrint3(_tree);
    cout << endl;
    cout << "\nЗадание 5." << endl;
    cout << "\nЗадание 6." << endl;
    cout << "\nЗадание 7." << endl;
    cout << "\nЗадание 8." << endl;
    cout << "\nЗадание 9." << endl;
    cout << "\nЗадание 10." << endl;
    cout << "\nЗадание 11." << endl;
    cout << "\nЗадание 12." << endl;
    cout << "\nЗадание 13." << endl;
    cout << "\nЗадание 14." << endl;
    cout << "\nЗадание 15." << endl;
    cout << "\nЗадание 16." << endl;
    cout << "\nЗадание 17." << endl;
    cout << "\nЗадание 18." << endl;
}