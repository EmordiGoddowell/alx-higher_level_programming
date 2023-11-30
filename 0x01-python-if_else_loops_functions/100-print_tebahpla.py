#!/usr/bin/python3
i = 122
while i > 96:
    if i % 2 == 0:
        print("{}".format(chr(i)), end="")
    else:
        print("{}".format(chr(i - 32)), end="")
    i -= 1
