#include <iostream>
#include<map>
#include<string>
using namespace std;


int main() 
{
	int n;
	cin>>n;
	int max=0,count=0,ans;
	for(int i=2; i<n; i++)
	{
	    int rmdr=1;
	    map<int, int>a;
	    string s;
	    while(rmdr!=0)
	    {
	        int k=(rmdr*10)/i;
	        s=s+to_string(k);
	        rmdr=(rmdr*10)%i;
	        auto it=a.find(rmdr);
	        
	        if(it!=a.end())
	        {
	            if(max<s.length()-a[rmdr])
	            {
	                max=s.length()-a[rmdr];
	                ans=i;
	  
	            }
	            break;
	        }
	        else if(rmdr==0)
	        {
	            break;
	        }
	        else 
	        a[rmdr]=s.length();
	        count++;
	        
	    }
	}
	
    cout<<max<<" "<<ans;
}
