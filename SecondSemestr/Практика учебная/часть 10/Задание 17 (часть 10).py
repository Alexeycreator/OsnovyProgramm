def battaries(n):
    pack = n // 4
    durasel1 = n % 4
    return durasel1, pack
n = int(input("Введите нужное количество батареек: "))
pack, durasel1 = battaries(n)
print(f"Необходимо купить {pack} упаковок и {durasel1} батареек поштучно")