/**
 * File Name:        Problem_58.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:30
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include <stdio.h>

int main()
{
    long a,tmp,n,sum;
    while (scanf("%ld",&n)==1 & n!=0)
    {
        sum=0;
        for(a=n/3;a>=0;a--)
        {
            tmp=(n- a * 3)/ 2 + 1;
            sum = sum + tmp;
        }
        printf("%ld\n",sum);
    }
    return 0;
}