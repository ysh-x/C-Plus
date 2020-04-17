//C++ Program to find your lucky number
//Author - Yogeshwar Ganesh
#include<iostream>

using namespace std;

int main()
{
     int sum,num,i,dig;
     sum=0;
     cout<<"Your Birth-date | ";
     cin>>num;
     while(num!=0)
     {
          dig=num%10;
          sum=sum+dig;
          num=num/10;
     }
     cout<<endl<<"Gotcha! Your lucky Number is "<<sum<<endl;
     
}