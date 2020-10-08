#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int a[10]={1,1,2,6,24,120,720,5040, 40320, 362880};
    long long ans=0;
    for(int i=24; i<=(6*a[9]); i++)
    {
        // string s=to_string(i);
        long long sum=0,p=i;
        while(p!=0)
        {
            sum=sum+a[p%10];
            p=p/10;
        }
        if(sum==i)
        {
            ans+=i;
        }
    }
    cout<<ans;
    
}
