a = int(input("Введите цену одного пирожка в рублях: "))
b = int(input("Введите цену одного пирожка в копейках: "))
n = int(input("Введите количество пирожков: "))
total_price = (a * 100 + b) * n // 100, (a * 100 + b) * n % 100
print(f"Стоимость покупки: {str(total_price[0])} руб. {str(total_price[1])} коп.")
