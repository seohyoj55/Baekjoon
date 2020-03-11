a, b = input().split()
a = int(a)
b = int(b)
min = 1000 / b * a

num = int(input())

for i in range(0, num):
    a, b = input().split()
    a = int(a)
    b = int(b)
    if (1000 / b * a) < min:
        min = 1000 / b * a

print(min)
