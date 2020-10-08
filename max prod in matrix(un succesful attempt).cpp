#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long grid[n][n];
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
        
    }
    long long max=0,p,q;
    for(long long i=0; i<n-4; i++)
    {
        int j=8;
          long long prod=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
          
            if(prod>max)
            {
                max=prod;
            }
       
    }

        for(long long j=0; j<n-4; j++)
        {
            int i=6;
          long long prod=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
            if(prod>max)
            {
                max=prod;
            }
        }
       
    for(long long i=0; i<n-4; i++)
    {
           
          int j=i+2;
          long long prod=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
            if(prod>max)
            {
                max=prod;
            }
       
    }
    int j=0;
    for(long long i=14; i>=0; i--)
    {
        
          long long prod=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
                     //  cout<<prod<<" ";
            if(prod>max)
            {
                max=prod;
            }
            j++;
    }
    //cout<<p<<" "<<q<<" "<<grid[p][q]<<" "<<grid[p+1][q+1]<<" "<<grid[p+2][q+2]<<" "<<grid[p+3][q+3]<<endl;
    cout<<max;
}