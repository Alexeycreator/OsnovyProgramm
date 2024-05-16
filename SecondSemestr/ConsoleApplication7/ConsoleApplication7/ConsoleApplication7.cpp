#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
struct Q {
    Node* h;
    Node* t;
};
struct Stack
{
    Node* top;
};
void InputMassiv(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 50;
    }
}
void PrintMassiv(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void AddElem(Q &q, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if (q.h == NULL) {
        q.h = temp;
        q.t = temp;
    }
    else {
        q.t->next = temp;
        q.t = q.t->next;
    }
}
void Print(Node* h) {
    Node* temp = h;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}
void PrintStack(Node* stack) {
    Node* temp = stack;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}
int Izvl(Q& q) {
    Node* temp = q.h;
    int a = temp->data;
    q.h = temp->next;
    delete temp;
    return a;
}
bool GetSosiska(Q& q) {
    if (q.h != NULL) {
        return true;
    }
    else {
        return false;
    }
}
void AddStack(Node*&stack, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if (stack == NULL) {
        stack = temp;
    }
    else{
        temp->next = stack;
        stack = temp;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №7" << endl;
    const int n = 5;
    int arr[n];
    InputMassiv(arr, n);
    PrintMassiv(arr, n);
    Q Q1 = {NULL, NULL};
    Node* stack = NULL;
    for (int i = 0; i < n; i++) {
        AddElem(Q1, arr[i]);
    }
    Print(Q1.h);
    cout << Izvl(Q1) << endl;
    for (int i = 0; i < n; i++) {
        if (GetSosiska(Q1) != false) {
            cout << Izvl(Q1) << endl;
        }
        else {
            cout << "Сосисок нет" << endl;
        }
    }
    cout << "Стэк: " << endl;
    for (int i = 0; i < n; i++) {
        AddStack(stack, arr[i]);
    }
    PrintStack(stack);
    system("pause");
    return 0;
}
