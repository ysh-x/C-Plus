//Linear search using while loop

# include <iostream>
# include <vector>
using namespace std;

int main()
{
     vector <int> list;
     int size;
     int index = 0;
     int temp;
     int search;

     cout << "Number of Elements : ";
     cin >> size; //Getting the sizeof the list

     for(int i=0; i<size; i++)
     {
          temp = 0;
          cout << "Element " << i+1  <<" : " << endl;
          cin >> temp;
          list.push_back(temp);
     }
     cout << " Element to be searched : " << endl; //Element to be searched
     cin >> search;

     //To prevent overflow of the loop we add the first condition. 
     //The loop exits when the element is found 
     //While loop exits the loop only if the expression is false. So we use ! operator
     

     while(index < list.size() && list.at(index)!= search) 
     {
          ++index;
     }
     if(index==list.size())
          cout << "\nResult : Element not found\n";
     else     
          cout << "\nResult: Element found at position " << index+1 << endl;
}