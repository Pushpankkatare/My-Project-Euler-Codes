#include<iostream>
using namespace std;
// GCD of two numbers using euclidian algorithm
int gcdeuclidian(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    return gcdeuclidian(y,x%y);
}

int main()
{
    int x,y;
    cin>>x>>y;
  
    cout<< gcdeuclidian(x,y); 
}