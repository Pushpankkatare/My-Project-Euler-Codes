#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t; cin>>t;
    
    string s;
    int prod=1, c=pow(10,t);
    for(int i=0; i<=c; i++)
    {
        string str=to_string(i);
        s+=str;
        
    }
    for(int i=0; i<=t; i++)
    {
        prod*=(s[pow(10,i)]-'0');
    }
    cout<<prod;
}
