#task1_tema13
def task1_tema13(str1, str2, str3):
    return "#".join([str1, str2, str3])


def task2_tema13(string):
    return "".join([string[i] for i in range(len(string)) if i % 2 != 0])
def task3_tema13(sentence):
    return len(sentence.split())
def task4_tema13(string, x):
    if string.count(x) == 1:
        return string.index(x)
    elif string.count(x) > 1:
        return (string.index(x), string.rindex(x))
    else:
        return "NO"
def task5_tema13(string):
    first = string.find('z')
    last = string.rfind('z')
    return string[:first] + string[last+1:]  
def task6_tema13(string):
    return "".join([string[i] for i in range(len(string)) if i % 3 != 0])  
def task7_tema13(string):
    first = string.find('а')
    last = string.rfind('а')
    return string[:first+1] + (string[first+1:last].replace('а', 'А')) + string[last:]
def task9_tema13(sentence):
    return sum(word.lower().startswith('б') for word in sentence.split())
def task10_tema13(string):
    if string.count('а') == 1:
        return string.index('а')
    elif string.count('а') > 1:
        return (string.index('а'), string.rindex('а'))
    else:
        return False
def task11_tema13(string):
    first = string.find('S')
    last = string.rfind('S')
    return string[:first] + string[first+1:last] + string[last+1:]
def task12_tema13(string):
    return "".join([string[i] for i in range(len(string)) if not (i % 2 == 0 and i % 3 != 0)])
def task13_tema13(string):
    return string.replace('а', 'G').replace('b', 'G')
def task14_tema13(string):
    mid = len(string) // 2
    if len(string) % 2 != 0:  # Если длина строки нечетная
        mid += 1
    return string[mid:] + string[:mid]
def task15_tema13(string):
    words=string.split()
    return ''.join(string[::-1])
def task16_tema13(string):
    return '*'.join(string)
def task17_tema13(string):
    return len(string.split())
def task18_tema13(input_string):
    vowels = 'aeiou'
    first_index = last_index = -1
    index = 0  # Внешний счетчик


    # Находим индексы первого и последнего вхождения гласной
    for char in input_string:
        if char in vowels:
            if first_index == -1:
                first_index = index
            last_index = index
        index += 1
       
    result = ''
    for char in input_string:
        if char in vowels :
            result += char.upper()
        else:
            result += char
        index += 1


    return result
def task19_tema13(string):
    return 'YES' if string == string[::-1] else 'NO'
def task20_tema13(string):
    balance = 0
    for char in string:
        if char == '(':
            balance += 1
        elif char == ')':
            balance -= 1
        if balance < 0:
            return False
    return balance == 0
def task21_tema13(string):
    num_names = {'1': 'один', '3': 'три', '5': 'пять', '7': 'семь', '9': 'девять'}
    return ''.join(num_names.get(c,c) for c in string)
# Пример использования:
#print(task1_tema13(input(), input(), input()))
#print(task2_tema13('произвольнаястрока'))
#print(task3_tema13("Карабли лавировали лавировали да так и не выловеравали"))
x = input("введите элемент который хотите найти: ")
print(f"Индекс буквы {x} =",task4_tema13('махмудик', x))
#print(task5_tema13('азбукаzпримерzтест'))
#print(task6_tema13('абвгдежзийклмнопрст'))
#print(task7_tema13('аанааанас'))
#print("Слов начинающихся на букву б или Б:",task9_tema13('Бабушка готовила пирожки с борщевиком'))
#print(task10_tema13('программа'))
#print(task11_tema13('SстрокаSSсSSбуквойS'))
#print(task12_tema13('абвгдежзийклмнопрст'))
#print(task13_tema13('абракадабра'))
#print(task14_tema13('абракадабра'))
#print(task15_tema13('абра кадабра'))
#print(task16_tema13('абракадабра'))
#print(task17_tema13('Это строка с словами'))
#print(task18_tema13('ASwqe eee saasd we'))
#print(task19_tema13('aтопот'))
#print(task20_tema13('(()())'))
#print(task21_tema13('123456789'))