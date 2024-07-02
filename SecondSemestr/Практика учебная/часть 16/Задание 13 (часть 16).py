def XOR_cipher(text, key):
    ciphered_text = ""
    for char in text:
        ciphered_text += chr(ord(char) ^ key)
    return ciphered_text
def XOR_uncipher(ciphered_text, key):
    return XOR_cipher(ciphered_text, key)  # Функция XOR является своим обратным действием
# Пример использования
text = "Привет, мир!"
key = 42
ciphered_text = XOR_cipher(text, key)
print("Зашифрованный текст:", ciphered_text)
unciphered_text = XOR_uncipher(ciphered_text, key)
print("Расшифрованный текст:", unciphered_text)