/**
 * File Name:        Problem_64.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:59
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

int n;

int main() {
    while(scanf("%d", &n) != EOF) {
        int mark[1100] = {};
        for(int i = 0; i < n; ++ i) {
            int tmp;
            scanf("%d", &tmp);
            mark[tmp] = 1;
        }
        bool flag = false;
        for(int i = 0; i < 1000; ++ i) {
            if(mark[i]) {
                if(flag)    printf(" ");
                else        flag = true;
                printf("%d", i);
            }
        }
        puts("");
    }
    return 0;
}