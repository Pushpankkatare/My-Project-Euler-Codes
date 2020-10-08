#include<iostream>
using namespace std;
//extended eulclidian algo to find hcf and coifficients;

int extendedeuclidian(int a, int b, int*x, int *y)
{
    if(a==0)
    {
        *x=0; *y=1;
        return b;
    }
   
    int x1,y1;
    int h=extendedeuclidian(b%a, a, &x1, &y1);
    *x=y1-(x1*(b/a));
    *y=x1;
    return h;
}

int main()
{
    int a,b; cin>>a>>b;
    int x,y;
    int h=extendedeuclidian(a,b,&x,&y);
    cout<<x<<" "<<y<<" "<<h;
}