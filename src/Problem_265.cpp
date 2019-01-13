/**
 * File Name:        Problem_265.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:12
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

using namespace std;
typedef long long lint;
const int inf = 1e9 + 7;
const double eps = 1e-8;

int main() {
    vector <lint> v;
    map <lint, int> dict;
    v.push_back(0);
    dict[0] = 1;
    for(int i = 1; i < 500010; ++ i) {
        int tmp = v[i - 1] - i;
        if(tmp < 0 || dict[tmp] == 1)
            tmp = v[i - 1] + i;
        dict[tmp] = 1;
        v.push_back(tmp);
    }
    int n;
    while(scanf("%d", &n) != EOF) {
        if(n == -1)
            return 0;
        else
            cout << v[n] << endl;
    }
    return 0;
}