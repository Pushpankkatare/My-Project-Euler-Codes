#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n=100;
    vector<vector<int>> a(n);
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<=i; j++)
        {
            int p;
            cin>>p;
            int sum=0;
            if(i==0)
            {
                a[i].push_back(p);
            }
            else if(j==0)
            {
                sum=p+a[i-1][j];
                a[i].push_back(sum);
            }
            else if(j==i)
            {
                sum=p+a[i-1][j-1];
                a[i].push_back(sum);
            }
            else
            {
                sum=p+max(a[i-1][j-1], a[i-1][j]);
                a[i].push_back(sum);
            }
            
        }
    }
    int ss=0;
    for(int i=0; i<n; i++)
    {
        if(ss<a[n-1][i])
        {
            ss=a[n-1][i];
        }
    }
    cout<<ss;
}