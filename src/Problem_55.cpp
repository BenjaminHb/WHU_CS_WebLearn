/**
 * File Name:        Problem_55.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:00
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
#include <map>
using namespace std;

char s[100000];
string r_s;

int main() {
    while(cin >> r_s) {
        if(r_s == "ENDOFINPUT")
            return 0;
        getchar();
        gets(s);
        int len = strlen(s);
        for(int i = 0; i < len; ++ i) {
            if(isalpha(s[i])) {
                if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i] = 'A' + (s[i] - 'A' + 21) % 26;
            }
        }
        puts(s);
        cin >> r_s;
    }
    return 0;
}
