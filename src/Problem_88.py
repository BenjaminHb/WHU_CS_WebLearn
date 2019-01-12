#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_88.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-12 20:21
# Version:          0.0.1.20190112
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


def P(a, n):
    out = 1
    f = a
    while n != 0:
        if n % 2 == 1:
            out *= f
        n >>= 1
        f *= f

    return out


def DP(n, m):
    if n == 1:
        return 1
    else:
        return DP(n - 1, m) + P(n, m)


def calc(n, k):
    return (n + 0.5) ** (k + 1) / (k + 1)


def format_number(number):
    string = format(number, '.2E')
    string=string.split('+')
    part_a = string[0]
    part_b = int(string[1])
    return str(part_a + str(part_b))


if __name__ == '__main__':
    while True:
        try:
            input_str = input()
            input_str = input_str.split(' ')
            n = int(input_str[0])
            m = int(input_str[1])
            if n > 1000:
                print(format_number(calc(n, m)))
            else:
                print(format_number(DP(n, m)))
        except:
            break
