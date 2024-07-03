def recursive_factorial(n):
	if n == 0 or n == 1: 
		return 1
	else: 
		return n * recursive_factorial(n-1)