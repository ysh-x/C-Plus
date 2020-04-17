#include<iostream>

using namespace std;

int main()
{
    char a[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i%2==0 || j%3==0)
            {
                a[i][j]='*';
            }
            else
            {
                a[i][j]=' ';
            }
          }
    }

     for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
 }
    
        
    
    
    
