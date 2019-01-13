/**
 * File Name:        Problem_372.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:13
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,j;
    scanf("%d",&n);
    
   while(n-->0)
    {
        int m,n,count=0;
        scanf("%d%d",&m,&n);
        for(j=m;j<8;j++)
        {
            switch(j)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:count+=31;break;
                case 2:count+=29;break;
                case 4: 
                case 6: count+=30;
            }
        }
        printf("%d\n",count-n+8);
    }
}
