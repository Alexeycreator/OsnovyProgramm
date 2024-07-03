def min(a, b):
	return a if a < b else b
 
def min4(a, b, c, d):
	return min(min(min(a, b), c), d)
