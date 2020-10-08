#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long> myvec;
    myvec.push_back(2);
    myvec.push_back(3);
    for(long long i=4; i<n; i++)
    {
        myvec.push_back(i);
        for(long long j=2; j<=sqrt(i); j++ )
        {
            
            if(i%j==0)
            {
                myvec.pop_back();
                break;
            }
            
        }
    }
    // for(long long i=0; i<myvec.size(); i++)
    // {
    //     cout<<myvec[i]<<" ";
    // }
    
    long long powe=1,num=1, temp=1;
    for(long long i=0; i<myvec.size(); i++)
    {
        if(temp==1)
        {
            powe=(log(n)/log(myvec[i]));
            num=num*pow(myvec[i],powe);
            if(powe<2)
            {
                temp=0;
            }
        }
        else
        num=num*myvec[i];
    }
    float t=5/2;
    cout<<num<<" "<<t;
}