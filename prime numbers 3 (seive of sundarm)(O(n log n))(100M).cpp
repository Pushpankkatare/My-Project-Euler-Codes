 #include<iostream>
#include<cmath>
#include<array>
#include<vector>
//sieve of sundaram
using namespace std;
int main()
{
   long long p,q;
   cin>>q;
   p=q*11;
   long long n=(p-2)/2;
   
 //  array<array<long long>,y > num;
 //  vector<vector<long long>> num(r);
  
   vector<bool> check(n+1, true);
  

   //memset(num, true,num.size())
   for(long long i=1; i<=n; i++)
   {
       for(long long j=i; i+j+(2*i*j)<=n; j++)
       {
           check[i+j+(2*i*j)]=false;
       }
   } 

   long long count=0;
   if(n>=2)
   {
       count++;
       cout<<2<<" ";
   }
   for(long long i=1; count<=q; i++)
   {
       
       if(check[i]==true)
       {
           cout<<(2*i)+1<<" ";
           count++;
       }
   }
   cout<<endl<<count;
   
   
   
}