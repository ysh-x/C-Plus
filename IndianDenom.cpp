// A program to use statements and expressions
// Indian denominator calculator

//Psuedo code :
// First divide the denomination by the total to find the number of notes
// Use the reminder obtained as a balance for lower denominations
//Follow the steps until you attain unity
#include <iostream>

using namespace std;

int main()
{
     long int total, balance;
     int twoThousand, fiveHundred, hundred, fifty, ten, coins;

     cout << "Amount (In Rupees) :  ";
     cin >> total;

     balance = total;

     twoThousand = total/2000;
     balance = total%2000;

     fiveHundred = balance/500;
     balance = balance%500;

     hundred = balance/100;
     balance = balance%100;

     fifty = balance/50;
     balance = balance%50;

     ten = balance/10;
     balance =balance%10;
     
     coins = balance;

     cout << "\n\t DENOMINATIONS \n\n";
     cout << "2000 x   "  << twoThousand << endl;
     cout << "500 x    "  << fiveHundred << endl;
     cout << "100 x    "  << hundred <<endl;
     cout << "50 x     "  << fifty <<endl;
     cout << "10 x     "  << ten <<endl;
     cout << "1 x      "  << coins << endl;

}