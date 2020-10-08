#include<iostream>
using namespace std;
// primes using six
bool prime6(int p)
{
    if(p<=3)
    {
        return true;
    }
    if(p%3==0)
    {
        return false;
    }
    if(p<9)
    {
        return true;
    }
    for(int i=5; i*i<=p; i+=6 )
    {
        if(p%i==0)
        {
            return false;
        }
        if(p%(i+2)==0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int count=1;
    if(n==1)
    {
        cout<<"2";
        return 0;
    }
    int i;
    for( i=3; count<n; i+=2 )
    {
        
        if(prime6(i))
        {
            count++;
        }
    }
    cout<<i-2;
        
        
}