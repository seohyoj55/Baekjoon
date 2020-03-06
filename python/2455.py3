a, b = input().split()
a = int(a)
b = int(b)
current = b
max = b

a, b = input().split()
a = int(a)
b = int(b)
current = current - a + b
if current > max:
    max = current

a, b = input().split()
a = int(a)
b = int(b)
current = current - a + b
if current > max:
    max = current

a, b = input().split()
a = int(a)
b = int(b)
current = current - a

print(max)
