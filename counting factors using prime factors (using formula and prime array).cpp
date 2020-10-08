#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//manipulated sieve
void manipulatedsieve(long long n, vector<long long> &prime)
{
    
    vector<bool> isprime(n+1,true);
    vector<long long> spf(n+1);
    
    for(long long i=2; i<=n; i++)
    {
        if(isprime[i]==true)
        {
            prime.push_back(i);
            spf[i]=i;
        }
        
        for(long long j=0; prime[j]<=spf[i] && i*prime[j]<=n; j++)
        {
            isprime[i*prime[j]]=false;
            spf[i*prime[j]]=prime[j];
        }
    }
    
}
// counting factors using prime factors 
long long countfact(long long p, vector<long long> prime)
{
    long long factcount=1, counte=0;
    
    for(long long i=0; prime[i]<=sqrt(p); i++)
    {
        counte=0;
        while(p%prime[i]==0)
        {
            counte++;
            p=p/prime[i];
        }
        if(counte>0)
        {
            factcount=factcount*(counte+1);
        }
    }
    if(p>1)
    {
        factcount=factcount*2;
    }
    return factcount;
}
int main()
{
    long long n;
    cin>>n;
    long long count=0;
    long long i=0;
    vector<long long> prime;
    manipulatedsieve(1000, prime); //getting a prime array hepls the prime factor loop run even faster
    while(count<=n)
    {
        i++;
        if(i%2==0)   //this works because the numbers i and i+1 are always coprime that is they dont have any common factors
        {           // this is fast also because calculating prime factors for two small numbers is more effcient than one large number    
            count=countfact(i/2, prime);
            count=count*countfact(i+1, prime);
        }
        else
        {
            count=countfact((i+1)/2, prime);
            count=count*countfact(i, prime);
        }
        
    }
    cout<<(i*(i+1))/2;
}