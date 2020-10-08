#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long sumfact(long long n, long long t)
{
    long long sum=1;
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i!=sqrt(n))
            sum=sum+i+(n/i);
            else
            sum+=i;
        }
        if(sum>t)
        {
            sum=0;
            break;
        }
    }
    //cout<<sum<<" ";
    return sum;
}
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    vector<long long>a(n+1, 0);// 0=not evaluated  1=evaluated
    a[1]=1;
    for(long long i=2; i<=n ; i++)
    {
         long long x;
        // if(a[i]==0)
         x=sumfact(i,n);
        
        
        if(a[x]==1)
        {
            a[i]=1;
        }
        else if((a[x]==0) && a[x]<=n && x!=i)
        {
             long long p;
            // if(a[x]==0)
            p=sumfact(x,n);
            if(p==i)
            {
                sum=sum+i+x;
                cout<< i<<" "<<x<<endl;
                a[i]=1;
                a[x]=1;
            }
            else
            {
                a[i]=1;
            }
        }
        else
        {
            a[i]=1;
        }
    }
    // for(long long i=0; i<=n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<endl<<sum;
}