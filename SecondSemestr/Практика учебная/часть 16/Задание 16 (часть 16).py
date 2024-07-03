def is_perfect_square(num):
    if num < 0:
        return False
    sqrt_num = int(num ** 0.5)
    return sqrt_num * sqrt_num == num
number = int(input("Введите число: "))
result = is_perfect_square(number)
print(result)
