def count_valid_rows(filename):
    count = 0
    with open(filename, 'r') as file:
        for line in file:
            numbers = list(map(int, line.strip().split()))
            if len(set(numbers)) == 5:
                repeated_num = [num for num in numbers if numbers.count(num) == 3]
                non_repeated_nums = [num for num in numbers if numbers.count(num) == 1]
                if 3 * sum(repeated_num) <= non_repeated_nums[0] * non_repeated_nums[1] * non_repeated_nums[2]:
                    count += 1
    return count
filename = "table.txt"
result = count_valid_rows(filename)
print(f"Количество строк, удовлетворяющих условиям: {result}")