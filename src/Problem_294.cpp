/**
 * File Name:        Problem_294.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:05
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
const double eps = 1e-8;
inline int sgn(const double x) {return (x > eps) - (x < -eps);}
template <class T> T _abs(T x) {if(x < 0) x = -x; return x;}
template <class T> bool get_max(T &a, const T b) {return a < b ? a = b, true : false;}
template <class T> bool get_min(T &a, const T b) {return a > b ? a = b, true : false;}
template <class T> void _swap(T &a, T &b) {T t = a; a = b; b = t;}

int main() {
    int t;
    while(scanf("%d", &t) != EOF) {
        for(int T = 0; T < t; ++ T) {
            int n;
            scanf("%d", &n);
            int tmp1 = 1, tmp2 = 0, tmp3 = 0;
            for(int i = 1; i < n * 2; ++ i) {
                tmp1 += tmp3;
                tmp3 = tmp2;
                tmp2 = tmp1 * 2;
            }
            cout << tmp1 + tmp2 + tmp3 << endl;
        }
    }
    return 0;
}