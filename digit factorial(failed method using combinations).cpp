#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
long a[10]={1,1,2,6,24,120,720,5040, 40320, 362880};
//vector<long> b;
string b;
long sum=0;

long ans(string s)
{
    
    long adn=0;
    for(long i=0; i<s.length(); i++)
    adn+=a[(s[i]-('0'))];
    do
    {
        int z=stoi(s);
        if(z==adn)
        {
            sum+=adn;
            return 0;
        }
    }
    while(next_permutation(s.begin(), s.end()));

        
}

long combinations(long n, long limit)
{
    if(n==0)
    {
        ans(b);
        //cout<<b<<endl;
        return 0;
    }
    for(long i=limit; i<10; i++)
    {
        b.push_back(i+'0');
        combinations(n-1, i);
        b.pop_back();
    }
    
}

int main()
{
    long n;cin>>n;
    combinations(n, 0);
    cout<<sum;
}