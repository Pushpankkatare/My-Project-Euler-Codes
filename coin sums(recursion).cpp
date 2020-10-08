#include<iostream>
#include<cmath>
using namespace std;
int coin[]={1,2,5,10,20,50,100,200};
int coinsum(int n, int p)
{
    int c=coin[p];
    int result=0;
    if(p==0 || n<=1)
    return 1;
    
    for(int i=0; i<=floor(n/c); i++)
    {
        result+=coinsum(n-(i*c), p-1);
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int y=7;
    int ans=coinsum(n,y);
    cout<<ans;
}