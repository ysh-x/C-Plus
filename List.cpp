//List Operations 
// Author : Yogeshwar G
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class List
{
     public:
     vector <int> list;

     void print() //  Printing all the elements in the list
     {
          if(list.size()==0)
               cout << "[] -  EMPTY LIST " << endl;
          else
          {    
                 cout << "LIST ELEMENTS [ ";
                 for(auto a: list)
                 {
                      cout << a << "  ";
                 }   
                 cout << "] " << endl;
          }
               
     }

     void insert() //  Inserting all the elements in the list
     {
               int size;
               int temp;
               cout << "Number of Elements : ";
               cin >> size;
               for (int i=0; i<size; i++)
               {
                    cout << " ELEMENT " << i+1 << " : ";
                    cin >> temp;
                    list.push_back(temp);
               }
               cout << " STATUS: ELEMENT(S) SUCCESSFULLY INSERTED IN THE LIST \n ";
     }

     void mean() ////  Calculating Mean for all the elements in the list
     {
          double mean, total;
          if (list.size() == 0)
               cout << "[] -  EMPTY LIST " << endl;
          else
          {
               for(auto a: list)
               {
                    total+=a;
               }
               mean = static_cast <double> (total/list.size());
               cout << "TOTAL OF THE LIST : "  << total << endl;
               cout << "MEAN OF THE LIST IS : " << mean << endl;
          }
     }

     void smallest() //  Sorting the list and printing the smallest
     {
          int small = 1;
          if (list.size() == 0)
               cout << "[] -  EMPTY LIST " << endl;
          else
          {
               for (auto a: list)
               {
                    if(a<small)
                    {
                         small = a;
                    }
               }
               cout << " THE SMALLEST ELEMENT IN THE LIST IS : " << small << endl;
          }
     }

     void largest() //  Sorting the list and printing the largest
     {
          int large = 1;
          if (list.size() == 0)
               cout << "[] -  EMPTY LIST " << endl;
          else
          {
               for (auto a : list)
               {
                    if (a > large)
                    {
                         large = a;
                    }
               }
               cout << " THE SMALLEST ELEMENT IN THE LIST IS : " << large << endl;
          }
     }
} L; //  creating class object;

int main()
{
     char choice, exitKey;
     cout << "\n\n\t\t-------- LIST OPERATIONS --------\n\n\n";

     do
     {
          //Driver Menu
          cout << "\n\n\n___________________________________\nP. Print Numbers\nA. Add Number\nM. Display Mean\nS Display the Smallest\nL Display the Largest\nQ. Quit\n___________________________________\n";
          cin >> choice;
          //To ignore case-sensitivity
          choice = toupper(choice);
          switch (choice)
          {
               case 'P':
               {
                 L.print();
                 break;
               }
              case 'A':
              {
                   L.insert();
                   break;
              }
              case 'M':
              {
                   L.mean();
                   break;
              }
              case 'S':
              {
                   L.smallest();
                   break;
              }
              case 'L':
              {
                   L.largest();
                   break;
              }
              case 'Q':
              {
                   cout << "\n\n EXITING APPLICATION...." << endl;
                   exit(0);
              }
              default:
               cout <<"\n\n EXITING APPLICATION...." << endl;
               exit(0);
         }
         cout << " PRESS [.] TO EXIT, ANY KEY TO CONTINUE..\n\n";
          cin >> exitKey;
     } while (exitKey!='.');
     

}
