# Определение функции для подсчета троек
def count_special_triplets(file_path):
    count = 0
    with open(file_path, 'r') as file:
        for line in file:
            numbers = list(map(int, line.split()))
            max_num = max(numbers)
            if max_num ** 2 > 2 * sum(numbers) - 2 * max_num:
                count += 1
    return count
file_path = 'C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt'
special_triplets_count = count_special_triplets(file_path)
print(f'Количество специальных троек в файле: {special_triplets_count}')
