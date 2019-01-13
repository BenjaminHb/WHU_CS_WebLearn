/**
 * File Name:        Problem_29.cpp
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
#define SZ(v) ((int)(v).size())

string s;

int main() {
    while(cin >> s) {
        if(s == "$")    return 0;
        string ans = "";
        for(int i = 0; i < SZ(s); ++ i) {
            ans += 'A' + (((s[i] - 'A' - (i + 1)) % 26 + 26) % 26);
        }
        cout << ans << endl;
    }
    return 0;
}
