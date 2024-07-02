n = int(input("Введите натуральное число n: "))
d = int(input("Введите натуральное число d: "))
result = []
for num in range(1, n):
    if sum(int(digit) for digit in str(num)) ** 2 == d:
        result.append(num)
print(f"Натуральные числа меньше {n}, у которых квадрат суммы цифр равен {d}: {result}")
