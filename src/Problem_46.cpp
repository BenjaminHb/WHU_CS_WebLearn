/**
 * File Name:        Problem_46.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:00
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
            int n, arr[4000], cnt = 0;
            scanf("%d", &n);
            for(int i = 0; i < n; ++ i)
                scanf("%d", &arr[i]);
            for(int i = 0; i < n - 1; ++ i) {
                for(int j = 0; j < n - i - 1; ++ j) {
                    if(arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                        ++ cnt;
                    }
                }
            }
            printf("%d\n", cnt);
        }
    }
    return 0;
}
