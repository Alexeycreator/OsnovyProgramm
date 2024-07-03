def calculate_rows(file_path):
    with open(file_path, 'r') as file:
        rows = file.readlines()    
    count = 0
    for row in rows:
        numbers = list(map(int, row.split()))
        min_num = min(numbers)
        max_num = max(numbers)
        product = min_num * max_num
        remaining_nums = [num for num in numbers if num != min_num and num != max_num]
        if (max_num * min_num) ** 0.5 > (remaining_nums[0] * remaining_nums[1] * remaining_nums[2]) ** (1/3):
            count += 1
    return count
file_path = 'C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt'
result = calculate_rows(file_path)
print(f'Количество строк, удовлетворяющих условию: {result}')
