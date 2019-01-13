/**
 * File Name:        Problem_154.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:17
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

int main() {
    string s;
    int cas = 1;
    while(cin >> s) {
        if(s == "#")
            return 0;
        for(int i = 0; i < SZ(s); ++ i) {
            if(i % 2 == 1 && s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        }
        cout << "Case " << cas ++ << ": "  << s << endl;
    }
    return 0;
}