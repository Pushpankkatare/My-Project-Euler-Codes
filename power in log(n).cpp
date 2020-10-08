#include<iostream>
using namespace std;
//finding power in log(n)
int fastpower(int b, int p)
{
    int result=1;
    if(b==0)
    {
        return 0;
    }
    while(p!=0)
    {
    if(p%2==1)
    {
        result=result*b;
        p--;
    }
    p=p/2;
    b=b*b;
    }
    return result;
}

int main()
{
    int b,p;
    cin>>b>>p;
    int ans=fastpower(b,p);
    cout<<ans;
}