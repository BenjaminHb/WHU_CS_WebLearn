/**
 * File Name:        Problem_300.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:18
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n-->0) {
        int no=0;
        scanf("%d",&no);
        no=no%7;
        if(no<=1)   printf("Dzs\n");
        else    printf("Sproblvem\n");
    }
    return 0;
}