#include<iostream>
#include<vector> 
using namespace std;


void modifiedsieve(long long n, vector<long long> &prime)
{
    vector<bool> isprime(n+1,true);
    vector<long long> spf(n+1);
    for(long long i=2; i<isprime.size(); i++)
    {
        if(isprime[i]==true)
        {
            prime.push_back(i);
            spf[i]=i;
        }
        for(long long j=0; spf[i]>=prime[j] && j<prime.size() && i*prime[j]<=n; j++)
        {
            isprime[i*prime[j]]=false;
            spf[i*prime[j]]=prime[j];
        }
    }    
    
}
int main()
{
    long long n, sum=0;
    cin>>n;
    vector<long long> prime;
    modifiedsieve(n, prime);
    for(long long i=0; i<prime.size(); i++)
    {
            sum=sum+prime[i];
    
    }
    cout<<sum;
}