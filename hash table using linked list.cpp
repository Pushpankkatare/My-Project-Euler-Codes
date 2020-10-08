#include<iostream>
#include<list>
using namespace std;
//code for printing Hash table with similar keys using linked list

class Hash
{
    private:
    int bucket;
    list<int> *table;
    
    public:
    Hash(int x);//constructer
    void insertval(int y);
    int Hashfunct(int z)
    {
        return z%bucket;
    }
    void deleteval(int a);
    
    void displayht();
};

Hash::Hash(int x)
{
    bucket=x;
    table= new list<int>[bucket];
}

void Hash::deleteval(int x)
{
    int index=Hashfunct(x);
    auto it=table[index].begin();
    for(it; it!=table[index].end(); it++)
    {
        if(*it==x)
        break;
    }
    if(it!=table[index].end())
    {
        table[index].erase(it);
    }
    
}

void Hash::insertval(int x)
{
    int index=Hashfunct(x);
    table[index].push_back(x);
}

void Hash::displayht()
{
    for(int i=0; i<bucket; i++)
    {
        cout<<i;
        for(auto it=table[i].begin(); it!=table[i].end(); it++)
        {
            cout<<"--->"<<*it;
        }
        cout<<"\n";
    }
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
    Hash h(7);
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n ; i++)
    {
        h.insertval(a[i]);
    }
    
    h.deleteval(10);
    
    h.displayht();
}