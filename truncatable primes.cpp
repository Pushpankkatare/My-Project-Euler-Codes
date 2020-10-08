#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
map<int, int>m;
vector<int> prm;
void prime(int n)
{
    vector<int> p(n+1,1);
    p[0]=0; p[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(p[i]==1)
        {
            for(int j=i; j*i<=n; j++)
            {
                p[i*j]=0;
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        if(p[i]==1)
        {
            prm.push_back(i);
            m[i]=1;
        }
    }
}

int truncatable (int n)
{
    int k=0, p=n, flag=0;
    while(p>0)
    {
        if(m[p]!=1)
        {
            return 0;
        }
        p=p/10;
        k++;
    }
    p=n;
    while(p>0)
    {
        if(m[p]!=1)
        {
            return 0;
        }
        k--;
        int x=pow(10, k);
        p=p%x;
    }
    return 1;
}

int main()
{
    int n; cin>>n;
    prime(n);
    int count=0, sum=0;
    for(int i=4 ;i<prm.size() && count<=11; i++)
    {
        if(truncatable(prm[i]))
        {
            count++;
            cout<<prm[i]<<" ";
            sum+=prm[i];
        }
    }
    cout<<sum;
}