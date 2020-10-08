#include<iostream>
using namespace std;
    int ones[10]={0,3,3,5,4,4,3,5,5,4};
    int ten[10]={3,6,6,8,8,7,7,9,8,8};
    int twenty[8]={6,6,5,5,5,7,6,6};
    int hundred = 7;
    int nd=3;
    int thousand=8;
    
    
int onesfunct(int &i, int n)
{
    int sum=0;
            for(int j=0; j<10 && i<=n; j++)
            {
                sum+=ones[j];
                i++;
            }
            return sum;
}
int tenfunct(int &i, int n)
{
    int sum=0;
            for(int j=0; j<10 && i<=n; j++)
            {
                sum+=ten[j];
                i++;
            }
            return sum;
}
int twentyfunct(int &i, int n)
{
    int sum=0;
            for(int j=0; j<8 && i<=n; j++)
            {
                int p=i;
                sum+=onesfunct(i,n);
                sum+=twenty[j]*(i-p);
            }
            return sum;
}
int hundredfunct(int &i, int n)
{
    int sum=0;
            for(int j=1; j<10 && i<=n; j++)
            {
                int p=i;
                sum=sum+onesfunct(i,n);
                sum=sum+tenfunct(i,n);
                sum=sum+twentyfunct(i,n);
                sum=sum+((hundred+ones[j])*(i-p))+((nd)*(i-p-1));
            }
            return sum;
}

int main()
{
    int n;
    cin>>n;
    long long sum=0;
    int i;
    for(i=0; i<=n; )
    {
        if(i==0)
        {
            sum+=onesfunct(i, n);
        }
        else if(i==10)
        {
            sum+=tenfunct(i, n);
        }
        else if(i==20)
        {
            sum+=twentyfunct(i,n);
        }
        else if(i==100)
        {
            sum+=hundredfunct(i, n);
        }
        else if(i==1000)
        {
            sum+=thousand+3;
            i++;
        }
        
    }
    cout<<sum;
}





/*better sol

s={0:"",1:"one",2:"two",3:"three",4:"four",5:"five",6:"six"/
,7:"seven",8:"eight",9:"nine",10:"ten",11:"eleven"/
,12:"twelve",13:"thirteen",14:"fourteen",15:"fifteen"/
,16:"sixteen",17:"seventeen",18:"eighteen",19:"nineteen"/
,20:"twenty",30:"thirty",40:"forty",50:"fifty"/
,60:"sixty",70:"seventy",80:"eighty",90:"ninety"}
for i in range(1,1000):
	if(not i in s.keys()):
		if(i<100):
			s[i]=s[i/10*10]+s[i%10]

		else:
			s[i]=s[i/100]+"hundred"
			if(i%100):
				s[i]+="and"+s[i%100]
s[1000]="onethousand"
total=0;
 for i in s.values():
	total+=len(i)
	
	