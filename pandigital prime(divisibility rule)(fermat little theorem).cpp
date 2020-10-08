#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int power(long long b, long p, long long m)
{
    long long ans=1;
    if(b==0)
    {
        return 0;
    }
    while(p!=0)
    {
        if(p%2==1)
        {
            ans=((ans)%m*(b)%m)%m;
            p--;
        }
        p=p/2;
        b=((b%m)*(b%m))%m;
    }
    if((ans-1)%m!=0)
    return 0;
    return 1;
}

int littlehermat(long long n)   //special fermat test with 2 ,3 ,5 as witness
{
    if(power(2, n-1, n))
    if(power(3, n-1, n))
    if(power(5, n-1, n))
    return 1;
    return 0;
}


int prime(long long n)
{
    if(n%2==0) return 0;
    for(long long i=7; i<=101; i++)
    {
        if(n%i==0) return 0;
    }
    
    if(littlehermat(n))
    return 1;
    else
    return 0;
}


long long permute(string s)
{
    long long max=0;
    do
    {
        if(s[6]!=2 && s[6]!=4 && s[6]!=5 &&s[6]!=6)
        {
            stringstream str(s);
            long long n; str>> n;
            //cout<<n<<" ";
            if(prime(n)==1)
            {
                 return n;
            }
        }
    }
    while(prev_permutation(s.begin(), s.end()) );
    
    return max;
}

int main()
{
    string s="7654321";
    
        long long p=permute(s);
        if(p!=0)
        {
        cout<<endl<<p;
        }
        else
        s.pop_back();
}