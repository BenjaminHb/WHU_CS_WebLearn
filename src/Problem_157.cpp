/**
 * File Name:        Problem_157.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:15
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <list>
#include <iomanip>
#define out(v) cout << #v << " " << v << endl
#define SZ(v) ((int)(v).size())
#define PI acos(-1.0)
using namespace std;
typedef long long lint;
const int inf = 1e9 + 7;

int main() {
    int cas = 1, n;
    int a[100100];
    while(scanf("%d", &n) != EOF) {
        if(n == -1)
            return 0;
        for(int i = 0; i < n; ++ i)
            scanf("%d", &a[i]);
        int ans = 0;
        bool flag = true;
        while(flag) {
            flag = false;
            for(int i = 1; i < n; ++ i) {
                if(a[i - 1] == 1 && a[i] == -1) {
                    a[i] = 1;
                    a[i - 1] = -1;
                    flag = true;
                    ++ ans;
                }
            }
        }
        printf("Case %d: %d\n", cas ++, ans);
    }
    return 0;
}