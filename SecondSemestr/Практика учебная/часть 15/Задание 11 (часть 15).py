with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = sum(
        1 for line in file.readlines() if any(
            len(set(map(int, line.split()))) == 3 and min(map(int, line.split())) ** 3 >= min(map(int, line.split())) * (sum(set(map(int, line.split()))) - max(map(int, line.split())) - min(map(int, line.split())))
        )
    )
print(count)
