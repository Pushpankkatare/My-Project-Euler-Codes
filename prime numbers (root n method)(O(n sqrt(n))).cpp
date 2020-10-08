#include<iostream>
#include<cmath>
#include<vector>
//sieve of eratosthenesis
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> vect;
    vect.push_back(2);
    for(long long i=3; vect.size()<n; i=i+2)
    {
        vect.push_back(i);
        for(long long j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                vect.pop_back();
            }
        }
        
        
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    cout<<vect[n-1];
}