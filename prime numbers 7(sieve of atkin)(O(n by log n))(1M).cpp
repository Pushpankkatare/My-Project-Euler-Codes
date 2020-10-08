#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void atkins(int n)
{
    vector<int> prime; 
    // prime[0]=2;
    // prime[1]=3;
    // prime[2]=5;
    prime.push_back(2);
    prime.push_back(3);
    //prime.push_back(5);
    for(int i=1; i*i*4<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int m=(4*i*i)+(j*j);
            if( (m%12==1 || m%12==5 ) && m<=n)
            {
                prime.push_back(((4*i*i)+(j*j)));
            }
            m=(3*i*i)+(j*j);
    
            if (((3*i*i)+(j*j))%12==7 && m<=n)
            {
                prime.push_back((3*i*i)+(j*j));
            }
            m=(3*i*i)-(j*j);
            if (((3*i*i)-(j*j))%12==11 && m<=n && i>j)
            {
                prime.push_back(((3*i*i)-(j*j)));
            }
        }
    }
    sort(prime.begin(), prime.end());
    // for(int i=0; i<prime.size(); i++)
    // {
    //     cout<<prime[i]<<" ";
    // }
    cout<<prime.back();
    
}

int main()
{
   int n;
   cin>>n;
   atkins(n);  
}