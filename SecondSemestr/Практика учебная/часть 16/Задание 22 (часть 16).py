def arithmetic_progression_sum(a1, d, n):
	return n * (2 * a1 + (n - 1) * d) // 2
 
a1 = int(input("Введите значение a1: "))
d = int(input("Введите значение d: "))
n = int(input("Введите значение n: "))
print(f"Сумма первых {n} членов арифметической прогрессии: {arithmetic_progression_sum(a1, d, n)}")