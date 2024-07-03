with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    lines = file.readlines()
count = 0
for line in lines:
    numbers = list(map(int, line.split()))
    if len(numbers) == 5:
        if max(numbers) * min(numbers) < sum(numbers) - max(numbers) - min(numbers) and len(set(numbers)) == 4:
            count += 1
print(count)
