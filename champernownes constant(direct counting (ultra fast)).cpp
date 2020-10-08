#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long t, m=clock(); cin>>t;
    long long a[t];
    for(long long i=0; i<t; i++)
    {
        a[i]=((pow(10, i+1)-(pow(10,i)))*(i+1));
        cout<<a[i]<<" ";
    }
    
    long long prod=1;
    for(long long i=0; i<=t; i++)
    {
        long long x=pow(10, i), j=0;
        while(x>a[j])
        {
            x=x-a[j];
            j++;
        }
        long long d=x/(j+1), r=x%(j+1);
        long long count=pow(10, j)+d-1;
        
        string s;
        
        if(r==0)
        {
            s=to_string(count);
            prod*=(s[s.size()-1]-'0');
        }
        else
        {
            s=to_string(count+1);
            prod*=(s[r-1]-'0');
        }
        
    }
    cout<<prod<<" "<<clock()-m;
}
