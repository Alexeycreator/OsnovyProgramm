print('Выберите напиток:\n 1 - Эспрессо\n 2 - Капучино\n 3 - Латте')
variant = int(input())
cash = int(input('Введите денежную сумму: '))
if variant == 1:
    sdacha = cash - 100
elif variant == 2:
    sdacha = cash - 150
elif variant == 3:
    sdacha = cash - 200
else: 
    print('Введите правильный номер')
if sdacha >= 0:
    print('Ваша сдача:', sdacha)
elif sdacha < 0:
    print('Добавьте еще', -sdacha)
