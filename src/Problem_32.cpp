/**
 * File Name:        Problem_32.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:04
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

template <class T> bool get_max(T& a, const T &b) {return b > a? a = b, 1: 0;}

int m, n;
int rec1[11][3010], rec2[11][3010];

int main() {
    while(scanf("%d%d", &m, &n) != EOF) {
        for(int i = 0; i < m; ++ i)
            for(int j = 0; j < n; ++ j) {
                scanf("%d", &rec1[i][j]);
            }
        int maxm = 1 << m, ans = 0;
        for(int i = 0; i < maxm; ++ i) {
            for(int j = 0; j < m; ++ j)
                for(int k = 0; k < n; ++ k)
                    rec2[j][k] = rec1[j][k];
            int tmp = i;
            for(int j = 0; j < m; ++ j) {
                if((tmp & 1) == 1)
                    for(int k = 0; k < n; ++ k)
                        rec2[j][k] ^= 1;
                tmp >>= 1;
            }
            tmp = 0;
            for(int j = 0; j < n; ++ j) {
                int ttmp = 0;
                for(int k = 0; k < m; ++ k)
                    ttmp += rec2[k][j];
                if(ttmp < m - ttmp)
                    ttmp = m - ttmp;
                tmp += ttmp;
            }
            get_max(ans, tmp);
        }
        printf("%d\n", ans);
    }
    return 0;
}