/**
 * File Name:        Problem_80.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:57
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

int t;

int main() {
    while(scanf("%d", &t) != EOF) {
        for(int T = 0; T < t; ++ T) {
            int n;
            scanf("%d", &n);
            if(n % 14 != 0)
                puts("flymouse wins the game!");
            else
                puts("snoopy wins the game!");
        }
    }
    return 0;
}
