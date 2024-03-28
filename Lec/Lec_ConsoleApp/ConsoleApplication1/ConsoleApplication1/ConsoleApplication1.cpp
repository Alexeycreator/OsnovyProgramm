#include <iostream>
using namespace std;

const int len1 = 5, len2 = 6;

void Init(int* m, int n)
{
	for (int i = 0;i < n;i++)
	{
		m[i] = 1 + rand() % 50;
	}
}
void Print(int* m, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << m[i];
	}
}
void Sort(int* mas, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		int k = i;
		for (int j = k + 1;j < n;j++)
		{
			if (mas[j] < mas[k])
			{
				k = j;
			}
		}
		int tmp = mas[i];
		mas[i] = mas[k];
		mas[k] = tmp;
	}
}

int main()
{
	int mas1[len1], mas2[len2];
	Init(mas1, len1);
	Print(mas1, len1);
	cout << endl;
	Sort(mas1, len1);
	Print(mas1, len1);
	cout << endl;
	Init(mas2, len2);
	Print(mas2, len2);
	cout << endl;
	Sort(mas2, len2);
	Print(mas2, len2);
}
