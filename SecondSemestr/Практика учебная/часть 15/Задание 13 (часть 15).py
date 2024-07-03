import math
with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\table.txt', 'r') as file:
    count = 0
    for line in file:
        numbers = list(map(int, line.split()))
        unique_numbers = set(numbers)
        for num in unique_numbers:
            if numbers.count(num) == 3 and num * 3 <= math.prod([x for x in numbers if x != num]):
                count += 1
                break
print(count)
