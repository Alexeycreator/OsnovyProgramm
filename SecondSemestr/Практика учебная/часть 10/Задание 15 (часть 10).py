def decrypt_password(encrypted_password):
    step1 = encrypted_password + 8
    step2 = int(str(step1)[::-1])
    step3 = step2 - 7
    original_password = step3 // 2
    return original_password
encrypted_password = int(input("Введите зашифрованный пароль: "))
if(len(str(encrypted_password)) == 6):
    original_password = decrypt_password(encrypted_password)
    print(f"Исходный пароль: {original_password}")
else:
    print("Пароль должен состоять из 6 цифр")
