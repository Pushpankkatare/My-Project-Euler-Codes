#include<iostream>
using namespace std;
//power using recursion

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        int x,y;
        cin>>x>>y>>a>>b;
        int p=x-y;
        int min=y;
        if(p<0)
        {
            p=-p;
            min=x;
        }
        if(a<b/2)
        {
            cout<<a*(x+y)<<endl;
        }
        else
        {
            cout<<(a*p)+(b*x)<<endl;
        }
    }
}
