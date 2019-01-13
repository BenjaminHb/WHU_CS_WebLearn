/**
 * File Name:        Problem_315.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:16
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdio.h>
#include<stdlib.h>

int main()
{    
    long a,b,c;
    while(scanf("%ld%ld%ld",&a,&b,&c)) {
        if(a==0)
        break;
        long k = 1;

        while(b>=1) {
            if(b%2 == 1)
            k = a*k%c;
            a = a*a%c;
            b=b/2;
        }

        printf("%ld\n",k);
    }
    return 0;
}