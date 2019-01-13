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

            print('Case ' + str(case + 1) + ':')
            for i in range(number):
                print(str(seq[i]), end='')
                if i < number - 1:
                    print(' ', end='')
            print('\n')
    except:
        import traceback
        traceback.print_exc()
