#include<iostream>
#include<cstring>
using namespace std;
// double hashing

int p=7;

class Hash
{
    private:
    int *table;
    int bucket;
    
    public:
    Hash(int x);
    void doublehash(int x);
    
    int hash1func(int x)
    {
        return x%bucket;
    }
    int hash2func(int x)
    {
        return p-(x%p);
    }
    void display();
    void deleteval(int x);
};

Hash::Hash(int x)
{
    bucket=x+1;
    table=new int[bucket];
    //memset(table, -1, bucket);
    for(int i=0; i<bucket; i++)
    table[i]=-1;
}

void Hash::doublehash(int x)
{
    int h1=hash1func(x);
    int h2=hash2func(x);
    int y=h1;
    int i=1;
    while(table[y]!=-1)
    {
        y=(h1+(i*h2))%bucket;
        i++;
    }
    table[y]=x;
}

void Hash::display()
{
    for(int i=0; i<bucket; i++)
    {
        cout<<i;
        if(table[i]!=-1)
        cout<<"-->"<<table[i];
        cout<<"\n";
    }
}

void Hash::deleteval(int x)
{
    int h1=hash1func(x);
    int h2=hash2func(x);
    int y=h1;
    int i=1;
    
    while(table[y]!=x)
    {
        if(table[y]==-1)
        {
            cout<<x<<"is not present\n";
            return;
        }
        y=(h1+(i*h2))%bucket;
        i++;
    }
    table[y]=-1;
}

int main()
{
    int a[]={19, 27, 36, 10, 64};
    int n=sizeof(a)/sizeof(a[0]);
    Hash h(n);
    
    for(int i=0; i<n; i++)
    {
        h.doublehash(a[i]);
    }
    
    h.deleteval(9);
    h.deleteval(9);
    
    h.display();
    
}