#include <iostream>

using namespace std;

int main()
{
     int i,j;
     int rows;
     int number = 1;
    
     cout << " \n Number of Rows";
     cin >> rows;

     for(i=0; i<=rows;i++)
     {
          for(j=0;j<i;j++)
          {
               cout <<number << " ";
               number++;
          }
          cout << "\n";
     }


}