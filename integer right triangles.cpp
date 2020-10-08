#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int hcf(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    hcf(b%a, a);
}

int main()
{
    int s, t=clock() ; cin>>s;
    int n,m, s2=s/2;
    map<int, int> ma;
    for(n=2; n*(n+1)<=s2; n++)
    {
        if(n%2==0) m=1;
        else m=2;
        for(m; m<n && n*(m+n)<=s2; m+=2)
        {
            if(hcf(n,m)==1)
            {
                int p=2*(n+m)*n;
                
                for(int i=1; p*i<=s; i++)
                {
                    ma[p*i]++;
                }
            }
        }
    }
    int ans=0, ans1=0;
    //cout<<ma.size()<<endl;
    for(auto it=ma.begin(); it!=ma.end(); it++)
    {
        if(ans< it->second)
        {
            ans=it->second;
            ans1=it->first;
        }
    }
    cout<<ans1<<" "<<clock()-t;
}