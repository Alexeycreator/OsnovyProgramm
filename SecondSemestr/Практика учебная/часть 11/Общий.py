import math
def task1_tema11():
    coffee_price = 150
    amount = int(input("Введите сумму денег: "))
    if amount >= coffee_price:
        change = amount - coffee_price
        print(f"Вот ваш кофе. Ваша сдача: {change} руб.")
    else:
        shortage = coffee_price - amount
        print(f"Недостаточно средств. Вам не хватает: {shortage} руб.")
def task2_tema11():
    prices = {'эспрессо': 100, 'капучино': 150, 'латте': 200}
    choice = input("Выберите напиток (эспрессо, капучино, латте): ").lower()
    amount = int(input("Введите сумму денег: "))
    if choice in prices:
        if amount >= prices[choice]:
            change = amount - prices[choice]
            print(f"Вот ваш {choice}. Ваша сдача: {change} руб.")
        else:
            shortage = prices[choice] - amount
            print(f"Недостаточно средств. Вам не хватает: {shortage} руб.")
    else:
        print("Такого напитка нет в ассортименте.")
def task3_tema11():
    x=int(input())
    if(100000<x>=10000):
        print("Число пятизначное")
    else:print("Число НЕ пятизначное")
def task4_tema11():
    x1=int(input("Введие первое число:"))
    x2=int(input("Введие второе число:"))
    if(x1>x2):
        print("min=",x2)
    else:print("min=",x1)
def task5_tema11():
    num1 = int(input("Введите первое число: "))
    num2 = int(input("Введите второе число: "))
    if num2 != 0:
        if num1 % num2 == 0:
            print(f"{num1} делится на {num2}. Частное: {num1 // num2}.")
        else:
            print(f"{num1} не делится на {num2}. Частное: {num1 // num2}, остаток: {num1 % num2}.")
    else:
        print("На ноль делить нельзя.")
def task6_tema11():
    x = float(input("Введите координату x: "))
    y = float(input("Введите координату y: "))
    if x > 0 and y > 0:
        print("Точка находится в первой четверти.")
    elif x < 0 and y > 0:
        print("Точка находится во второй четверти.")
    elif x < 0 and y < 0:
        print("Точка находится в третьей четверти.")
    elif x > 0 and y < 0:
        print("Точка находится в четвертой четверти.")
    else:
        print("Точка находится на одной из осей координат.")
def task7_tema11():
    x = float(input("Введите координату x: "))
    y = float(input("Введите координату y: "))
    quadrant = ("первой" if x > 0 and y > 0 else
                "второй" if x < 0 and y > 0 else
                "третьей" if x < 0 and y < 0 else
                "четвертой" if x > 0 and y < 0 else
                "на одной из осей координат")
    print(f"Точка находится в {quadrant}.")
def task8_tema11():
    x = float(input("Введите число x: "))
    y = float(input("Введите число y: "))
    z=0
    if x <= y:
        z = x + y
    else:
        z= 1 - x + y
    print(f"Число z равно: {z}")
def task9_tema11():
    number = int(input("Введите натуральное число меньше 10000: "))
    if 0 < number < 10000:
        print((str(number))[::-1])
    else:
        print("Число не соответствует условиям.")
def task9_tema11():
    a = float(input("Введите коэффициент a: "))
    b = float(input("Введите коэффициент b: "))
    c = float(input("Введите коэффициент c: "))
    discriminant = b**2 - 4*a*c
    if discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        print(f"Корни уравнения: {min(root1, root2)} {max(root1, root2)}")
    elif discriminant == 0:
        root = -b / (2*a)
        print(f"Корень уравнения: {root}")
    else:
        print("Уравнение не имеет вещественных корней.")
def task11_tema11():
    a = float(input("Введите длину стороны a: "))
    b = float(input("Введите длину стороны b: "))
    c = float(input("Введите длину стороны c: "))
    if a + b > c and a + c > b and b + c > a:
        if a == b == c:
            print("equilateral")#равносторонний
        elif a == b or a == c or b == c:
            print("isosceles")#равнобедренны
        else:
            print("versatile")#разносторонний
    else:
        print("NO")
