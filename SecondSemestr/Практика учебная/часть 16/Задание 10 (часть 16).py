def bank(a, years):
	for _ in range(years): 
		a += a * 0.10
	return a