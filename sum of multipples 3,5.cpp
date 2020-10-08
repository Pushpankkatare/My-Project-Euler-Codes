#include<iostream>
using namespace std;
int sumofnumber(int target, int n)
{
    int p=(n-1)/target, ans;
    ans=target*p*(p+1)/2;
    return ans;
}


int main()
{
    int n,sum=0;
    cin>>n;
    sum=sumofnumber(3,n)+sumofnumber(5,n)-sumofnumber(15,n);
    cout<<sum;
}