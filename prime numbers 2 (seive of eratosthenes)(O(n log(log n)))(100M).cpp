#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long n,p;
    cin>>p;
    n=p*11;
    vector<long long> prime;
    vector<bool> numb(n,true);
    
    
    for(long long i=2; i*i<=n; i++ )
    {
        if(numb[i]==true)
        {
            
            for(long long j=i; j*i<=numb.size(); j++)
            {
                numb[j*i]=false;
            }
        }
        
    }
    for(int i=2 ; i<numb.size(); i++)
    {
        if(numb[i]==true)
        prime.push_back(i);
    }
    for(int i=0; i<prime.size(); i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<endl;
    cout<<prime.size()<<" "<<prime[p-1];
    
    
}