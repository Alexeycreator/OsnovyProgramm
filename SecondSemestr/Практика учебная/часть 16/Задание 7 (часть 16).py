def is_year_leap(year):
  """
  Проверяет, является ли год високосным.
 
  Args:
	year: Год, который нужно проверить.
 
  Returns:
	True, если год високосный, False - иначе.
  """
 
  if year % 4 != 0:
    return False
  elif year % 100 == 0:
    return year % 400 == 0
  else:
    return True
 
# Пример использования
year = 2024
if is_year_leap(year):
  print(f"{year} - високосный год")
else:
  print(f"{year} - не високосный год")
