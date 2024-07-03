with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = 0
    total = 0
# Проверяем каждую строку таблицы
    for line in file:
        coordinates = list(map(int, line.strip().split()))
        # Проверяем, лежат ли точки в одной четверти
        if (coordinates[0] > 0 and coordinates[3] > 0) or (coordinates[0] < 0 and coordinates[3] < 0):
            count += 1
            if (coordinates[1] > 0 and coordinates[4] > 0) or (coordinates[1] < 0 and coordinates[4] < 0):
                count += 1
                if (coordinates[2] > 0 and coordinates[5] > 0) or (coordinates[2] < 0 and coordinates[5] < 0):
                    count += 1
        if (count>=2):
            total+=1                      
print(f'Количество строк с точками в одной четверти: {total}')
