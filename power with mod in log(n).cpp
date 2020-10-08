#include<iostream>
using namespace std;
//finding power in log(n) with modulo 
long long fastpower(long long b, long long p, long long m)
{
    long long result=1;
    b=b%m;
    if(b==0)
    {
        return 0;
    }
    while(p!=0)
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

int main()
{
    long long b,p,m;
    cin>>b>>p>>m;
    long long ans=fastpower(b,p,m);
    cout<<ans;
}