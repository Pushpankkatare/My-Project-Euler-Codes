#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<bool> goku(a+1, true);
    int count=0;
    for(int i=2; i*i<=a; i++)
    {
        if(goku[i]==true)
        {
            int n=floor(log10(a)/log10(i))+1;
            n=n-1;
            //cout<<n<<" "<<i<<endl;
            vector<int> pan((n*b)+1,0);
            for(int k=1; k<=n; k++)
            {
                goku[pow(i,k)]=false;
                for(int j=2; j<=b; j++)
                {
                    if(pan[k*j]==0)
                    {
                        pan[k*j]=1;
                        count++;
                    }
                }
            }
        }
    }
    cout<<count<<" "<<endl;
    for(int i=2; i<=a; i++ )
    {
        if(goku[i]==true)
        {
            count=count+b-1;
        }
    }
    //cout<<endl<<count<<" "<<counter;
   // count=((a-1-sumx)*(b-1));
    cout<<endl<<count;
}