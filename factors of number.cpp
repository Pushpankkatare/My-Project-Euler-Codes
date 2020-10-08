#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
//finding the factors of a number
int main()
{
    int n, count=0 ;
    vector<int> vect;
    cin>>n;
    for(int  i=1; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
           vect.push_back(i);
           vect.push_back(n/i);
            count=count +2;
        }
    }
    if(sqrt(n)*sqrt(n)==n)
    {
        count=count+1;
        vect.push_back(sqrt(n));
    }
    sort(vect.begin(),vect.end());
    for(int i=0; i<vect.size(); i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl<<count<<" "<<vect.size();
}