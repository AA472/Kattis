import sys

n = input()
for x in range(n):
    r, e, c = map(int, raw_input().split())

    if e-c > r:
        print "advertise"
    elif e-c < r:
        print "do not advertise"
    elif e-c is r:
        print "does not matter"

