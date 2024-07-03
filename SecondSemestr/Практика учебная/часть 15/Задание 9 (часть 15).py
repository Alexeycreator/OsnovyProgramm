with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = 0
    for line in file:
        numbers = list(map(int, line.split()))
        min_num = min(numbers)
        max_num = max(numbers)
        if 2 * ((3*(max_num * min_num)) ** 0.5) < (2 * (sum(numbers) - min_num - max_num)) ** (1/3):
            count += 1
    print(count)
