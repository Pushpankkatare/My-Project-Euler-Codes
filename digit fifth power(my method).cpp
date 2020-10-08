#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10];
    for(int i=0; i<10; i++)
    {
        a[i]=pow(i,n);
        cout<<a[i]<<" ";
    }
    cout<<endl;
    long maxsum=0;
    for(int i=2; i<=n+1; i++)
    {
        for(long long q=pow(10,i-1); q<pow(10,i); q++)
        {
            //cout<<q<<" ";
            long sum=0;
            int t=i, y=q;
            while(t--)
            {
                int c=y%10;
                sum=sum+a[c];
                y=y/10;
            }
            if(sum==q)
            { 
                cout<<sum<<" ";
                maxsum+=sum;
            }
        }
    }
    cout<<maxsum;
}