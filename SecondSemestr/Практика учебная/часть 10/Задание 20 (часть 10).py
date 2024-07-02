count = int(input("Введите количество конфет (в кг): "))
price = int(input(f"введите цену за {str(count)} конфет: "))
count2 = int(input("Введите второе количество конфет (в кг): "))
res = price / count
totalPrice = res * count2
print(f"Стоимость одного килограмма конфет: {str(res)} руб.")
print(f"Стоимость {str(count2)} кг конфет: {str(totalPrice)} руб.")