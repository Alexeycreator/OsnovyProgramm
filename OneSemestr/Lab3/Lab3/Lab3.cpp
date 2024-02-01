#include <iostream>
using namespace std;

//выполнено
void task1(){
    cout << "Задание 1." << endl;

    int x, y;

    cout << "Введите x: ";
    cin >> x;

    if(x > 0){
        y = x - 12;
    }
    else if (x == 0) {
        y = 5;
    }
    else {
        y = x * x;
    }

    cout << "y = " << y << endl;
}

//выполнено
void task2() {
    cout << "\nЗадание 2." << endl;

    int vozrast;
    cout << "Введите возраст: ";
    cin >> vozrast;

    if (vozrast>=18 && vozrast <= 27) {
        cout << "человек подлежит призыву на срочную службу или может служить по контракту" << endl;
    }
    else if (vozrast>=28 && vozrast <= 59) {
        cout << "заполняющий анкету может служить по контракту" << endl;
    }
    else if (vozrast > 0 && vozrast <= 18 || vozrast >= 59) {
        cout << "заполняющий находится в непризывном возрасте" << endl;
    }
    else if (vozrast < 0) {
        cout << "Ошибка! Вы указали неположительный возраст, введите возраст снова." << endl;
    }
}

//выполнено
void task3_1() {
    cout << "\nЗадание 3_1." << endl;

    int den;
    cout << "1) Понедельник\n2) Вторник\n3) Среда\n4) Четверг\n5) Пятница\n6) Суббота\n7) Воскресенье\nВведите число нужного дня недели, чтобы составить расписание: ";
    cin >> den;
    string
        para1 = "1 пара: ", para2 = "\n2 пара: ", para3 = "\n3 пара: ", para4 = "\n4 пара: ", para5 = "\n5 пара: ",
        ORG_l = "Основы Российской государственности (лекция)", ORG_pr = "Основы Российской государственности (практика)",
        history_l = "История России (лекция)", history_pr = "История России (практика)",
        Osn_prog_l = "Основы программирования (лекция)", Osn_prog_pr = "Основы программирования (практика)", Osn_prog_lab = "Основы программирования (лаборторная)",
        IT_PD_l = "ИТ в ПД (лекция)", IT_PD_lab = "ИТ в ПД (лабораторная)",
        Algebra_l = "Алгебра и геометрия (лекция)", Algebra_pr = "Алгебра и геометрия (практика)",
        Fizra = "Физическая культура",
        Angl = "Английский язык",
        Mat_anal_l = "Математический анализ (лекция)", Mat_anal_pr = "Математический анализ (практика)";

    if (den >= 1 && den <= 7) {
        switch (den) {
        case 1:
            cout << "\nПонедельник.\n" << endl;
            cout << para1 << ORG_l << para2 << history_l << para3 << para4 << para5 << endl;
            break;
        case 2:
            cout << "\nВторник.\n" << endl;
            cout << para1 << para2 << IT_PD_lab << para3 << Osn_prog_l << para4 << Fizra << para5 << endl;
            break;
        case 3:
            cout << "\nСреда.\n" << endl;
            cout << para1 << para2 << history_pr << para3 << Algebra_pr << para4 << para5 << endl;
            break;
        case 4:
            cout << "\nЧетверг.\n" << endl;
            cout << para1 << Osn_prog_pr << para2 << ORG_pr << para3 << Osn_prog_lab << para4 << Algebra_l << para5 << Angl << endl;
            break;
        case 5:
            cout << "\nПятница.\n" << endl;
            cout << para1 << para2 << Fizra << para3 << Mat_anal_l << para4 << Mat_anal_pr << para5 << endl;
            break;
        case 6:
            cout << "\nСуббота.\n" << endl;
            cout << "Выходной день." << endl;
            break;
        case 7:
            cout << "\nВоскресенье.\n" << endl;
            cout << "Выходной день." << endl;
            break;
        }
    }
    else {
        cout << "Вы вышли за диапазон значений от 1 до 7, проверьте данные!" << endl;
    }
}

