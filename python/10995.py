n = int(input())
for i in range(0, n):
    if i%2==1:
        print(' ', end='')
    for j in range(0, n):
        print('* ', end='')
    print()
