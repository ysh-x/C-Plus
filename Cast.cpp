// A program to explicitly type cast an expression
# include <iostream>

using namespace std;

int main()
{
     int numberOne, numberTwo, numberThree;
     cout << "Three marks: ";
     cin >> numberOne;
     cin >> numberTwo;
     cin >> numberThree;

     double sum, average;
     sum = static_cast <double> (numberOne + numberTwo + numberThree);
     average = static_cast <double> (sum/3); //Type casting from int to double;
     

     cout << " SUM: " << sum << endl;
     cout << " AVG: " << average << endl;
}