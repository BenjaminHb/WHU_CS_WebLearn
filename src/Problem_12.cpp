/**
 * File Name:        Problem_12.cpp
 * Project Name:     WebLearn
 * Author:           Benjamin Zhang
 * Created Time:     2019-01-12 20:13
 * Version:          0.0.1.20190112
 *
 * Copyright (c) Benjamin Zhang 2019
 * All rights reserved.
**/

#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;

typedef long long llint;
const int maxn = 2015;

struct zz
{
    int x;
    int re;
}dy;

int h[maxn][maxn];
char c[maxn][maxn];
int n, m;
vector<zz> v;

llint goback(int id)
{
    llint ans = 0;
    int tmp = 0;
    v.clear();
    dy.x = -1;
    dy.re = 0;
    v.push_back(dy);
    for(int i=1;i<=n;i++)
    {
        dy.x = h[i][id];
        dy.re = 1;
        while(dy.x < v.back().x)
        {
            tmp -= v.back().x*v.back().re;
            dy.re += v.back().re;
            v.pop_back();
        }
        tmp+=dy.x*dy.re;
        v.push_back(dy);
        ans+=tmp;
    }
    return ans;
}

int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        getchar();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                c[i][j] = getchar();
            }
            getchar();
        }
        
        long long result=0;
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                h[i][j]=0;
    
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(c[i][j]=='w') 
                    h[i][j]=h[i][j-1]+1;
    
        for(int j=1;j<=m;j++)
        {
            result+=goback(j);
        }
        
        printf("%lld\n",result);
    }
    return 0;
}
