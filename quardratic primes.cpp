#include<iostream>
#include<vector>
using namespace std;

void primearray(vector<bool> &prime, vector<long long> &numb)
{
    prime[0]=true;
    prime[1]=true;
    for(long long i=2; i<prime.size(); i++)
    {
        if(prime[i]==false)
        {
            numb.push_back(i);
            for(long long j=i; j<=prime.size()/i; j++)
            {
                prime[i*j]=true;
            }
        }
    }
}
long long isprime(long long n)
{
    if(n==1 || n==0)
    return 0;
    if(n%2==0)
    return 0;
    for(long long i=3; i*i<=n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main ()
{
    long long a, b;
    cin>>a>>b;
    //x2 + bx +a
    vector<long long> numb;
    vector<bool> prime(a+1);
    primearray(prime, numb);
        
    long long max=0,r=0,t=0;
    for(long long j=-a+1; j<=a; j=j+2)
    {
    for(long long i=0; i<numb.size(); i++)
    {
        long long b1=numb[i];
        
            long long count=0,x=0;
              //long long v=(x*x)+(j*x)+a1;
            while(isprime((x*x)+(j*x)+b1)!=0 && (x*x)+(j*x)+b1>0)
            {
                count++;
                x++;
            }
            if(max<count)
            {
                max=count;
                r=b1;
                t=j;
            }
        }
    }
    cout<<"\n"<<max<<" "<<r<<" "<<t<<" "<<r*t;
}
