pol = 0
otr = 0
while True:
    number = int(input("ВВедите число: "))
    if number == 0:
        break
    elif number > 0:
        pol += 1
    else:
        otr += 1
print(f"Положительных чисел: {pol}, отрицательных чисел: {otr}")