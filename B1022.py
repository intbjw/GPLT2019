# -*- coding: utf-8 -*-
# 输入三个数
a, b, d = map(int,input().split())
sum = a + b
c = ''
while sum != 0:
    temp = sum % d
    c = c + str(temp)
    sum = sum // d
if c == '':
    print('0')
else:
    print(c[::-1])
