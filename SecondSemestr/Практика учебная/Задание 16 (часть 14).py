def sort_by_abs_desc(input_list):
    sorted_list = sorted(input_list, key=lambda x: abs(x), reverse=True)
    return sorted_list

# Пример использования функции с вводом списка чисел с клавиатуры
input_list = list(map(int, input("Введите список целых чисел через пробел: ").split()))
result_list = sort_by_abs_desc(input_list)
print(result_list)
