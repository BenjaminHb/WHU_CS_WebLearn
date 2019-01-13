/**
 * File Name:        Problem_143.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:19
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

template <class T> bool get_max(T &a, const T b) {return a < b ? a = b, true : false;}

int main() {
    int p, m, n;
    while(scanf("%d%d%d", &p, &m, &n) != EOF) {
        if(p == 0 && m == 0 && n == 0)
            return 0;
        get_max(p, m * n);
        printf("%d\n", p);
    }
    return 0;
}