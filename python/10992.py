n = int(input())
for i in range(0, n-1):
    for j in range(0, n-i-1):
        print(' ', end='')
    print('*', end='')
    if i == 0:
        print()
        continue
    for l in range(0, 2*i-1):
        print(' ', end='')
    print('*')
for i in range(1, n*2):
    print('*', end='')