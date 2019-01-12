#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_7.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 02:04
# Version:          0.0.1.20190113
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


if __name__ == '__main__':
    while True:
        try:
            animal_no = int(input())
            feed_time = []
            total_time = 0
            for i in range(8):
                feed_time.append(list(map(lambda x: int(x), input().split(' '))))

            for i in range(animal_no):
                for j in range(7):
                    if feed_time[j][i] < feed_time[j + 1][i]:
                        temp = feed_time[j][i]
                        feed_time[j][i] = feed_time[j + 1][i]
                        feed_time[j + 1][i] = temp
                total_time += feed_time[7][i]

            print(total_time)
        except:
            break
