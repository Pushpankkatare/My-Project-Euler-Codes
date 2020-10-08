#include<vector>
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<vector<long long>> a(n+1, vector<long long>(n+1, 1));
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=2;
 
    for(long long i=2; i<=n; i++)
    {
        
        for(long long j=1; j<i; j++)
        {
            a[i][j]=a[i][j-1]+a[i-1][j];
            if(j==i-1)
            {
                a[i][j+1]=2*a[i][j];
            }
        }
    }
    // for(long long i=0; i<=n; i++)
    // {
    //     for(long long j=0; j<=n; j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<a[n][n];
}
