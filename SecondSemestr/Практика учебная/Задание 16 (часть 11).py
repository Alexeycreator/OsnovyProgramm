def queen_can_capture(a, b, c, d):
    if a == c or b == d or abs(a - c) == abs(b - d):
        return "YES"
    else:
        return "NO"
# Ввод координат
a, b, c, d = map(int, input().split())
result = queen_can_capture(a, b, c, d)
print(result)
