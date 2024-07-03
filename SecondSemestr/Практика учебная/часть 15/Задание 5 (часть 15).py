def analyze_table(file_path):
    count_valid_rows = 0
    with open(file_path, 'r') as file:
        for line in file:
            numbers = list(map(int, line.strip().split()))
            unique_numbers = set(numbers)
            for num in unique_numbers:
                if numbers.count(num) == 2 and sum(unique_numbers) / len(unique_numbers) <= 2 * num:
                    count_valid_rows += 1
                    break
    return count_valid_rows
file_path = 'C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt'
valid_rows_count = analyze_table(file_path)
print(f'Количество строк, удовлетворяющих условиям: {valid_rows_count}')
