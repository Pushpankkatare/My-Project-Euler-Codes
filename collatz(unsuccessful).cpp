#include<iostream>
using namespace std;
int main()
{
    long long p;
    cin>>p;
    long long num=2, prev, max=0;
    while(num<=p)
    {
        prev=num;
        if((num-1)%3==0 && num-1!=3)
        {
            num=(num-1)/3;
            if(num<=1000000)
            {
                max=num;
            }
        }
        else
        {
             num=num*2;
             if(num<=1000000)
            {
                max=num;
            }
        }
        
    }
    cout<<max;
}