/**
 * File Name:        Problem_115.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 18:47
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

using namespace std;
typedef long long lint;

int main() {
    string input_string;
    while(cin >> input_string) {
        lint m = 0, n = 0;
        for(int i = 1; i < int(input_string.size()); ++ i) {
            if(input_string[i] == 'C') {
                ++ i;
                for(; i < int(input_string.size()); ++ i) {
                    m *= 10;
                    m += input_string[i] - '0';
                }
                break;
            }
            n *= 10;
            n += input_string[i] - '0';
        }
        if(m == 0 && n == 0)
            return 0;
        string s = "";
        int tmp = 0;
        while(m > 0) {
            tmp = m % 26;
            if(tmp == 0)
                tmp = 26;
            m = (m - tmp) / 26;
            s = char('A' + tmp - 1) + s;
        }
        cout << s << n << endl;
    }
    return 0;
}