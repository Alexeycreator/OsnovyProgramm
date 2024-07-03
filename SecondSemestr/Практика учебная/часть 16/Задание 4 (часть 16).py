def sum_without_loop():
	num = int(input("Введите число: "))
	return num and num + sum_without_loop()
