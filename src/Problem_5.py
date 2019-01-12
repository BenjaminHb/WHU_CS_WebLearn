#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_5.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-13 01:08
# Version:          0.0.1.20190113
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


def knack_pack(pack_size, size, value):
    v = [[0 for i in range(pack_size + 1)] for j in range(len(size) + 1)]
    for i in range(1, len(size) + 1):
        for j in range(1, pack_size + 1):
            v[i][j] = v[i - 1][j]
            if size[i - 1] <= j:
                v[i][j] = max(v[i][j], v[i - 1][j - size[i - 1]] + value[i - 1])
    return v[len(size)][pack_size]


if __name__ == '__main__':
    while True:
        try:
            animal_kinds = int(input())
            animal_volume = []
            animal_points = []
            for i in range(animal_kinds):
                input_str = input()
                animal_volume.append(int(input_str.split(' ')[0]))
                animal_points.append(int(input_str.split(' ')[1]))
            ark_size = int(input())
            print(knack_pack(ark_size, animal_volume, animal_points))
        except:
            break
