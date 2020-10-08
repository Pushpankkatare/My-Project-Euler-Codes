#include<iostream>
#include<cmath>
using namespace std;
int pallindrome(int k)
{
    int rev=0,p=k; 
//CHECKING FOR PALLINDROME      
    while(k!=0)
    {
        rev=(rev*10)+(k%10);
        k=k/10;
    } 
    if(p==rev)
    {return 1;}
    else
    return 0;
}
 int main()
 {
     long long n;
     cin>>n;
     
     long long m=pow(10,n)-1;

     long long p=pow(10,(n-1));

     long long max=0;
     for(long long i=m; i>=p; i--)
     {
         int u,ne;
 //HERE 111111 CAN BE SPLITTED INTO TWO THREE DIGIT MULTIPLES SO THEREFORE THE PALLINDROME HAS TO BE EVEN DIGIT
 //ALL THE EVEN DIGIT PALLINDROMES ARE MULTIPLE OF 11
        if(i%11==0)
     {
         ne=1;
         u=i;
     }
     else
     {
         ne=11;
         u=i-(i%11);
         
     } 
         for(long long j=u; j>=p; j=j-ne)
         {
             long long k=i*j;
             if(pallindrome(k))
             {
                if(k>max) 
                max=k;
// SINCE EVERY PALLINDROME IN THE LOOP OF j WILL BE LESS THAN MAX THE ELSE CONDITION SHOULD BREAK THE LOOP OF j
                else 
                break;
                
             }
             else
             continue;
         }
         
     }
     cout<<max;
 }