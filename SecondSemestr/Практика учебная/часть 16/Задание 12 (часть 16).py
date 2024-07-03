def date(day, month, year):
	from calendar import isleap
	if month < 1 or month > 12: 
		return False
	if day < 1 or day > 31: 
		return False
	if month in [4, 6, 9, 11] and day > 30: 
		return False
	if month == 2: 
		if isleap(year): 
			if day > 29: 
				return False 
		else: 
			if day > 28: 
				return False
	return True