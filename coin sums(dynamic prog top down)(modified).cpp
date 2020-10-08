#include<iostream>
#include<vector>
using namespace std;
long long coin[]={1,2,5,10,20,50,100,200};
vector<vector<long long>> store(1000001,vector<long long>(7,0));
long long coinsum(long long n, long long p)
{
    long long result=0,c=coin[p];
    if(n<=1 || c==1)
    return 1;
    if(n<c)
    {
        if(store[n][p-1]!=0)
        result += store[n][p-1];
        else
        {
            long long y=coinsum(n, p-1);
            result += y;
            store[n][p-1]=y;
        }
    }
    else
    {
        if(store[n-p][p]!=0)
        result += store[n-p][p];
        else
        {
            long long y=coinsum(n-c, p);
            result += y;
            store[n-p][p]=y;
        }
        if(store[n][p-1]!=0)
        result += store[n][p-1];
        else
        {
            long long y=coinsum(n, p-1);
            result += y;
            store[n][p-1]=y;
        }
        
    }
    return result;
}


 int  main()
 {
     long long n;
     cin>>n;
     long long y =7;
     long long x=coinsum(n,y);
     cout<<x;
 }