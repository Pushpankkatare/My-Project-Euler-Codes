#include<iostream>
using namespace std;
// finding modular multiplicative inverse

int power(int b, int p, int m)
{
    if(b==0)
    return 0;
    int result=1;
    b=b%m;
    while(p>0)
    {
        if(p%2==1)
        {
            result=(result*b)%m;
            p--;
        }
        p=p/2;
        b=(b*b)%m;
    }
    return result;
}

int gcd(int a, int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}

int modinvlittle(int a , int m)
{
    if(gcd(a,m)!=1)
    return 0;
    int x=power(a,m-2,m);
    return x;
}

int euclidmodinv(int a, int b,int*x, int*y)
{
    if(a==0)
    {
        *x=0; *y=1;
        return b;
    }
    int x1, y1;
    int t=euclidmodinv(b%a, a, &x1, &y1);
    *x=y1-(x1*(b/a));
    *y=x1;
    return t;
}

int modinv(int a, int m)
{
    int x, y;
    int  p=euclidmodinv(a,m,&x,&y);
    if(p!=1)
    return 0;
    else
    {
        x=(x%m+m)%m;
        return x;
    }
}

int modularinv(int a, int m)
{
    if(gcd(a,m)!=1)
    return 0;
    a=a%m;
    for(int i=1; i<m; i++)
    {
        if((a*i)%m==1)
        return i;
    }
    return 0;
}

int modinvit(int a, int m)
{
    if(gcd(a,m)!=1)
    return 0;
    
    int x=1, y=0;
    int m0=m;
    while(a>1)
    {
        int q=a/m;
        int t=m;
        m=a%m; a=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0)
    x=x+m0;
    return x;
}

int main()
{
    int a,m,p; cin>>a>>m;
    {
        //p=modularinv(a,m);
        //p=modinv(a,m);
        //p=modinvlittle(a,m);
        p=modinvit(a,m);
        cout<<p;
    }
    
}
