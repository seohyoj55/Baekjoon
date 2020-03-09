x, y, w, h = input().split()
x = int(x)
y = int(y)
w = int(w)
h = int(h)

min = 1000
if (w-x) < min:
    min = w-x
if (h-y) < min:
    min = h-y
if x < min:
    min = x
if y < min:
    min = y
print(min)