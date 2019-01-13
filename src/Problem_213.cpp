/**
 * File Name:        Problem_213.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:26
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdlib.h>
#include<stdio.h>
 
int crossProduct(int x1,int y1,int x2,int y2) {
    return x1*y2-x2*y1;
}

int main()
{
    int n=0,i=0;

    int x[101],y[101];
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d %d",&x[i],&y[i]);
        getchar();
    }

    int area=0;
    for(i=0;i<n;i++) {
        area+=crossProduct(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
    }
    printf("%d\n",area/2);
    return 0;
}