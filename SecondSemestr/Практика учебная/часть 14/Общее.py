import math
def task1_tema14():
    numbers = input("Введите числа через запятую: ").split(',')
    numbers = [int(num) for num in numbers]
    numbers.sort()
    print(*numbers,sep=",")
def task2_tema14():
    numbers = input("Введите числа через пробел: ").split()
    duplicates = {int(num) for num in numbers if numbers.count(num) > 1}
    print(' '.join(map(str, sorted(duplicates))))
def task3_tema14():
    n = int(input("Введите количество чисел: "))
    numbers = [int(input()) for _ in range(n)]
    squares_sum = sum(num ** 2 for num in numbers)
    print(squares_sum)
    print(';'.join(map(str, numbers)))
def task4_tema14():
   
    n = int(input("Введите количество чисел: "))
    numbers = [int(input()) for _ in range(n)]
    filtered_numbers = sorted(num for num in numbers if num % 5 == 0 and num % 25 != 0)
    for num in filtered_numbers:
        print(num)
def task5_tema14():
    n = int(input("Введите количество чисел: "))
    numbers = [int(input(f"Число {i+1}: ")) for i in range(n)]
    min_number = min(numbers)
    last_digit = str(min_number)[-1]
    sum_elements = sum(num for i, num in enumerate(numbers) if str(i).endswith(last_digit))
    print(f"Сумма элементов: {sum_elements}")
def task6_tema14():
    products = []
    number = int(input("Введите число (0 для завершения): "))
    while number != 0:
        product = 1
        while number > 0:
            product *= number % 10
            number //= 10
        products.append(product)
        number = int(input("Введите число (0 для завершения): "))
    products.sort(reverse=True)
    for product in products:
        print(product)
def task7_tema14():
    numbers = list(map(int, input("Введите числа через точку с запятой: ").split(';')))
    print(';'.join(map(str, sorted(numbers))))
def task8_tema14():
    n = int(input("Введите количество чисел: "))
    numbers = [int(input(f"Число {i+1}: ")) for i in range(n)]
    max_number = max(numbers)
    result = ['NONE' if max_number - num <= 3 else num for num in numbers]
    print(' '.join(map(str, result)))
def task9_tema14():
    x=2
def task10_tema14():
    numbers = list(map(int, input().split()))
    max_num = max(numbers)
    result = max_num / len(numbers)
    print(result)
def task11_tema14():
    list1 = list(map(int, input().split()))
    list2 = list(map(int, input().split()))
    result = [num for num in list1 if num not in list2]
    print(' '.join(map(str, result)))


def task12_tema14():
    numbers = list(map(int, input().split()))
    x = int(input())
    print('YES' if x in numbers else 'NO')
def task13_tema14():
    numbers = [int(input()) for _ in range(int(input("Введите количество чисел: ")))]
    for i, num in enumerate(numbers):
        if i % 2 != 0 and num % 2 == 0:
            del numbers[i]
            break
    print(' '.join(map(str, numbers)))
def task14_tema14():
    numbers = [int(input()) for _ in range(int(input("Введите количество чисел: ")))]
    unique_numbers = sorted(set(numbers))
    print(' '.join(map(str, unique_numbers)))


def task15_tema14():
    numbers = list(map(int, input().split()))
    positive_sorted = sorted([num for num in numbers if num > 0])
    negative_sorted = sorted([num for num in numbers if num <= 0], reverse=True)
    result = positive_sorted + negative_sorted
    print(' '.join(map(str, result)))
def task16_tema14():
    numbers = list(map(int, input().split()))
    sorted_by_abs = sorted(numbers, key=abs, reverse=True)
    print(' '.join(map(str, sorted_by_abs)))
def task18_tema14():
    numbers = list(map(int, input().split()))
    squares = [num for num in numbers if math.sqrt(num).is_integer()]
    print(max(squares) if squares else 'НЕТ')
task18_tema14()
