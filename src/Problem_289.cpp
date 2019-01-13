/**
 * File Name:        Problem_289.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:11
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

using namespace std;
typedef long long lint;
const int inf = 1e9 + 7;
const double eps = 1e-8;
inline int sgn(const double x) {return (x > eps) - (x < -eps);}

int main() {
    string s1, s2;
    while(cin >> s1) {
        if(s1 == "#")
            break;
        cin >> s2;
        int cnt = 0;
        for(int i = 0; i < SZ(s1); ++ i) {
            if(s1[i] == 'A' && s2[i] == 'T')
                ++ cnt;
            if(s2[i] == 'A' && s1[i] == 'T')
                ++ cnt;
            if(s1[i] == 'G' && s2[i] == 'C')
                ++ cnt;
            if(s2[i] == 'G' && s1[i] == 'C')
                ++ cnt;
        }
        cnt = SZ(s1) - cnt;
        cout << cnt << endl;
    }
    return 0;
}