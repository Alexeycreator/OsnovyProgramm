count = 0
with open("C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\pythonfile.txt", "r") as file:
    for line in file:
        numbers = list(map(int, line.strip().split()))
        if len(numbers) == 4:
            max_num = max(numbers)
            min_num = min(numbers)
            other_nums_sum = sum(numbers) - max_num - min_num
            if abs(max_num - min_num)**3 <= other_nums_sum**2:
                count += 1
print("Количество строк, удовлетворяющих условию:", count)
file.close()
