#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_13.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 02:25
# Version:          0.0.1.20190113
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


if __name__ == '__main__':
    while True:
        try:
            input_str = input()
            if not input_str:
                break
            temp = input_str
            for i in range(len(input_str)):
                temp = temp[1:] + temp[0]
                if temp < input_str:
                    input_str = temp
            print(input_str)
        except:
            break
