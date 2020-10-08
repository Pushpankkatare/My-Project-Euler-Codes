#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

map<int,int> m;
vector<int> p;

void prime(int n)
{
    vector<int> a(n+1,1);
    for(int i=2; i*i<=n; i++)
    {
        if(a[i]==1)
        {
            for(int j=i; j*i<=n; j++)
            {
                a[i*j]=0;
            }
        }
        
    }
    for(int i=2; i<=n; i++)
        {
            if(a[i]==1)
            {
                p.push_back(i);
                m[i]=1;
            }
        }
}



int check(string s)
{
    int x=s.size()-1;
    while(x--)
    {
        rotate(s.begin(), s.begin()+1, s.end());
        int n=stoi(s);
        if(m[n]!=1)
        return 0;
        
    }
    return 1;
}

int main()
{
    int n;cin>>n;
    prime(n);
    int count=0;
    for(int x=0; x<p.size(); x++)
    {
        if(m[p[x]]==1)
        {
            if(p[x]>10)
            {
                string s=to_string(p[x]);
                if(check(s))
                {
                    m[stoi(s)]=1;
                }
                else
                m[stoi(s)]=0;
            }
        }
        
    }
    
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        if(it->second==1)
        {
            cout<<it->first<<" ";
            count++;
        }
    }
    cout<<count<<" "<<p.size()<<" "<<m.size();
}