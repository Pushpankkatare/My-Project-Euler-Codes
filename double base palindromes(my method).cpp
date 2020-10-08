#include<iostream>
#include<vector>
#include<cmath>
#include<string>
//#include<bits/stdc++.h>
#include<sstream>
using namespace std;
vector<long long> pal;



long long check(long long n, long long digit)
{
    long long p=n, d=digit-1;
    long long c=digit/2;
    while(p>0)
    {
        long long g=pow(10,d);
        long long first, second;
        first=(p/g);
        second=(p%10);
        if(first!=second)
        return 0;
        p=(p%g)/10;
        d=d-2;
    }
    
    pal.push_back(n);
    return 1;
}

long long binary(long long n)
{
    string b;
    while(n>0)
    {
        b.push_back(n%2+'0');
        n=n/2;
    }
    int s=b.length()/2;
    for(int i=0; i<=s; i++)
    {
        if(b[i]!=b[b.length()-1-i])
        return 0;
    }
    return 1;
}

int main()
{
    long long n; cin>>n;
    long long digit=1;
    for(long long i=1; i<=n;)
    {
        while(i<pow(10,digit))
        {
            if(digit%2==0)
            {
                if(check(i,digit))
                {
                    i+=11;
                }
                else
                i++;
            }
            else
            {
                if(check(i,digit))
                i+=10;
                else
                i++;
            }
        }
        i=pow(10,digit)+1;
        digit++;
    }
    long long sum=24;
    for(long long i=0; i<pal.size(); i++)
    {
        if(binary(pal[i]))
        {
            sum+=pal[i];
            cout<<pal[i]<<" ";
        }
    }
    cout<<endl<<sum<<"\n";
}
