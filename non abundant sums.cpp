#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int sumfact(int n)
{
    int sum=1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0 && i*i!=n)
        {
            sum=sum+i+(n/i);
        }
        if(i*i==n)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n=28123;
    vector<int> a;
    for(int i=1; i<=n; i++)
    {
        int x=sumfact(i);
        if(x>i)
        {
            a.push_back(i);
        }
    }
    long long sum=0;
    vector<int> b(28124, 0);
    // int b[28124];
    // memset(b, 0, 28124);
    // for(int i=0; i<a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    for(int i=0; i<a.size(); i++)
    {
        for(int j=i; j<a.size(); j++)
        {
            if(a[i]+a[j]<=28123)
            b[a[i]+a[j]]=1;
        }
    }
    for(int i=0; i<28124; i++)
    {
        if(b[i]==0)
        {
            sum+=i;
        }
    }
    cout<<endl<<sum;
}