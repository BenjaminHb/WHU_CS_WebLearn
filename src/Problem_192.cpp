/**
 * File Name:        Problem_192.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:32
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdlib.h>
#include<stdio.h>

int grey2bin(int n) {
    int count=0;
    while(n>0){
        if(n%2==1)  count++;
        n=n/2;
    }
    if(count%2==0)  return 0;
    else    return 1;
}

int main()
{
    int n;
    int a[40][40];

    while(scanf("%d",&n)!=EOF)
    {
        int i=0,j=0,r=0;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<n;i++) {
            printf("%d",grey2bin(a[i][0]));

            for(j=1;j<n;j++) {
                printf(" %d",grey2bin(a[i][j]));
            }

            printf("\n");
        }
    }
    return 0;
}