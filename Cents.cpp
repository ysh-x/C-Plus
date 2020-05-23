// A program to use statements and expressions
//Cents to American currency calculator

//Psuedo code :
// First divide the denomination by the total to find the number of notes
// Use the reminder obtained as a balance for lower denominations
//Follow the steps until you attain unity 
# include <iostream>

using namespace std;

int main()
{
     int total, balance;
     int dollar, dime, quarter, nickel, penny;

     cout << "Amount (In cents) :  ";
     cin >> total;
     
     dollar = total/100;
     balance = total%100;

     quarter = balance/25;
     balance = balance%25;

     dime = balance/10;
     balance = balance%10;

     nickel = balance/5;
     balance = balance%5;

     penny = balance;
     
     cout << "\n\t DENOMINATIONS \n\n";
     cout << "Dollar     : " << dollar << endl;
     cout << "Quarter    : "<< quarter << endl;
     cout << "Dime       : " << dime <<endl;
     cout << "Nickel     : " << nickel <<endl;
     cout << "Penny      : "<< penny <<endl;

}
