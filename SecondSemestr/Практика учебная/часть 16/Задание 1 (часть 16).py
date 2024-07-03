def is_cube_of_min_divisor_greater(n):
	if n < 2:
		return False
	for i in range(2, int(n**0.5) + 1):
		if n % i == 0:
			return i**3 > n
	return False
# Пример использования функции
number = int(input("Введите натуральное число: "))
result = is_cube_of_min_divisor_greater(number)
print(result)
