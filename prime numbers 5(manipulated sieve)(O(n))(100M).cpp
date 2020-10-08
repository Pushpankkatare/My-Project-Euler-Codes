#include<iostream>
#include<vector>
using namespace std;
// manipulated sieve O(n)
void manipulatedsieve(long long n)
{
    vector<long long> prime;
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
    
    // for(long long i=0; i<prime.size(); i++)
    // {
    //     cout<<prime[i]<<" ";
    // }
    cout<<prime.back();
}

int main()
{
    long long n;
    cin>>n;
    manipulatedsieve(n);
    //cout<< 1 <<" "<<2;
}