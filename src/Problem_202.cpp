/**
 * File Name:        Problem_202.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:35
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0, no;
    scanf("%d",&no);

    int a[2*no+1];

    for (i=0;i<2*no+1;i++)
        scanf("%d",&a[i]);

    int r = a[0];

    for (i=1;i<2*no+1;i++)
        r ^= a[i];

    printf("%d\n",r);
    return 0;
}