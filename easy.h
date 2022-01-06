#ifndef EASY_H
#define EASY_H

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <stack>
#include <queue>
#include <cmath>
int max(int a, int b){
    if(a>b){
        return a;
    }
    if(a<b){
        return b;
    }
}
int min(int a, int b){
    if(a>b){
        return b;
    }
    if(a<b){
        return a;
    }
}
int len(auto a){
    return std::size(a);
}

inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
    while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
#endif
