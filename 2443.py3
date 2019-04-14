n = int(input())
for i in range(0, n+1):
    for j in range(0, i):
        print(" ",end='')
    for k in range (0, (n-i)*2-1):
        print('*',end='')
    print()
