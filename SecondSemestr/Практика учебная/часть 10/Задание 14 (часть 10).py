def number_of_desks(num_students):
    # Целочисленное деление с округлением вверх
    return (num_students + 1) // 2
# Ввод количества учеников для трех классов
students_in_class1 = int(input("Введите количество учеников в первом классе: "))
students_in_class2 = int(input("Введите количество учеников во втором классе: "))
students_in_class3 = int(input("Введите количество учеников в третьем классе: "))
# Вычисление общего количества парт
total_desks = (number_of_desks(students_in_class1) +
               number_of_desks(students_in_class2) +
               number_of_desks(students_in_class3))
print(f"Всего нужно закупить парт: {total_desks}")