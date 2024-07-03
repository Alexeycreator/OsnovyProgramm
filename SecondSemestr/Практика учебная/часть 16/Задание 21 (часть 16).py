def fibonacci(n):
	if n <= 1: 
		return n
	else: 
		return fibonacci(n-1) + fibonacci(n-2)
n = int(input("Введите значение n: "))
print(f"n-е число Фибоначчи: {fibonacci(n)}")
