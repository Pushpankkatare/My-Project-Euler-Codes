#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void primefactor(long long i, vector<long long> &matrix)
{
    long long count=0;
    while(i%2==0 && i!=0)
    {
        i=i/2;
        count=count+1;
    }
    if(matrix[2]<count)
        {
            matrix.erase(matrix.begin()+2);
            matrix.insert(matrix.begin()+2,1,count);
        }
    count=0;
    for(long long j=3; j<=sqrt(i); j=j+2)
    {
        count=0;
        while(i%j==0)
        {
            count=count+1;
            i=i/j;
        }
        if(matrix[j]<count)
        {
            matrix[j]=count;
        }
        
    }
    if(i>2)
    {
        
        matrix[i]=1;
    }

}


int main()
{
    long long n;
    cin>>n;
    vector<long long> matrix(n+1,0);
    
   
    for(long long i=2; i<=n; i++)
    {
        primefactor(i,matrix);
    }
    
    
     long long mult=1;
    
    for(long long i=1; i<matrix.size(); i++)
    {
        if(matrix[i]!=0)
        {
            mult=mult*pow(i,matrix[i]);
    
            
        } 
        
    }
    cout<<mult;
}