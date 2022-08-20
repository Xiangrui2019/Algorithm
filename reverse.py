from sys import stdin

while True:
    r = stdin.readline()
    if len(r) <= 0: break
    s = r.split("\n")[0].split(" ")
    t = []
    
    ii = 0
    while ii < len(s) - 1:
        t.append(s[ii] + ' ' + s[ii + 1])
        ii = ii + 2

    low = 0
    hi = len(t) - 1
    while (low != hi) and (low < hi):
        h = t[hi]
        t[hi] = t[low]
        t[low] = h

        low = low + 1
        hi = hi - 1

    s = ' '
    for k in t:
        s = s + k + ' '
    print(s)

