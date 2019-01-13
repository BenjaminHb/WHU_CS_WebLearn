/**
 * File Name:        Problem_45.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:01
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

int main() {
    int t;
    while(scanf("%d\n", &t) != EOF) {
        for(int T = 0; T < t; ++ T) {
            char s[100000];
            gets(s);
            if(s[0] >= 'a' && s[0] <= 'z')
                s[0] = s[0] - 'a' + 'A';
            int len = strlen(s);
            for(int i = 1; i < len; ++ i)
                if(s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ')
                    s[i] = s[i] - 'A' + 'a';
            puts(s);
        }
    }
    return 0;
}
