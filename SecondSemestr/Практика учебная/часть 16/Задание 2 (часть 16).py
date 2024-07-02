def is_quadratic(a, b, c):
    discriminant = b**2 - 4*a*c
    return discriminant > 0

n = int(input("Введите количество троек чисел: "))
count = 0

for i in range(n):
    a, b, c = map(int, input().split())
    if is_quadratic(a, b, c):
        count += 1

print("Количество троек чисел, являющихся коэффициентами квадратного уравнения с двумя действительными корнями:", count)
