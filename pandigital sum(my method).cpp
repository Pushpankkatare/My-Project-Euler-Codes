#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
vector<int> seq;
vector<int> usb;
string pan={"123456789"};
int power[]={1,10,100,1000,10000,100000,1000000};
int combinations(int limit, int a)
{ 
    if(a==0)
    {
        int sum=0;
        for(int i=0; i<seq.size(); i++)
        {
            sum=sum+(seq[i]*power[seq.size()-i-1]);
        }
        usb.push_back(sum);
        return 0;
    }
    for(int i=limit; i<=9-a; i++)
    {
        seq.push_back(i+1);
        combinations(i+1, a-1);
        seq.pop_back();
    }
}

int main()
{
    int a,b,n;
    int ans=0;
    n=9;a=2;b=3;
    vector<int> answer;
    combinations(0,a);
    vector<int> val1(usb);
    usb.clear();
    combinations(0,b);
    vector<int> val2(usb);
    usb.clear();
    for(int i=0; i<val1.size(); i++)
    {
        string s=to_string(val1[i]);
        do
        {
            for(int j=0; j<val2.size(); j++)
            {
                string w=to_string(val2[j]);
                do
                {
                    int x=stoi(s);
                    int y=stoi(w);
                    int prod=x*y;
                    string q=to_string(prod);
                    q=q+s+w;
                    sort(q.begin(), q.end());
                    if(q==pan)
                    {
                        answer.push_back(prod);
                    }
                }
                while(next_permutation(w.begin(),w.end()));
            }
        }
        while(next_permutation(s.begin(),s.end()));
    }
    
    a=1;b=4;
    combinations(0,a);
    vector<int> val3(usb);
    usb.clear();
    combinations(0,b);
    vector<int> val4(usb);
    //usb.clear();
    for(int i=0; i<val3.size(); i++)
    {
        string s=to_string(val3[i]);
        do
        {
            for(int j=0; j<val4.size(); j++)
            {
                string w=to_string(val4[j]);
                do
                {
                    int x=stoi(s);
                    int y=stoi(w);
                    int prod=x*y;
                    string q=to_string(prod);
                    q=q+s+w;
                    sort(q.begin(), q.end());
                    if(q==pan)
                    {
                        answer.push_back(prod);
                    }
                }
                while(next_permutation(w.begin(),w.end()));
            }
        }
        while(next_permutation(s.begin(),s.end()));
    }
    sort(answer.begin(), answer.end());
    answer.push_back(0);
    for(int x=0; x<answer.size(); x++)
    {
        if(answer[x]!=answer[x+1])
       { 
           ans=ans+answer[x];
           cout<<answer[x]<<endl;
       }
    }
    cout<<ans;
}