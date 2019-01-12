#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_10.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-08 17:25
# Version:          0.0.1.20190108
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


if __name__ == '__main__':
    output = []
    while True:
        input_num = int(input())
        if input_num == 0:
            break
        input_nums = input().split(' ')
        input_nums = list(map(lambda x: int(x), input_nums))
        num = max(input_nums)

        result = num % 2006
        if result < 0:
            result = 0 - result
        for i in range(1, input_num):
            result = (result * 2) % 2006
        output.append(result)

    for i in output:
        print(i)
