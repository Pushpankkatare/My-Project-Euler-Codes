 #include<iostream>
#include<vector>
using namespace std;
int coin[]={1,2,5,10,20,50,100,200};
int coinsum(int n, int p)
{
    vector<int> a(n+1, 1);
    vector<int> b(n+1);
    // for(int i=0; i<=n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    //cout<<endl;
    b[0]=1;
    b[1]=1;
    for(int i=1; i<=p; i++) //columns
    {
        for(int j=2; j<=n; j++) //rows
        {
            int z=0;
            if(j-coin[i]>=0)
            {
                z=j-coin[i];
                b[j]=a[j]+b[z];
                a[j]=b[j];
            }
            else
            {
                b[j]=a[j];
                a[j]=b[j];
            }
        }
        
    }
    // for(int i=0; i<a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    return b[n];
}

int main()
{
    int n;
    cin>>n;
    int y=7;
    int ans=coinsum(n,y);
    cout<<ans;
}