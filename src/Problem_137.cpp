/**
 * File Name:        Problem_137.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:44
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

using namespace std;

int main() {
    int m, n;
    while(scanf("%d%d", &n, &m) != EOF) {
        vector <int> v;
        for(int i = 0; i < n; ++ i) {
            int tmp;
            scanf("%d", &tmp);
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        int ans = m / v[0];
        printf("%d\n", ans);
    }
    return 0;
}