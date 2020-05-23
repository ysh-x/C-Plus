#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector <int> list;
     int size, temp;

     cout << "Size of Data : ";
     cin >> size;

     for(int i=0; i<size; i++)
     {
        cin >> temp;
        list.push_back(temp);

     }
     cout <<"\t\tHISTOGRAM\n\n\n";
     cout <<"\t\tVALUE | HISTOGRAM \n\n";
     for(auto a: list)
     {
          cout <<"\t" << a; 
          for(int i=0;i<a;i++)
          {
               if(i%5==0)
                    cout << "o";
               else
                    cout <<"-";
          }
          cout << " * "<<endl;
     }
}