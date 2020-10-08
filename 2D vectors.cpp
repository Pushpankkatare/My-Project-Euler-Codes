#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>> myvect;
    int i;
    for( i=0; i<n; i++)
    {
        int size=0,val;
        cin>>size;
        vector<int> ro;
        for(int j=0; j<size; j++)
        {
            cin>>val;
            
            ro.push_back(val);
        }
        myvect.push_back(ro);
    }
    for(int p=0; p<q; p++)
    {
        int c,d;
        cin>>c>>d;
        cout<<myvect[c][d]<<endl;

    }    
}
