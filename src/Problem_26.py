#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_26.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 06:27
# Version:          0.0.1.20190113
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#

if __name__ == '__main__':
    case_number = int(input())
    try:
        for case in range(case_number):
            number = int(input())
            max_val = 0
            total = [[0 for i in range(number + 2)] for j in range(number + 2)]
            dollar = [[0 for i in range(number + 2)] for j in range(number + 2)]

            for i in range(1, number + 1):
                input_int = list(map(lambda x: int(x), input().split(' ')))
                for j in range(1, number + 1):
                    dollar[i][j] = input_int[j - 1]
            for i in range(1, number + 1):
                for j in range(1, number + 1):
                    total[i][j] = max(max(total[i - 1][j - 1], total[i - 1][j]), total[i - 1][j + 1]) + dollar[i][j]
                    if total[i][j] > max_val:
                        max_val = total[i][j]

            print('Case ' + str(case + 1) + ':')
            print(max_val)
            print()
    except:
        import traceback
        traceback.print_exc()
