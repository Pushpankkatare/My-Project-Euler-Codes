#include<iostream>
using namespace std;
// pythagoream triplet using ancient parameterization
long long gcdeuclidian(long long x, long long y)
{
    if(x==0)
    {
        return y;
    }
    return gcdeuclidian(y%x,x);
}

int main()
{
    long long sum;
    cin>>sum;
    long long sum2=sum/2,k,n,m,a,b,c,sm,d;
    for(m=2; m<=sum/2; m++)
    {
        if(sum2%m==0)
        {
             sm=sum/m; //to reducue search space
            while(sm%2==0)
            {
                sm=sm/2; // to reduce search space even further, this works only when the number is still even
            }            // so no need to worry about this loop( because m is definately even and decreaing sm by 2 wont have any effect on k which is odd)   
            if(m%2==0)
            {
                k=m+1;
            }
            else
            {
                k=m+2;
            }
            for(k; k<2*m && k<=sm; k=k+2)
            {
                if(sm%k==0 && (gcdeuclidian(m,k-m)==1 )) 
                {
                    n=k-m;
                    d=(sum2)/(m*k);
                    a=((m*m)-(n*n))*d;
                    b=2*n*m*d;
                    c=((m*m)+(n*n))*d;
                   // cout<<a<<" "<<b<<" "<<c<<" "<<2*m*k<<endl;
                    cout<<a*b*c;
                    return 0;
                
                }
            }
            
        }
    }
    cout<<"no such triplet exist";
}