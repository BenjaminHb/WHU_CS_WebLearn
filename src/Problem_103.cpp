/**
 * File Name:        Problem_103.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:55
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

int main() {
    int t;
    while(scanf("%d", &t) != EOF) {
        for(int T = 0; T < t; ++ T) {
            int n;
            scanf("%d%%\n", &n);
            double p = n / 100.0;
            double ans = p * p / (1 + 2 * p * p - 2 * p);
            printf("%.2lf%%\n", ans * 100.0);
        }
    }
    return 0;
}
