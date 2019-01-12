#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# File Name:        Problem_16.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 05:00
# Version:          0.0.1.20190113
#
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


if __name__ == '__main__':
    while True:
        try:
            number = int(input())
            xy = [[0 for i in range(number)] for i in range(2)]
            flag = [0 for i in range(number)]
            sum_y = 0
            status = True
            for i in range(number):
                input_int = list(map(lambda x: int(x), input().split(' ')))
                xy[0][i] = input_int[0]
                xy[1][i] = input_int[1]
                sum_y += input_int[1]
            sum_y *= 2
            mean_y = sum_y / number
            if sum_y % number != 0:
                status = False
            else:
                for i in range(number):
                    if flag[i] == 0 and xy[1][i] * 2 != mean_y:
                        for j in range(i + 1, number):
                            if xy[0][j] == xy[0][i] and xy[1][i] + xy[1][j] == mean_y:
                                flag[i] = flag[j] = 1
                                break
                            if j == number:
                                status = False
            if status:
                print('YES')
            else:
                print('NO')
        except:
            break
