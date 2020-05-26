#include <iostream>

using namespace std;

int main()
{
     int i,j;
     int rows;

    
     cout << " \n Number of Rows";
     cin >> rows;
     for(i=0; i<=rows;i++)
     {
          for(j=0;j<i;j++)
          {
               cout <<"*";
          }
          cout << "\n";
     }
     for(i=rows; i>=0;i--)
     {
          for(j=0;j<i;j++)
          {
               cout <<"*";
          }
          cout << "\n";
     }


}