def task12_tema11():
    num1 = int(input("Введите первое число: "))
    num2 = int(input("Введите второе число: "))
    if num1 == num2**2:
        print("YES")
    else:
        print("NO")
def task13_tema11():
    year = int(input("Введите год: "))
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        print(f"{year} - високосный год. Количество дней: 366")
    else:
        print(f"{year} - не високосный год. Количество дней: 365")
def task14_tema11():
    number = input("Введите четырехзначное число: ")
    if len(number) == 4:
        first_two = int(number[0]) + int(number[1])
        last_two = int(number[2]) + int(number[3])
        print(first_two == last_two)
    else:
        print("Введено не четырехзначное число.")
def task15_tema11():
    num1 = int(input("Введите первое число: "))
    num2 = int(input("Введите второе число: "))
    if num1 > num2:
        print("first")
    elif num2 > num1:
        print("second")
    else:
        print("equal")
def task16_tema11():
    queen_col, queen_row = int(input("Введите столбец ферзя: ")), int(input("Введите строку ферзя: "))
    piece_col, piece_row = int(input("Введите столбец фигуры: ")), int(input("Введите строку фигуры: "))
    if (queen_col == piece_col or queen_row == piece_row or abs(queen_col - piece_col) == abs(queen_row - piece_row)):
        print("YES")
    else:
        print("NO")
def task18_tema11():
    months = ["январь", "февраль", "март", "апрель", "май", "июнь",
              "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"]
    seasons = ["зима", "весна", "лето", "осень"]
    month_number = int(input("Введите номер месяца: "))
    if 1 <= month_number <= 12:
        month = months[month_number - 1]
        season = seasons[month_number//3]
        print(f"{month} - это {season}.")
    else:
        print("Некорректный номер месяца.")
def task19_tema11():
    days = ["понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"]
    day_number = int(input("Введите номер дня недели: "))
    if 1 <= day_number <= 7:
        print(days[day_number - 1])
    else:
        print("Некорректный номер дня недели.")
def task20_tema11():
    amount = int(input("Введите сумму: "))
    ice_cream_price = 120
    if amount >= ice_cream_price:
        print(f"На эту сумму можно купить {amount // ice_cream_price} мороженых.")
    else:
        print("Недостаточно средств для покупки мороженого.")
# task1_tema11()
# task2_tema11()
# task3_tema11()
# task4_tema11()
# task9_tema11()
units = ['', 'один', 'два', 'три', 'четыре', 'пять', 'шесть', 'семь', 'восемь', 'девять']
teens = ['десять', 'одиннадцать', 'двенадцать', 'тринадцать', 'четырнадцать', 'пятнадцать', 'шестнадцать', 'семнадцать', 'восемнадцать', 'девятнадцать']
tens = ['', '', 'двадцать', 'тридцать', 'сорок', 'пятьдесят', 'шестьдесят', 'семьдесят', 'восемьдесят', 'девяносто']
hundreds = ['', 'сто', 'двести', 'триста', 'четыреста', 'пятьсот', 'шестьсот', 'семьсот', 'восемьсот', 'девятьсот']
thousands = ['', 'одна тысяча', 'две тысячи', 'три тысячи', 'четыре тысячи']
#17
def num2words(num):
    if num < 10:
        return units[num]
    elif 10 <= num < 20:
        return teens[num - 10]
    elif 20 <= num < 100:
        return tens[num // 10] + (' ' + units[num % 10] if num % 10 else '')
    elif 100 <= num < 1000:
        return hundreds[num // 100] + (' ' + num2words(num % 100) if num % 100 else '')
    elif 1000 <= num < 10000:
        if num // 1000 == 1:
            return thousands[1] + (' ' + num2words(num % 1000) if num % 1000 else '')
        elif 2 <= num // 1000 <= 4:
            return thousands[num // 1000] + (' ' + num2words(num % 1000) if num % 1000 else '')
        else:
            return units[num // 1000] + ' тысяч' + (' ' + num2words(num % 1000) if num % 1000 else '')
# Ввод суммы пользователем
sum_rub = int(input("Введите сумму в рублях от 1 до 9999: "))
if 1 <= sum_rub <= 9999:
    words = num2words(sum_rub) + ' рублей'
    print(words)
else:
    print("Сумма вне диапазона.")


