def insert_star_between_chars(input_string):
    result = "*".join(input_string)
    return result

# Ввод исходной строки с клавиатуры
input_string = input("Введите строку: ")

result_string = insert_star_between_chars(input_string)
print(result_string)
