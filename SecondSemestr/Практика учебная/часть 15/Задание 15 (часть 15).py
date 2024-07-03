def process_table(file_name):
    with open(file_name, 'r') as file:   
        count_valid_rows = 0
        for line in file:
            numbers = list(map(int, line.split()))
            unique_numbers = set(numbers)
            if len(unique_numbers) == 5:
                for num in unique_numbers:
                 if numbers.count(num) == 3:
                        alpha = num
                 elif numbers.count(num) == 2:
                        beta = num
                if alpha * beta <= sum([abs(x) for x in unique_numbers if x != alpha and x != beta])**(1/5):
                    count_valid_rows += 1
        return count_valid_rows
file_name = 'C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt'
result = process_table(file_name)
print(f'Количество строк, удовлетворяющих условиям: {result}')
