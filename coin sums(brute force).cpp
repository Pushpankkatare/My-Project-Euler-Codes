#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int a=0; a<=n; a+=100)
    {
         for(int b=a; b<=n; b+=50)
         {
             for(int c=b; c<=n; c+=20)
             {
                 for(int d=c; d<=n; d+=10)
                 {
                     for(int e=d; e<=n; e+=5)
                     {
                         for(int f=e; f<=n; f+=2)
                         {
                            count++;
                         }
                     }
                 }
             }
         }
    }
    cout<<count;
} 