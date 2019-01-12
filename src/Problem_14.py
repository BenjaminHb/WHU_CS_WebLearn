#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_14.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 03:44
# Version:          0.0.1.20190113
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


if __name__ == '__main__':
    while True:
        try:
            A = []
            for i in range(3):
                A.append(list(map(lambda x: int(x), input().split(' '))))
            v = A[0][0] * A[1][1] * A[2][2] + \
                A[0][1] * A[1][2] * A[2][0] + \
                A[0][2] * A[1][0] * A[2][1] - \
                A[0][0] * A[1][2] * A[2][1] - \
                A[0][1] * A[1][0] * A[2][2] - \
                A[0][2] * A[1][1] * A[2][0]
            print('%.2f' % abs(v))
            input()
        except:
            break
