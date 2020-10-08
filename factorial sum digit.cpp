#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     vector<long long> a;
     a.push_back(1);
     int carry=0;
     for(int i=1; i<=n; i++)
     {
         carry=0;
         for(int j=0; j<a.size(); j++)
         {
             a[j]=(a[j]*i)+carry;
            
             if(a[j]>99 && a[j]<=999)
             {
                 carry=floor(a[j]/10);
                 a[j]=a[j]%100;
                 if(a[j]>9)
                 {
                     a[j]=a[j]%10;
                 }
             }
             else if(a[j]>9 && a[j]<=99)
             {
                 carry=floor(a[j]/10);
                 a[j]=a[j]%10;
             }
             else
             carry=0;
         }
         if(carry!=0)
         {
             if(carry<10)
            {
                a.push_back(carry);
            }
            else if(carry<100)
            {
                a.push_back(carry%10);
                a.push_back(carry/10);
            }
            else 
            {
                a.push_back(carry%10);
                a.push_back(carry/10 );
            }
         }
     }
     int sum=0;
     for(int i=0; i<a.size(); i++)
     {
         sum+=a[i];
         cout<<a[i]<<" ";
     }
     cout<<endl<<sum;
 }