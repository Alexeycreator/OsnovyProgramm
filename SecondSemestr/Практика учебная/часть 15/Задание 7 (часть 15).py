with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = 0
    # Читаем каждую строку из файла
    for line in file:
        numbers = list(map(int, line.split()))
        min_num = min(numbers)
        if min_num ** 5 < 3 * (sum(numbers) - min_num):
            count += 1
print(count)
