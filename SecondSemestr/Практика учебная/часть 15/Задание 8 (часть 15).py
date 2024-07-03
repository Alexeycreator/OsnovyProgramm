with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    lines = file.readlines()
count = 0
for line in lines:
    numbers = list(map(int, line.split()))
    max_num = max(numbers)
    min_num = min(numbers)
    if 3 * (max_num - min_num) > (sum(numbers)-max_num-min_num) ** 3:
        count += 1
print(count)
