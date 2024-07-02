def print_in_frame(text):
    border = "+{}+".format("-" * (len(text) + 2))
    print(border)
    print("| {} |".format(text))
    print(border)
# Пример использования функции
input_text = input("Введите текст: ")
print_in_frame(input_text)
