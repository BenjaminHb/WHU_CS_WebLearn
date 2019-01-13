/**
 * File Name:        Problem_203.cpp
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
    int no;
    while(scanf("%d",&no)==1)
    {
        int num=0,loop=0,tmp;
        while(no-->0)
        {
            scanf("%d",&tmp);
            if(loop==0)
            {
                loop++;
                num=tmp;
            }
            else
            {
                if(tmp==num) loop++;
                else loop--;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}