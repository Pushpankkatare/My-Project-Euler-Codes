#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long fact(int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    long ans=n*fact(n-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    //cout<<fact (3);
    vector<int> a{0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<a.size()-1; i++)
    {
        int f=fact(a.size()-i-1);
        int p=n/f;
        if(p*f==n)
        {
            p=p-1;
        }
        int q=a[i];
        a[i]=a[i+p];
        a[i+p]=q;
        sort(a.begin()+i+1, a.end());
        n=n-(p*f);
    }
    for(int i=0; i<a.size(); i++)
    {
       cout<< a[i];
    }
}