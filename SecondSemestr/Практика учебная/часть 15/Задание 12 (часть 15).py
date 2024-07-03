with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = 0
    for line in file:
        numbers = list(map(int, line.split()))
        unique_numbers = set(numbers)
        if (unique_numbers==4) and (((sum(map(int, line.split())))-sum(map(int, unique_numbers.split())))**2 <= ((sum(map(int, unique_numbers.split()))))/4):
            count+=1
    print(count)
