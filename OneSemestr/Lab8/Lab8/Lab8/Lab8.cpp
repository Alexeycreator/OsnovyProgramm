#include <iostream>
using namespace std;

const int n = 5;
const int m = 3;

struct STUDENT
{
    string name;
    char numberGroup[25];
    int academic_performance[n];
};

int main()
{
    setlocale(LC_ALL, "Russian");
    STUDENT student[m];

    //ввод с клавиатуры данных в массив, состоящий из десяти структур типа STUDENT
    for (int i = 0; i < m; i++) {
        cout << "Фамилия студента: ";
        cin >> student[i].name;
        cout << "Номер группы: ";
        cin >> student[i].numberGroup;

        cout << "Успеваемость: \t";
        for (int j = 0; j < n; j++) {
            student[i].academic_performance[j] = 3 + rand() % 3;
            cout << student[i].academic_performance[j] << "\t";
        }
        cout << endl << endl;
    }

    //упорядочить элементы массива по возрастанию среднего балла
    cout << "\nМассив из 10 структур" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Фамилия: " << student[i].name << "\t Группа: " << student[i].numberGroup << endl;
    }

    cout << "\nСортировка массива по возрастанию среднего балла: " << endl;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            int sum1 = 0, sum2 = 0;
            int gpa1 = 0, gpa2 = 0;
            for (int k = 0; k < n; k++) {
                sum1 += student[j].academic_performance[k];
                sum2 += student[j + 1].academic_performance[k];
            }
            gpa1 = sum1 / n;
            gpa2 = sum2 / n;
            if (gpa1 > gpa2) {
                STUDENT temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        cout << "Фамилия: " << student[i].name << "\t Группа: " << student[i].numberGroup << endl;
    }

    //вывод на дисплей фамилий и номеров групп для всех студентов, имеющих оценки 4 и 5
    cout << "\nВывод хороших учеников: " << endl;
    bool flag = false;
    for (int i = 0; i < m; i++) {
        int a = 0;
        for (int j = 0; j < n; j++) {
            if (student[i].academic_performance[j] > 3) {
                a++;
                //flag = true;
                if (a == n) {
                    flag = true;
                    cout << " Фамилия: " << student[i].name << "\t Группа: " << student[i].numberGroup << endl;
                    //break;
                }
            }
        }
        if (flag == false) { 
            cout << "Студентов, обучающихся на 4 и 5 нет." << endl;
            break;
        }
    }
    

    system("pause");
    return 0;
}
