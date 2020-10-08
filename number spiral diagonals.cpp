#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long sum=1;
    for(int i=3; i<=n; i=i+2)
    {
        sum=sum+(4*i*i)-(6*(i-1));
    }
    cout<<sum;
}