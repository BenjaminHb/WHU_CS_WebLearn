/**
 * File Name:        Problem_40.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:02
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
#include <map>
using namespace std;
template <class T> bool get_max(T& a, const T &b) {return b > a? a = b, 1: 0;}

int main() {
    int t;
    while(scanf("%d", &t) != EOF) {
        for(int T = 0; T < t; ++ T) {
            map <int, int> dict;
            int n, building_size[10010];
            scanf("%d", &n);
            for(int i = 0; i < n; ++ i) {
                scanf("%d", &building_size[i]);
                ++ dict[building_size[i]];
            }
            int ans = -1;
            for(int i = 0; i < n; ++ i)
                get_max(ans, dict[building_size[i]]);
            printf("%d\n", ans);
        }
    }
    return 0;
}
