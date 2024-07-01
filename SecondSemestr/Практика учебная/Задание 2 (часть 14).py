numbers = list(map(int, input().split()))
repeated_numbers = []
for num in set(numbers):
    if numbers.count(num) > 1:
        repeated_numbers.append(num)
print("Числа, которые встречаются более одного раза:", repeated_numbers)
