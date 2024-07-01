string = input("Введите строку: ")
result = ""
for i in range(len(string)):
    if i % 2 != 0:
        result += string[i]
print("Новая строка с символами, индексы которых не кратны 2:", result)