//выполнено
void task3_2() {
    cout << "\nЗадание 3_2." << endl;

    int day_semestra;

    string
        para1 = "1 пара: ", para2 = "\n2 пара: ", para3 = "\n3 пара: ", para4 = "\n4 пара: ", para5 = "\n5 пара: ",
        ORG_l = "Основы Российской государственности (лекция)", ORG_pr = "Основы Российской государственности (практика)",
        history_l = "История России (лекция)", history_pr = "История России (практика)",
        Osn_prog_l = "Основы программирования (лекция)", Osn_prog_pr = "Основы программирования (практика)", Osn_prog_lab = "Основы программирования (лаборторная)",
        IT_PD_l = "ИТ в ПД (лекция)", IT_PD_lab = "ИТ в ПД (лабораторная)",
        Algebra_l = "Алгебра и геометрия (лекция)", Algebra_pr = "Алгебра и геометрия (практика)",
        Fizra = "Физическая культура",
        Angl = "Английский язык",
        Mat_anal_l = "Математический анализ (лекция)", Mat_anal_pr = "Математический анализ (практика)";

    cout << "Введите число любое целое число: ";
    cin >> day_semestra;

    if (day_semestra < 1) {
        cout << "Вы ввели значение меньше 1, введите число повторно!" << endl;
    }
    else if(day_semestra > 122){
        cout << "Вы ввели значение больше допустимого значения дней, проверьте данные!" << endl;
    }
    else {
        int day, month, year, a_mnth, y_yr, m, R_den, den_nedely;
        cout << "Введите нужную вам дату.\nВведите день: ";
        cin >> day;
        cout << "Введите месяц: ";
        cin >> month;
        cout << "Введите год: ";
        cin >> year;

        a_mnth = (14 - month) / 12;
        y_yr = year - a_mnth;
        m = month + 12 * a_mnth - 2;
        R_den = 7000 + (day + y_yr + y_yr / 4 - y_yr / 100 + y_yr / 400 + (31 * m) / 12);
        den_nedely = R_den % 7;

        switch (den_nedely)
        {
        case 1:
            cout << "\nПонедельник.\n" << endl;
            cout << para1 << ORG_l << para2 << history_l << para3 << para4 << para5 << endl;
            break;
        case 2:
            cout << "\nВторник.\n" << endl;
            cout << para1 << para2 << IT_PD_lab << para3 << Osn_prog_l << para4 << Fizra << para5 << endl;
            break;
        case 3:
            cout << "\nСреда.\n" << endl;
            cout << para1 << para2 << history_pr << para3 << Algebra_pr << para4 << para5 << endl;
            break;
        case 4:
            cout << "\nЧетверг.\n" << endl;
            cout << para1 << Osn_prog_pr << para2 << ORG_pr << para3 << Osn_prog_lab << para4 << Algebra_l << para5 << Angl << endl;
            break;
        case 5:
            cout << "\nПятница.\n" << endl;
            cout << para1 << para2 << Fizra << para3 << Mat_anal_l << para4 << Mat_anal_pr << para5 << endl;
            break;
        case 6:
            cout << "\nСуббота.\n" << endl;
            cout << "Выходной день." << endl;
            break;
        case 7:
            cout << "\nВоскресенье.\n" << endl;
            cout << "Выходной день." << endl;
            break;
        default:
            cout << "Ошибка, проверьте данные!" << endl;
            break;
        }
    }
}

//выполнено
void task4() {
    cout << "\nЗадание 4." << endl;

    int num, sum = 0;
    cout << "Введите число: ";
    cin >> num;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "sum = " << sum << endl;
}

//выполнено
void task5() {
    cout << "\nЗадание 5." << endl;

    int year = 0;
    string year_animals[12] = { "обезьяны", "курицы", "собаки", "свиньи",
                          "крысы", "коровы", "тигра", "зайца",
                          "дракона", "змеи", "лошади", "овцы" };

    cout << "Введите год: ";
    cin >> year;

    while (year > 0)
    {
        cout << year << " год " << year_animals[(year - ((year / 12) * 12))];
        cout << "\nВведите год: (если хотите выйти из программы, нажмите Y";
        cin >> year;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    task1();
    task2();
    task3_1();
    task3_2();
    task4();
    task5();

    system("pause");

    return 0;
}