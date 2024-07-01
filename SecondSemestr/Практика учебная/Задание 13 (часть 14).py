array = [3, 5, 7, 8, 12, 9, 10, 11]
index = 0
for i in range(len(array)):
    if array[i] % 2 == 0 and i % 2 != 0:
        index = i
        break
if index != 0:
    del array[index]
print(array)