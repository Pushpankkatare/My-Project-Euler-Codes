 //#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//string store;
void permutestring(string s, int limit, int r)
{
    if(limit==r)
    {
        cout<<s<<endl;
    }
    for(int i=limit; i<r; i++)
    {
        swap(s[limit], s[i]);  
        //store.push_back(s[limit]);
        permutestring(s,limit+1,r);
        //store.pop_back();
        swap(s[limit], s[i]); // backtracking
    }
}

void permutestrngrotate(string s, int limit, int r)
{
    if(limit==r-1)
    {
        cout<<s;
        cout<<endl;
        return;
    }
    
    for(int i=limit; i<r; i++)
    {
        permutestrngrotate(s , limit+1, r);
        rotate(s.begin()+limit, s.begin()+limit+1, s.end());
    }
}

void nextpermute(string s)
{
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
        //next_permutation(s.begin(), s.end());
    }
    while( next_permutation(s.begin(), s.end()));
}

int main()
{
    string s;
    cin>>s;
      
      //permutestring(s,0, s.length());
    //permutestrngrotate(s, 0, s.length());
      nextpermute(s);
}