import sys
str1 = (input())
c = str1[0]
num = 0
flag = 0
str1 = str1.strip()
if len(str1) == 0:
    print('0')
    sys.exit()

while num < len(str1):
    c = str1[num]
    if c == ' ':
        flag += 1
    num += 1
print(flag+1)