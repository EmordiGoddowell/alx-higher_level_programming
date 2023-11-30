#!/usr/bin/python3
def remove_char_at(str, n):
    str1 = ""
    for c in range(len(str)):
        if c != n:
            str1 += str[c]
    return str1
