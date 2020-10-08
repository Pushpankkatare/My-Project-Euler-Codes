#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int coin[]={1,2,5,10,20,50,100,200};
vector<vector<int>> store(100001,vector<int>(7,0));
int coinsum(int n, int p)
{
    int c=coin[p];
    int result=0;
    if(p==0 || n<=1)
    return 1;
    
    for(int i=0; i<=floor(n/c); i++)
    {
        if(store[n-(i*c)][p-1]!=0)
        result+=store[n-(i*c)][p-1];
        else
        {
            int d=coinsum(n-(i*c), p-1);
            store[n-(i*c)][p-1]=d;
            result+=d;
        }
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