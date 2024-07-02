date = int(input("Введите год: "))
if(date % 4 == 0 and date % 100 != 0 or date % 400 == 0):
    year = True
    days = 366
else:
    year = False
    days = 365
if year:
    print(f"{year} год - является високосным. В нем {days} дней")
else:
    print(f"{year} год - не является високосным. В нем {days} дней")
