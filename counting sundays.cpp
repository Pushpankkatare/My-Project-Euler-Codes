#include<iostream>
#include<algorithm>
using namespace std;
//finding no. of the given day on the first of month
int main()
{
    int year, day,date, yearfrom, dayfrom,datefrom,  daytbf, tillyear;
    cin>>year>>day>>date>>yearfrom>>datefrom>>daytbf>>tillyear;
    
    dayfrom=(((365)-date)%7+day)%7 ;
    dayfrom++;
    cout<<dayfrom;
     int counter=0;
     int k=(daytbf-dayfrom);
     if (k<0)
     k+=7;
     //cout<<k;
     int datetbf=datefrom+(k);
     cout<<datetbf;
    //int k=abs(-dayfrom+1);
    int count=32-datetbf;
    
    for(int i=yearfrom; i<=(tillyear); i++)
    {
        for(int j=1; j<=12; j++)
        {
            if(j==1 || j==3|| j==5|| j==7|| j==8|| j==10 || j==12)
            {
                if(i==yearfrom && j==1)
                {
                    
                }
                else
                count=count+31;
                if((count%7)==0)
                {
                    counter++;
                   // cout<<"hi"<<endl;
                    //k=1;
                    //count=1;
                }
            }
            else if(j==2)
            {
                if(i%4==0)
                {
                    count=count+29;
                    if((count%7)==0)
                    {
                        counter++;
                        //k=1;
                        //count=1;
                        //cout<<"hello"<<endl;
                    }
                }
                else  
                {
                   count=count+28;
                    if((count%7)==0)
                    {
                        counter++;
                        //k=1;
                        //count=1;
                        //cout<<"hello"<<endl;
                    } 
                }
            }
            else
            {
                 count=count+30;
                    if((count%7)==0)
                    {
                        counter++;
                        //k=1;
                        //count=1;
                        //cout<<"goku"<<endl;
                    } 
            }
        }
    }
    cout<<counter;
}







#include<stdio.h>
int main() {
  int year=1901;
  int ndays[]={31,28,31,30,31,30,31,31,30,31,30,31};
  int k=0;
  int total=0;
  int i;
  for(i=0;i<12;i++)
    k+=ndays[i];
  for(year=1901;year<2001;year++) {
    if(!(year%4) || (!(year%100)&& !(year%400))) 
      ndays[1]=29;
    else 
      ndays[1]=28;
    for(i=0;i<12;i++) {
      if(!((k-1)%7)) {
	total++;
      }
      k+=ndays[i];
    }
  }
  printf("%d",total);
}