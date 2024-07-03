def task1() :
    numbers = []
    while True:
        num = int(input("Введите целое число (0 для выхода): "))
        if num == 0:
            break
        numbers.append(num)

    if 1 in numbers:
        print("Число 1 встретилось во введенной последовательности.")
    else:
        print("Число 1 не встретилось во введенной последовательности.")
    
def task2():
    n = int(input("Введите натуральное число n: "))
    d = int(input("Введите натуральное число d: "))

    for i in range(1, n):
        summ = 0
        for k in str(i):
            summ += int(k)
        if summ**2 == d:
            print(i, end=" ")

def task3():
    num = int(input("Введите целое число: "))

    summ = 0
    while num > 0:
        k = num % 10
        summ += k
        num //= 10

    print("Сумма цифр в числе:", summ)

def task4():
    for i in range(1, 551):
        if i % 5 == 0 and i % 10 != 0:
            print(i, end=" ")

def task5():
    n = int(input("Введите натуральное число N: "))

    sumsq = 0
    for i in range(1, n, 2):
        sumsq += i**2

    print("Сумма квадратов нечетных чисел:", sumsq)
    
def task6():
    a = int(input("Введите натуральное число a: "))
    b = int(input("Введите натуральное число b: "))
    sumsq = 0
    summ = 0
    for i in range(a, b + 1):
       summ += i
       sumsq += i**2
    print ("Разность между суммы квадратов чисел и суммой чисел: ", sumsq - summ)

def task7():
    a = int(input("Введите число a > 0: "))
    if a > 0:
        for i in range(a):
            if a == 7**i:
                print("Yes")
            else:
                print("No")
    else:
        print("a > 0 !!!!")
        
def task8():
    a = int(input("Введите натуральное число а: "))
    factorial = 1

    while a > 1:
        factorial = factorial * a
        a = a - 1

    print(factorial)
    
def task9():
    a = int(input("Введите число a >= 2: "))
    if a >= 2:
        for i in range(2, a):
            if a % i == 0:
                print("Наименьший натуральный делитель а: ", i)
            
    else:
        print("a >= 2 !!!!")
        
def task10():
    x = int(input("Введите начало вкалад x (руб.): "))
    p = int(input("Введите проценты вкалада p %: "))
    y = int(input("Введите конец вкалада y (руб.): "))
    years = 0
    while x < y:
        x += x * p // 100 # увеличиваем вклад на p процентов
        x = x // 1 # отбрасываем дробную часть копеек
        years += 1
    print( "Количемтво лет: ",years)
    
def task11():
    n = int(input("Введите натуральное число: "))
    binary = ""

    while n > 0:
        binary += str(n % 2)
        n = n // 2
    print("Двоичное представление числа в обратном порядке: ", binary)

def task12():
    n = int(input("Введите натуральное число: "))
    f = False
    
    for i in range(2, n):
        if n % i == 0:
            f = True
            print(i, " ")
    if f == False:
        print("Prime")
        
def task13():
    while n != 0:
        print("Введите с клавиатуры последовательность целых чисел, завершающуюся числом 0")
        n = int(input())
        plus = 0
        minus = 0
        if n > 0:
            plus += 1
        else:
            minus += 1
    print ("Положительных чисел: ", plus, " Отрицательных числе: ", minus)
    
def task14():
    while n != 0:
        print("Введите с клавиатуры последовательность целых чисел, завершающуюся числом 0")
        n = int(input())
        maxn = int
        count = 0
        if n > maxn:
            maxn = n
        if n == maxn:
            count += 1
    print("Количество чисел равных max: ", count)
        
def task15():
    sequence = []
    count = 0


    while True:
        num = int(input("Введите число (для завершения введите 0): "))
        if num == 0:
            break
        sequence.append(num)


    for i in range(1, len(sequence) - 1):
        if sequence[i] > sequence[i - 1] and sequence[i] > sequence[i + 1]:
            count += 1


    print("Количество строгих локальных максимумов в последовательности: ", count)
    
def task16():
    sequence = []
    while True:
        num = int(input("Введите число (для завершения введите 0): "))
        if num == 0:
            break
        sequence.append(num)

    max1 = max2 = sequence[0]
    distance = -1
    index1 = 0
    index2 = len(sequence) - 1


    for i in range(1, len(sequence) - 1):
        if sequence[i] > sequence[i - 1] and sequence[i] > sequence[i + 1]:
            if sequence[i] > max1:
                max2 = max1
                index2 = index1
                max1 = sequence[i]
                index1 = i
            elif sequence[i] > max2:
                max2 = sequence[i]
                index2 = i


        if index1 != 0 and index2 != len(sequence) - 1 or index2 != 0 and index1 != len(sequence) - 1:
            distance = abs(index1 - index2) - 1
           

    print(distance)
    
def task17():
     k = int(input("Введите число k > 10: "))
     
     for i in range(10, k):
         flip = 0
         num = i
         while num > 0:
             flip = flip * 10 + num % 10
             num = num // 10
         if flip == i:
             print(flip)
             
task17()
