#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;


int prime(long long n)
{
    if(n%2==0) return 0;
    for(long long i=3; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}


long long permute(string s)
{
    long long max=0;
    do
    {
        stringstream str(s);
        long long n; str>> n;
        //cout<<n<<" ";
        if(prime(n)==1 && max<n)
        {
             max=n;
        }
    }
    while(next_permutation(s.begin(), s.end()) );
    
    return max;
}

int main()
{
    string s="1234567";
    for(int i=9; i>=1; i--)
    {
        long long p=permute(s);
        if(p!=0)
        {
        cout<<endl<<p;
        break;
        }
        else
        s.pop_back();
    }
}