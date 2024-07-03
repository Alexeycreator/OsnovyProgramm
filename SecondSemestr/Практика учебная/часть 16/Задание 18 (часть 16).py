def base_conversion(number, base):
	if not 2 <= base <= 9: 
		return "Основание системы счисления должно быть от 2 до 9"
	result = ""
	while number > 0: 
		remainder = number % base 
		result = str(remainder) + result 
		number = number // base
	return result
