#include <iostream>
using namespace std;

//  Структура для дерева
struct Tree
{
	int field;
	Tree* left;
	Tree* right;
};
//  Структура для стека
struct Node
{
	int data;
	Node* next;
};
//  Структура для очереди
struct Queue
{
	Node* h;
	Node* t;
};
//  Для инициализации одномерных массивов
void InitMassiv(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 50;
	}
}
//  Для вывода на экран одномерных массивов
void PrintMassiv(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//  1) Написать рекурсивную функцию добавления элемента в двоичное дерево.
Tree* AddTree(int _field, Tree*& _tree) {
	if (_tree == NULL) {
		_tree = new Tree;
		_tree->field = _field;
		_tree->left = NULL;
		_tree->right = NULL;
	}
	else if (_field < _tree->field) {
		_tree->left = AddTree(_field, _tree->left);
	}
	else {
		_tree->right = AddTree(_field, _tree->right);
	}
	return _tree;
}
//  2) Написать рекурсивную функцию LCR обхода двоичного дерева (симметричный обход).
void TreePrint1(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		cout << _tree->field << "\t"; //Отображаем корень дерева
		TreePrint1(_tree->left); //Рекурсивная функция для левого поддерева
		TreePrint1(_tree->right);
	}
}
//  3) Написать рекурсивную функцию CLR обхода двоичного дерева (прямой обход).
void TreePrint2(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		TreePrint2(_tree->left); //Рекурсивная функция для левого поддерева
		cout << _tree->field << "\t"; //Отображаем корень дерева
		TreePrint2(_tree->right);
	}
}
//  4) Написать рекурсивную функцию LRC обхода двоичного дерева (обход снизу).
void TreePrint3(Tree* _tree) {
	if (_tree != NULL) { //Пока не встретится пустой узел
		TreePrint3(_tree->left); //Рекурсивная функция для левого поддерева
		TreePrint3(_tree->right);
		cout << _tree->field << "\t"; //Отображаем корень дерева
	}
}
//  5) Написать функцию добавления элемента в линейную динамическую структуру, организованную по принципу стека.
void AddStack(Node*& stack, int value) {
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (stack == NULL) {
		stack = temp;
	}
	else {
		temp->next = stack;
		stack = temp;
	}
}
//  6) Написать функцию добавления элемента в линейную динамическую структуру, организованную по принципу очереди.
void AddQueue(Queue& queue, int value) {
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (queue.h = NULL) {
		queue.h = temp;
		queue.t = temp;
	}
	else {
		queue.t = temp;
		queue.t = queue.t->next;
	}
}
//  7) Написать функцию извлечения элемента из линейной динамической структуры, организованной по принципу стека.
int izvlStack(Node*& stack)
{
	Node* temp = stack;
	int res = temp->data;
	stack = temp->next;
	delete(temp);
	return res;
}
//  8) Написать функцию извлечения элемента из линейной динамической структуры, организованной по принципу очереди.
int IzvlQueue(Queue& queue) {
	Node* temp = queue.h;
	int res = temp->data;
	queue.h = temp->next;
	delete temp;
	return res;
}
bool GetIzvlQueue(Queue& queue) {
	if (queue.h != NULL) {
		return true;
	}
	else {
		return false;
	}
}
//  9) Написать шаблон функции быстрой сортировки.
template<class T> void Recursion_Qsort(T* arr, int start, int end) {
	int pivot; // разрешающий элемент
	int index; // индекс разрешающего элемента
	int l_hold = start; //левая граница
	int r_hold = end; // правая граница
	pivot = arr[start];
	while (start < end) // пока границы не сомкнутся
	{
		while ((arr[end] > pivot) && (start < end))
		{
			end--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		}
		if (start != end) // если границы не сомкнулись
		{
			arr[start] = arr[end]; // перемещаем элемент [right] на место разрешающего
			start++; // сдвигаем левую границу вправо
		}
		while ((arr[start] < pivot) && (start < end))
		{
			start++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		}
		if (start != end) // если границы не сомкнулись
		{
			arr[end] = arr[start]; // перемещаем элемент [left] на место [right]
			end--; // сдвигаем правую границу влево
		}
	}
	arr[start] = pivot; // ставим разрешающий элемент на место
	index = start;
	start = l_hold;
	end = r_hold;
	if (start < index) // Рекурсивно вызываем сортировку для левой и правой части массива
	{
		Recursion_Qsort(arr, start, index - 1);
	}
	if (end > index)
	{
		Recursion_Qsort(arr, index + 1, end);
	}
}
//  10)	Написать шаблон функции добавления элемента в линейную динамическую структуру, организованную по принципу стека.
template<class T> struct NodeTemplate
{
	T data;
	NodeTemplate* next;
};
template<class T> NodeTemplate<T>* top = NULL;
template<class T> void AddStackTemplate(T value) {
	NodeTemplate<T>* temp = new NodeTemplate<T>;
	temp->data = value;
	temp->next = top<T>;
	top<T> = temp;
}
//  11)	Написать шаблон функции добавления элемента в линейную динамическую структуру, организованную по принципу очереди.
template<class T> struct NodeTempl
{
	T data;
	NodeTempl* next;
};
template<class T> void AddQueueTemplate(NodeTempl<T>*& elem, NodeTempl<T>* elem2, T value) {
	NodeTempl<T>* temp = new NodeTempl<T>;
	temp->data = value;
	temp->next = NULL;
	if (elem2 == NULL) {
		elem = elem2 = temp;
	}
	else {
		elem2->next = temp;
		elem2 = temp;
	}
}
//  12)	Написать шаблон функции извлечения элемента из линейной динамической структуры, организованной по принципу стека.
template<class T> T IzvlStack2(NodeTemplate<T>*& stack) {
	if (stack == NULL) {
		return T();
	}
	T res = stack->data;
	NodeTemplate<T>* temp = stack;
	stack = stack->next;
	delete temp;
	return res;
}
//  13)	Написать шаблон функции извлечения элемента из линейной динамической структуры, организованной по принципу очереди.
template <typename T> T dequeue(NodeTemplate<T>*& front, NodeTemplate<T>*& rear) {
	if (front == nullptr) {
		return T();
	}
	T value = front->data;
	NodeTemplate<T>* temp = front;
	if (front == rear) {
		front = rear = nullptr;
	}
	else {
		front = front->next;
	}
	delete temp;
	return value;
}
//  14)	Написать функцию перебора элементов линейной динамической структуры, организованной по принципу очереди. (значения выводятся на экран, сами элементы при этом не удаляются)
void PrintQ(Node* elem) {
	Node* temp = elem;
	while (temp != NULL) {
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}
//  15)	Написать функцию перебора элементов линейной динамической структуры организованной по принципу стека. (значения выводятся на экран, сами элементы при этом не удаляются)
void PrintStack(Node* stack) {
	Node* temp = stack;
	while (temp != NULL) {
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}
//  16)	Написать функцию перебора элементов линейной динамической кольцевой структуры.
struct Elem {
	int data;
	Elem* next;
};
Elem* head = NULL;
void Append(int value, Elem*& head) {
	Elem* temp = new Elem;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		temp->next = head;
	}
	else {
		Elem* newElem = head;
		while (newElem->next != head) {
			newElem = newElem->next;
		}
		newElem->next = temp;
		newElem->next = head;
	}
}
void Output(Elem* head) { // перебор
	if (head == nullptr) {
		cout << "This list is empty!" << endl;
	}
	else {
		Elem* temp = head;
		do {
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
		cout << endl;
	}
}

//  17)	Написать шаблон функции, возвращающей сумму элементов линейного динамического списка.
template<class T> struct MyStruct1
{
	T data;
	MyStruct1* next;
};
template<class T> T Sum(MyStruct1<T>* s) {
	int summ = 0;
	while (s != NULL) {
		summ += s->data;
		s = s->next;
	}
	return summ;
}

//  18)	Написать шаблон функции, возвращающей сумму элементов линейного динамического кольцевого списка.
template<class T> T Sum(MyStruct1<T>*& head) {
	if (head == NULL) {
		cout << "Error! List is empty." << endl;
		return -1;
	}
	else {
		T result = 0;
		MyStruct1<T>* temp = head;
		do {
			result += temp->data;
			temp = temp->next;
		} while (temp != head);
		return result;
	}
}

//  19)	Написать функцию добавления элемента в конец двунаправленного линейного списка.
struct Node2
{
	int data; 
	Node2* prev;
	Node2* next;
};
void AppendToend(Node2*& head, int newData) {
	Node2* newNode = new Node2;
	newNode->data = newData;
	newNode->next = nullptr;
	if (head == nullptr) {
		newNode->prev = nullptr;
		head = newNode;
		return;
	}
	Node2* lastNode = head;
	while (lastNode->next != nullptr) {
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	newNode->prev = lastNode;
}

//  20)	Написать функцию добавления элемента в начало двунаправленного линейного списка.
void Prepend(Node2*& head, int newData) {
	Node2* newNode = new Node2;
	newNode->data = newData;
	newNode->prev = nullptr;
	if (head == nullptr) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}

//  21)	Написать функцию добавления элемента в конец двунаправленного кольцевого линейного списка.
void Append_K(Node2*& head, int value) {
	Node2* newNode = new Node2{ value, nullptr, nullptr };
	if (head == nullptr) {
		head = newNode;
		head->next = head;
		head->prev = head;
	}
	else {
		Node2* temp = head->prev;
		temp->next = newNode;
		newNode->prev = temp;
		newNode->next = head;
		head->prev = newNode;
	}
}

//  22)	Написать функцию добавления элемента в начало двунаправленного линейного кольцевого списка.
void Append_N(Node2*& head, int value) {
	Node2* newNode = new Node2{ value, nullptr, nullptr };
	if (head == nullptr) {
		head = newNode;
		head->next = head;
		head->prev = head;
	}
	else {
		newNode->next = head;
		head->prev->next = newNode;
		newNode->prev = head->prev;
		head->prev = newNode;
		head = newNode;
	}
}

//  23)	Написать функцию удаления элемента по ключу из однонаправленного линейного списка.
void deleteNode(Node2*& head, int key) {
	Node2* temp = head;
	Node2* prev = nullptr;
	if (temp != nullptr && temp->data == key) {
		head = temp->next;
		delete temp;
		return;
	}
	while (temp != nullptr && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == nullptr) {
		return;
	}
	prev->next = temp->next;
	delete(temp);
}

//  24)	Написать функцию удаления элемента по ключу из двунаправленного линейного списка.
void deleteNode(Node2*& head, int key) {
	Node2* temp = head;
	while (temp != nullptr && temp->data != key) {
		temp = temp->next;
	}
	if (temp == nullptr) {
		cout << "Узел с ключом " << key << " не найден в списке." << endl;
		return;
	}
	if (temp->prev != nullptr) {
		temp->prev->next = temp->next;
	}
	else {
		head = temp->next;
	}
	if (temp->next != nullptr) {
		temp->next->prev = temp->prev;
	}
	delete temp;
}

//  25)	Написать функцию вставки элемента в однонаправленный линейный список. 
//      Вставка осуществляется за элементом с указанным значением ключевого поля или в конец списка, если таких значений в списке нет.
void pushByKey(Node*& elem, int key, int n) {
	Node* current = elem;
	while (current != NULL && current->data != key) {
		current = current->next;
	}
	if (current != NULL) {
		Node* newElem = new Node{ n, current->next };
		current->next = newElem;
	}
}

//  26)	Написать функцию вставки элемента в двунаправленный линейный список. 
//      Вставка осуществляется за элементом с указанным значением ключевого поля или в конец списка, если таких значений в списке нет.
void insertAfter(Node2* prevNode, int newData, int key) {
	if (prevNode == nullptr) {
		cout << "Предыдущий узел не может быть NULL." << endl;
		return;
	}
	if (prevNode->data == key) {
		Node2* newNode = new Node2{ newData, prevNode, prevNode->next };
		if (prevNode->next != nullptr) {
			prevNode->next->prev = newNode;
		}
		prevNode->next = newNode;
	}
	else {
		insertAfter(prevNode->next, newData, key);
	}
}

//  27)	Написать функцию вставки элемента в однонаправленный линейный список. 
//      Вставка осуществляется перед элементом с указанным значением ключевого поля или в начало списка, если таких значений в списке нет.
void insertBefore(Node2*& head, int newData, int key) {
	Node2* newNode = new Node2{ newData, nullptr };
	if (head == nullptr || head->data == key) {
		newNode->next = head;
		head = newNode;
		return;
	}
	Node2* current = head;
	while (current->next != nullptr && current->next->data != key) {
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
}

//  28)	Написать функцию вставки элемента в двунаправленный линейный список. 
//      Вставка осуществляется перед элементом с указанным значением ключевого поля или в начало списка, если таких значений в списке нет.
void insert(Node2*& head, int newData, int key) {
	Node2* newNode = new Node2{ newData, nullptr, nullptr };
	if (head == nullptr || head->data == key) {
		newNode->next = head;
		if (head != nullptr) {
			head->prev = newNode;
		}
		head = newNode;
		return;
	}
	Node2* current = head;
	while (current->next != nullptr && current->next->data != key) {
		current = current->next;
	}
	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != nullptr) {
		current->next->prev = newNode;
	}
	current->next = newNode;
}

//  29)	Написать функцию поиска в двоичном дереве. (функция должна вернуть адрес элемента) 
Tree* SearchTree(Tree* root, int value) {
	// Если дерево пустое или не найден элемент
	if (root == NULL || root->field == value) {
		return root;
	}
	if (value < root->field) {
		return SearchTree(root->left, value);
	}
	else {
		return SearchTree(root->right, value);
	}
}
//  30)	Написать шаблон функции поиска в двоичном дереве. (функция должна вернуть адрес элемента) 
template<class T> struct TreeTemplate
{
	T field;
	TreeTemplate* left;
	TreeTemplate* right;
	TreeTemplate(T value) : field(value), left(nullptr), right(nullptr) {}
};
template<class T> TreeTemplate<T>* SearchTreeTemplate(TreeTemplate<T>*& root, const T& value) {
	if (root == NULL || root->field == value) {
		return root;
	}
	if (value < root->field) {
		return SearchTreeTemplate(root->left, value);
	}
	else {
		return SearchTreeTemplate(root->right, value);
	}
}
TreeTemplate<int>* AddTreeTemplate() {
	TreeTemplate<int>* root = new TreeTemplate<int>(4);
	root->left = new TreeTemplate<int>(2);
	root->right = new TreeTemplate<int>(6);
	root->left->left = new TreeTemplate<int>(1);
	root->left->right = new TreeTemplate<int>(3);
	root->right->left = new TreeTemplate<int>(5);
	root->right->right = new TreeTemplate<int>(7);
	return root;
}
int main()
{
	setlocale(LC_ALL, "rus");
	//общий блок
	const int n = 5;
	int arr[n];
	InitMassiv(arr, n);
	cout << "Исходный массив: \n";
	PrintMassiv(arr, n);
	cout << "Элементы добавлены!" << endl;

	//блок задания 1
	cout << "\nЗадание 1." << endl;
	Tree* _tree = NULL;
	for (int i = 0; i < n; i++) {
		AddTree(arr[i], _tree);
	}

	//блок задания 2
	cout << "\nЗадание 2." << endl;
	cout << "Симметричный обход." << endl;
	TreePrint1(_tree);
	cout << endl;

	//блок задания 3
	cout << "\nЗадание 3." << endl;
	cout << "Прямой обход." << endl;
	TreePrint2(_tree);
	cout << endl;

	//блок задания 4
	cout << "\nЗадание 4." << endl;
	cout << "Обход снизу." << endl;
	TreePrint3(_tree);
	cout << endl;

	//блок задания 5
	cout << "\nЗадание 5." << endl;
	Node* stack = NULL;
	for (int i = 0; i < n; i++) {
		AddStack(stack, arr[i]);
	}

	//блок задания 6
	cout << "\nЗадание 6." << endl;
	Queue queue = { NULL,NULL };
	for (int i = 0; i < n; i++) {
		AddQueue(queue, arr[i]);
	}

	//блок задания 7
	cout << "\nЗадание 7." << endl;
	for (int i = 0; i < n; i++) {
		cout << izvlStack(stack) << endl;
	}
	//блок задания 8
	cout << "\nЗадание 8." << endl;
	for (int i = 0; i < n; i++) {
		if (GetIzvlQueue(queue) != NULL) {
			cout << IzvlQueue(queue) << endl;
		}
		else {
			cout << "Данных нет" << endl;
		}
	}

	//блок задания 9
	cout << "\nЗадание 9." << endl;
	int start = 0;
	int end = n - 1;
	Recursion_Qsort(arr, start, end);
	PrintMassiv(arr, n);

	//блок задания 10
	cout << "\nЗадание 10." << endl;
	for (int i = 0; i < n; i++) {
		AddStackTemplate(arr[i]);
	}

	//блок задания 11
	cout << "\nЗадание 11." << endl;
	NodeTempl<int>* _nodeTempl = { NULL };
	NodeTempl<int>* _nodeTempl2 = { NULL };
	for (int i = 0; i < n; i++) {
		AddQueueTemplate(_nodeTempl, _nodeTempl2, arr[i]);
	}

	//блок задания 12
	cout << "\nЗадание 12." << endl;
	NodeTemplate<int>* _node = NULL;
	for (int i = 0; i < n; i++) {
		cout << IzvlStack2(_node) << "\t";
	}
	cout << endl;

	//блок задания 13
	cout << "\nЗадание 13." << endl;
	NodeTemplate<int>* _q1 = { NULL };
	NodeTemplate<int>* _q2 = { NULL };
	for (int i = 0; i < n; i++) {
		cout << dequeue(_q1, _q2) << "\t";
	}
	cout << endl;

	//блок задания 14
	cout << "\nЗадание 14." << endl;
	PrintQ(queue.h);

	//блок задания 15
	cout << "\nЗадание 15." << endl;
	PrintStack(stack);

	//блок задания 16
	cout << "\nЗадание 16." << endl;
	Elem* _elem = NULL;
	for (int i = 0; i < n; i++) {
		Append(arr[i], _elem);
	}
	Output(_elem);

	//блок задания 17
	cout << "\nЗадание 17." << endl;

	//блок задания 18
	cout << "\nЗадание 18." << endl;

	//блок задания 19
	cout << "\nЗадание 19." << endl;
	Node2* S = NULL;
	for (int i = 0; i < n; i++) {
		AppendToend(S, arr[i]);
	}
	Node2* current = S;
	while (current != NULL) {
		cout << current->data << "\t";
		current = current->next;
	}

	//блок задания 20
	cout << "\nЗадание 20." << endl;
	for (int i = 0; i < n; i++) {
		Prepend(S, arr[i]);
	}
	Node2* current2 = S;
	while (current2 != NULL) {
		cout << current2->data << "\t";
		current2 = current2->next;
	}

	//блок задания 21
	cout << "\nЗадание 21." << endl;

	//блок задания 22
	cout << "\nЗадание 22." << endl;

	//блок задания 23
	cout << "\nЗадание 23." << endl;

	//блок задания 24
	cout << "\nЗадание 24." << endl;

	//блок задания 25
	cout << "\nЗадание 25." << endl;

	//блок задания 26
	cout << "\nЗадание 26." << endl;

	//блок задания 27
	cout << "\nЗадание 27." << endl;

	//блок задания 28
	cout << "\nЗадание 28." << endl;

	//блок задания 29
	cout << "\nЗадание 29." << endl;
	cout << "Элементы, находящиеся в дереве: " << endl;
	PrintMassiv(arr, n);
	int _address;
	cout << "Введите элемент, чей адрес хотите узнать: ";
	cin >> _address;
	Tree* result = SearchTree(_tree, _address);
	if (result != NULL) {
		cout << "Элемент " << _address << " есть в дереве, расположенный по адресу: " << result << endl;
	}
	else {
		cout << "Элемент " << _address << " не существует в дереве." << endl;
	}

	//блок задания 30
	cout << "\nЗадание 30." << endl;
	int _address2;
	cout << "Введите элемент, чей адрес хотите узнать: ";
	cin >> _address2;
	TreeTemplate<int>* root = AddTreeTemplate();
	TreeTemplate<int>* result2 = SearchTreeTemplate(root, _address2);
	if (result != NULL) {
		cout << "Элемент " << _address2 << " есть в дереве, расположенный по адресу: " << result2 << endl;
	}
	else {
		cout << "Элемент " << _address2 << " не существует в дереве." << endl;
	}
}