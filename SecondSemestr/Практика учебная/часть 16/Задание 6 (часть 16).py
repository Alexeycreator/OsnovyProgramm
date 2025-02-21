def arithmetic(a, b, op):
	if op == '+':
		return a + b
	elif op == '-':
		return a - b
	elif op == '*':
		return a * b
	elif op == '/':
		if b == 0:
			return "Делить на ноль нельзя"
		return a / b
	else:
		return "Неизвестная операция"
