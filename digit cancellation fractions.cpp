#include<iostream>
#include<string>
#include<vector>
using namespace std;

int hcf(int n, int d)
{
    static int p;
    if(n==0)
    {
        return d; 
    }
    hcf(d%n, n);
}

int main()
{
    vector<int> v;
    int d=1,n=1;
    for(int i=11; i<=98; i++)
    {
        if(i%10!=0)
        {
            string a=to_string(i);
            for(int j=i+1; j<100; j++)
            {
                if(j%10!=0)
                {
                    string b=to_string(j);
                    int f=b.find(a[0]);
                    
                    if(f!=-1)
                    {
                        if((a[1]-'0')*j==(b[1-f]-'0')*i)
                        {
                            v.push_back(i);
                            v.push_back(j );
                            n=n*(a[1]-'0');
                            d=d*(b[1-f]-'0');
                        }
                    }
                    
                    f=b.find(a[1]);
                    if(f!=-1)
                    {
                        if((b[1-f]-'0')*i==(a[0]-'0')*j)
                        {
                            v.push_back(i);
                            v.push_back(j);
                            n=n*(a[0]-'0');
                            d=d*(b[1-f]-'0');
                            
                        }
                    }
                }
            }
        }
    }
     //cout<<v.size()<<endl;
    // for(auto r: v)
    // {
    //     cout<<r<<endl;
    // }
    cout<<n<<" "<<d<<endl;
    int h=hcf(n,d); 
    d=d/h;
    cout<<d;
    
    
}