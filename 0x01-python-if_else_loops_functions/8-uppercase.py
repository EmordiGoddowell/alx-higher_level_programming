#!/usr/bin/python3
def uppercase(str):
    str2 = ""
    for c in str:
        if ord(c) > 96 and ord(c) < 123:
            c = chr(ord(c) - 32)
        str2 += c
    print("{}".format(str2))
