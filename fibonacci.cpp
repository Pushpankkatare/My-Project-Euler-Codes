#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, b, max=4000000;
    vector<int> p;
    a=1;
     b=2;
     p.push_back(b);
    for(int value=0;value<=max; )
    {
     value=a+b;
     a=b;
     b=value;
     if(value%2==0)
     {
         p.push_back(value);
     }
     
    }
    int sum=0; 
     for(int i=0; i<p.size(); i++)
     {
         sum=sum+p[i];
     }
     cout<<sum;
    
}