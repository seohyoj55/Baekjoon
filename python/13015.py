n = int(input())

for j in range(0, n):
    print('*', end='')
for k in range(2*n -3):
    print(' ', end='')
for j in range(0, n):
    print('*', end='')
print()

for i in range(0, n - 2):
    for j in range(0, i+1):
        print(' ', end='')
    print('*', end='')
    for k in range(0, n-2):
        print(' ', end='')
    print('*', end='')
    for j in range(0, (n-i)*2 - 5):
        print(' ', end='')
    print('*', end='')
    for k in range(0, n-2):
        print(' ', end='')
    print('*')

for i in range(0, n-1):
    print(' ', end='')
print('*', end='')
for i in range(0, n-2):
    print(' ', end='')
print('*', end='')
for i in range(0, n-2):
    print(' ', end='')
print('*')

for i in range(0, n - 2):
    for j in range(0, n-i-2):
        print(' ', end='')
    print('*', end='')
    for k in range(0, n-2):
        print(' ', end='')
    print('*', end='')
    for j in range(0, i*2+1):
        print(' ', end='')
    print('*', end='')
    for k in range(0, n-2):
        print(' ', end='')
    print('*')

for j in range(0, n):
    print('*', end='')
for k in range(2 * n - 3):
    print(' ', end='')
for j in range(0, n):
    print('*', end='')
print()