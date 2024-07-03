def check_conditions(numbers):
    sorted_numbers = sorted(numbers)
    if sorted_numbers[3] < sum(sorted_numbers[:3]) and len(set(sorted_numbers)) == 3:
        return True
    return False
def analyze_table(file_path):
    count = 0
    with open(file_path, 'r') as file:
        for line in file:
            numbers = list(map(int, line.strip().split()))
            if check_conditions(numbers):
                count += 1
    return count
file_path = 'C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt'
result = analyze_table(file_path)
print(f'Количество строк, удовлетворяющих условиям: {result}')
