//Grade Calculator using switch

# include <iostream>
using namespace std;

int main()
{
     char grade;

     cout << "---GRADE CALCULATOR---" << endl;
     cout << "Grade you expect to score in your exam : ";
     cin >> grade; // Inputting the grade 

     cout << "---RESULT---" << endl;
     switch(grade) //Switch begins here
     {
          case 'A': cout << "You must score between 91 - 100 "
  << endl;
               break;
          case 'B': cout << "You must score between 81 - 90 "
               << endl;
               break;
          case 'C': cout << "You must score between 71 - 80 "
               << endl;
               break;
          case 'D': cout << "You must score between 61 - 70 "
               << endl;
               break;
          case 'E': cout << "You must score between 51 - 60 "
               << endl;
               break;
          default: cout << "Not a proper selection " << endl;
          
     }

}