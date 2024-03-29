/**
 * File Name:        Problem_100.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:56
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
#define out(v) cerr << #v << ": " << (v) << endl
#define SZ(v) ((int)(v).size())

int t;

int main() {
    while(scanf("%d", &t) != EOF) {
        string nickname_list[8] = {"littleken", "knuthocean", "dongfangxu", "zap", "kittig", "robertcui", "forest", "flirly"};
        for(int T = 0; T < t; ++ T) {
            int cnt_list[8] = {};
            string s;
            cin >> s;
            for(int i = 0; i < SZ(s); ++ i) {
                for(int j = 0; j < 8; ++ j) {
                    if(i + SZ(nickname_list[j]) > SZ(s))   continue;
                    bool flag = true;
                    for(int k = 0; k < 2; ++ k) {
                        if(s[i + k] != nickname_list[j][k]) {
                            flag = false;
                            break;
                        }
                    }
                    if(flag) {
                        ++ cnt_list[j];
                        i += SZ(nickname_list[j]) - 1;
                        break;
                    }
                }
            }
            int maxn = -1, maxrec = 0;
            for(int i = 0; i < 8; ++ i) {
                if(cnt_list[i] > maxn) {
                    maxn = cnt_list[i], maxrec = i;
                }
            }
            cout << nickname_list[maxrec] << endl;
        }
    }
    return 0;
}