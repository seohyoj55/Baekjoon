import calendar
a, b = input().split()
a = int(a)
b = int(b)

c = calendar.weekday(2007, a, b)

if c == 0:
    print('MON')
elif c == 1:
    print('TUE')
elif c == 2:
    print('WED')
elif c == 3:
    print('THU')
elif c == 4:
    print('FRI')
elif c == 5:
    print('SAT')
else:
    print('SUN')
