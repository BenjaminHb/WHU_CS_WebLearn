/**
 * File Name:        Problem_185.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:30
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdlib.h>
#include<stdio.h>

#define maxVal 101

int a[maxVal][maxVal];

void countApple()
{
    int i,j;
    for(i=1;i<=maxVal;i++)
        a[0][i]=1,a[i][1]=1;

    for(i=1;i<maxVal;i++)
        for(j=2;j<=maxVal;j++)
            if(j<=i)
                a[i][j]=a[i][j-1]+a[i-j][j];
            else
                a[i][j]=a[i][i];
}

int main()
{
    int m,n;
    countApple();
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        printf("%d\n",a[m][n]);
    }
}