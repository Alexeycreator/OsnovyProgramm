#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
struct Stack {
	Node* top;
};
void CheckTopNull(Stack& _stack, int value) {
	if (_stack.top == NULL) {
		Node* _node = new Node;
		_node->data = value;
		_node->next = NULL;
		_stack.top = _node;
	}
}
void Push(Stack& _stack, int value) {
	Node* _node = new Node;
	_node->data = value;
	_node->next = NULL;
	_stack.top = _node;
}
int PrintStack(Stack& _stack) {
	if (_stack.top == NULL) {
		cout << "Стэк пустой" << endl;
		return -1;
	}
	int poppedValue = _stack.top->data;
	if (_stack.top == _stack.top->next) {
		delete _stack.top;
		_stack.top = NULL;
	}
	else {
		Node* temp = _stack.top;
		_stack.top = _stack.top->next;
		delete temp;
	}
	return poppedValue;
}
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Лекция по ОП 23_04_2024" << endl;
	Stack _stack;
	_stack.top = NULL;
	CheckTopNull(_stack, 5);
	Push(_stack, 10);
	Push(_stack, 15);
	cout << PrintStack(_stack) << endl;
	cout << PrintStack(_stack) << endl;
	cout << PrintStack(_stack) << endl;
	system("pause");
	return 0;
}




















//struct Node {
//    int data;
//    Node* next;
//};
//
//struct Stack {
//    Node* top;
//};
//
//void checkTopNull(Stack& s, int value) {
//    if (s.top == NULL) {
//        Node* newNode = new Node;
//        newNode->data = value;
//        newNode->next = NULL;
//        s.top = newNode;
//    }
//}
//
//void push(Stack& s, int value) {
//    Node* newNode = new Node;
//    newNode->data = value;
//    newNode->next = s.top;
//    s.top = newNode;
//}
//
//int pop(Stack& s) {
//    if (s.top == NULL) {
//        cout << "пустой" << endl;
//        return -1;
//    }
//
//    int poppedValue = s.top->data;
//    Node* temp = s.top;
//    s.top = s.top->next;
//    delete temp;
//    return poppedValue;
//}
//
//int main() {
//    Stack s;
//    s.top = NULL;
//
//    checkTopNull(s, 5);
//
//    push(s, 10);
//    push(s, 15);
//
//    cout << pop(s) << endl; // Output should be 15
//    cout << pop(s) << endl; // Output should be 10
//    cout << pop(s) << endl; // Output should be 5
//	  system("pause");
//    return 0;
//}
