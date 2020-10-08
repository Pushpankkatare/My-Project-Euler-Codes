#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    //long long fib1=1,fib2=1, sum=0, i=2;
    long long count=2;
    vector<int> f1;
    vector<int> f2;
    f1.push_back(1);
    f2.push_back(1);
    while(1)
    {
        count++;
        vector<int> f3=f2;
        int carry=0;
       for(long long j=0; j<f1.size(); j++)
       {
           f2[j]=f2[j]+f1[j]+carry;
           if(f2[j]>9)
           {
               carry=f2[j]/10;
               f2[j]=f2[j]%10;
           }
           else
           carry=0;
       }
       if(carry>0)
       {
           f2.push_back(carry);
       
           f3.push_back(0);
       }
       if(f2.size()>=n)
        {
            for(int i=f2.size()-1; i>=0; i--)
            {
                cout<<f2[i];
            }
            cout<<endl<<count;
            break;
        }
        f1=f3;
    }
}