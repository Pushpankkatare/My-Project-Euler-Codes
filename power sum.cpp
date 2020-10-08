#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long b,p,x=1;
    cin>>b>>p;
    //vector<long long> a;
    vector<long long> a;
    a.push_back(b);
    for(int i=0; i<p-1; i++)
    {
        int carry=0;
        for(int j=0; j<a.size(); j++)
        {
            a[j]=(a[j]*b)+carry;
            if(a[j]>9)
            {
                a[j]=a[j]%10;
                carry=1;
            }
            else
            carry=0;
        }
        if(carry==1)
        {
            a.push_back(carry);
        }
    }
    int sum=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        cout<<a[i];
        sum+=a[i];
    }
    cout<<endl<<sum;
}