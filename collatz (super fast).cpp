#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long p;
    cin>>p;
    vector<bool> a(p+1, true);
    long long max=0, count=0, value=0;
    for(long long i=(p/2)+1; i<=p; i++)
    {
        if(a[i]==true)
        {
            long long num=i, count=1;
            while(num!=1)
            {
                if((num)%2==1)
                {
                    num=(3*(num)+1)/2;
                    count++;
                }
                else
                {
                    num=num/2;
                }
                if(num<=p)
                {
                    a[num]=false;
                }
                count++;
            }
            if(count>max)
            {
                max=count;
                value=i;
            }
        }
    }
    cout<<value<<" "<<max;
}