#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    string sum;
    cin>>sum;
    reverse(sum.begin(), sum.end());
 long long carry=0, count=0;
    for(long long i=0; i<99; i++)
    {
        cin>>str;
        reverse(str.begin(), str.end());
        for(long long j=0; j<str.length(); j++)
        {
            //cout<<str[j]-'0';
            long long k =(sum[j]-'0')+(str[j]-'0')+carry;
            if(k>9)
            {
                carry=1;
                long long p=k%10;
                sum[j]=p+'0';
            }
            else
            {
            sum[j]=k+'0';
            carry=0;
            }
        }
        if(carry==1)
        {
            //cout<<"hi"<<" ";
            //sum.push_back('1');
            count++;
            
        }
        carry=0;
   
    }
    
   // reverse(sum.begin(), sum.end());
    cout<<endl<<count;//<<sum<<endl<<sum.length();
    for(long long i=sum.length()-1; i>=0; i--)
    {   
        cout<<sum[i];
    }
    
    
}
