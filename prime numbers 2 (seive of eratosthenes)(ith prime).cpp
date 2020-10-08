#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long> vect;
    vector<bool> prime(15000,true);
    
    
    for(long long i=2; vect.size()<n; i++ )
    {
        if(prime[i]==true)
        {
            vect.push_back(i);
            for(long long j=i; j*i<=prime.size(); j++)
            {
                prime[j*i]=false;
            }
        }
        
    }
    for(int i=0; i<vect.size(); i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    cout<<vect.back();
    
    
}