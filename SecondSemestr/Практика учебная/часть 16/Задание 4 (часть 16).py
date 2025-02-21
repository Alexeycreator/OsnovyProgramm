def sum_sequence():
    number = int(input("Введите число (0 для завершения): "))
    if number == 0:
        return 0
    else:
        # Рекурсивный вызов для следующего числа и сумма с текущим числом
        return number + sum_sequence()
total_sum = sum_sequence()
print("Сумма всех чисел:", total_sum)