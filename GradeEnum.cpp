//Grade Calculator using switch

# include <iostream>
using namespace std;

int main()
{
     enum Grade{A1, A2, B1, B2, C1, C2};

     Grade grade;

     cout << "---GRADE CALCULATOR---" << endl;
    
    grade = A2;

     cout << "---RESULT---" << endl;
     switch(grade) //Switch begins here
     {
          case A1: cout << "You must score between 91 - 100 "
  << endl;
               break;
          case A2: cout << "You must score between 81 - 90 "
               << endl;
               break;
          case B1: cout << "You must score between 71 - 80 "
               << endl;
               break;
          case B2: cout << "You must score between 61 - 70 "
               << endl;
               break;
          case C1: cout << "You must score between 51 - 60 "
               << endl;
               break;
          case C2: cout << "You must score between 51 - 60 "
               << endl;
               break;

          default: cout << "Not a proper selection " << endl;
          
     }

}