#!/usr/bin/python3
num = 97
while num < 123:
    if num == 113 or num == 101:
        num += 1
        continue
    print("{}".format(chr(num)), end="")
    num += 1
