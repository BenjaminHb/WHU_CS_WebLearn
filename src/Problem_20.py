#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_20.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 05:35
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
            seq = []
            temp1 = temp2 = 0
            input_number = list(map(lambda x: int(x), input().split(' ')))
            for i in range(number):
                temp1 = input_number[i]
                seq.append(temp1 - temp2)
                temp2 = temp1
            seq.sort()
            print('Case ' + str(case + 1) + ':')
            for i in range(number):
                print(str(seq[i]), end='')
                if i < number - 1:
                    print(' ', end='')
            print('\n')
    except:
        import traceback
        traceback.print_exc()

