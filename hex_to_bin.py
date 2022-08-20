from sys import stdin
import math


while True:
    r = stdin.readline()
    if len(r) <= 0:
        break

    u = [i for i in r.split("\n")[0].split(" ") if i != ' ']

    for k in u:
        if len(k) > 0:
            he = int('0x'+k, 16)
            t = f'{he:08b}'
            print(t[0:4], end=' ')
            print(t[4:8], end=' ')

    print('')
