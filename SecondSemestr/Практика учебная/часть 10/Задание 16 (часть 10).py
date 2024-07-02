def min_lessons_per_day(n):
    min_lessons = (n + 4) // 5  # Минимальное количество уроков в день
    max_days = n % 5  # Количество дней, в которых уроков больше всего
    if max_days == 0:
        max_days = 5
    return min_lessons, max_days
n = 23  # Замените на нужное количество уроков
min_lessons, max_days = min_lessons_per_day(n)
print(f"Минимальное количество уроков в день: {min_lessons}")
print(f"Количество дней, в которых уроков больше всего: {max_days}")
