def F(n):
	if n < 2:
		return n
	elif n % 3 == 0:
		return n + F(n // 3)
	else:
		return n + F(n - 3)
