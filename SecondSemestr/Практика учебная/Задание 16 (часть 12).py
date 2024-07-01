def find_local_max_distance(sequence):
    max_distance = -1
    max_index = -1
    for i in range(1, len(sequence) - 1):
        if sequence[i] > sequence[i - 1] and sequence[i] > sequence[i + 1]:
            if max_index != -1:
                distance = i - max_index
                if max_distance == -1 or distance < max_distance:
                    max_distance = distance
            max_index = i

    return max_distance
# Ввод последовательности с клавиатуры
sequence = []
while True:
    num = int(input())
    if num == 0:
        break
    sequence.append(num)
result = find_local_max_distance(sequence)
print(result)
