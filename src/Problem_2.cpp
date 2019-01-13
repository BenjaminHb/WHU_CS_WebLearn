/**
 * File Name:        Problem_2.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:08
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
    string stmp, head;
    int cnt = 0;
    bool flag = false;
    while(cin >> stmp) {
        if(stmp[0] >= '0' && stmp[0] <= '9') {
            if(flag)
                cout << head << " " << cnt << endl;
            else
                flag = true;
            head = stmp;
            cnt = 0;
        }
        else {
            bool isword = false;
            for(int i = 0; i < int(stmp.length()); ++ i) {
                if(isalpha(stmp[i])) {
                    isword = true;
                    break;
                }
            }
            if(isword)
                ++ cnt;
        }
    }
    cout << head << " " << cnt << endl;
    return 0;
}
