#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=2; 3*i<n; i++)
    {
        long long diff=((i+1)*(i+1))-i*i;
        for(long long j=sqrt(diff); j<i; j++)
        {
            long long p=sqrt((i*i)+(j*j));
            if(p*p==(i*i)+(j*j))
            {
                long long sum=p+i+j;
                if(n%sum==0)
                {
                    cout<<i*(n/sum)<<" "<<j*(n/sum)<<" "<<p*(n/sum)<<endl;;
                    cout<<(i*j*p)*(n/sum)*(n/sum)*(n/sum);
                    return 0;
                }
            }
        }
    }
    
}