#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum1=0;
    for(long long i=1; i<=n; i++)
    {
        sum1=sum1+(i*i);
    }
    long long sum2= n*n*(n+1)*(n+1)/4;
    cout<<sum2-sum1;
    
}
