N = int(input("Введите двузначиное число: "))
M = int(input("Введите трехзначное число: "))
pron=1
prom=1
while N>0:
    pron*=N%10
    N//=10
while M>0:
    prom*=M%10
    M//=10
print("Произведение первого числа:",pron)
print("Произведение второго числа:",prom)