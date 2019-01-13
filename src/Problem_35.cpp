/**
 * File Name:        Problem_35.cpp
 * Project Name:     WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     2019-01-13 17:37
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
#define out(v) cerr << #v << ": " << (v) << endl
#define SZ(v) ((int)(v).size())
const int maxint = -1u>>1;
template <class T> bool get_max(T& a, const T &b) {return b > a? a = b, 1: 0;}
template <class T> bool get_min(T& a, const T &b) {return b < a? a = b, 1: 0;}

int main() {
    int n;
    while(scanf("%d", &n) != EOF && n != 0) {
        if(n % 2 == 0)
            printf("%d\n", n / 2);
        else
            printf("%d\n", n / 2 + 1);
    }
    return 0;
}