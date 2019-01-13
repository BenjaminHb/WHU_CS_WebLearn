/**
 * File Name:        Problem_288.cpp
 * Project Name:     WHU_CS_WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     01/13/2019 19:23
 * Version:          0.0.1.20190113
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<iostream>
#include<cstdio>

#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases-->0)
    {
        string a,b;
        int k;
        cin>>a>>b>>k;
        vector<int> diff(a.length());
        int j;
        for(j=0;j<a.length();j++)
        {
            diff[j]=(a[j]-b[j]>=0)?(a[j]-b[j]):(b[j]-a[j]);
        }
        sort(diff.begin(),diff.end());
        for(j=a.length()-k;j<a.length();j++)
        {
            if(diff[j]==0) 
                diff[j]=1;
            else 
                diff[j]=0;
        }
        int sum=0;
        for(j=0;j<diff.size();j++) sum+=diff[j];

        printf("%d\n",sum);
    }
    return 0;
}