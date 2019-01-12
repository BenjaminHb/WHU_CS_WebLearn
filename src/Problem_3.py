#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# File Name:        Problem_3.py
# Project Name:     WebLearn
# Author:           Benjamin Zhang
# Created Time:     2019-01-12 21:45
# Version:          0.0.1.20190112
# 
# Copyright (c) Benjamin Zhang 2019
# All rights reserved.
#


name = ["Adam", "Seth", "Enosh", "Kenan", "Mahalalel",
        "Jared", "Enoch", "Methuselah", "Lamech", "Noah",
        "Shem", "Ham", "Japheth" ]
age = [930, 912, 905, 910, 895, 962, 365, 969, 777, 0, 0, 0, 0]


def find_seniority(string):
    for i in range(0, len(age)):
        if name[i] == string:
            return 10 if i > 9 else i
    return -1


def is_ancestor(str1, str2):
    if find_seniority(str1) != -1 and find_seniority(str2) != -1:
        return 1 if find_seniority(str1) < find_seniority(str2) else 2
    else:
        return 0


def compare_age(str1, str2):
    index1 = find_seniority(str1)
    index2 = find_seniority(str2)
    if age[index1] != 0 and age[index2] != 0:
        return 1 if age[index1] > age[index2] else 2
    else:
        return 0


if __name__ == '__main__':
    while True:
        try:
            input_str = input()
            name1 = input_str.split(' ')[0]
            name2 = input_str.split(' ')[1]
            x = is_ancestor(name1, name2)
            if x == 0:
                print("No enough information")
            elif x == 1:
                print("Yes")
            elif x == 2:
                print("No")
            else:
                print("ERROR")
            x = compare_age(name1, name2)
            if x == 0:
                print("No enough information")
            elif x == 1:
                print("Yes")
            elif x == 2:
                print("No")
            else:
                print("ERROR")
        except:
            break
