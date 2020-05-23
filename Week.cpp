//Days of the week using switch statement

#include <iostream>
using namespace std;

void displayDay(int day_code) {
    //----WRITE YOUR CODE BELOW THIS LINE----

    cout << "It's ";
    switch(day_code)
    {
        case 0: cout<<"Sunday" << endl; break;
        case 1:
             cout << "Monday" << endl;
             break;
        case 2:
             cout << "Tuesday" << endl;
             break;
        case 3:
             cout << "Wednesday" << endl;
             break;
        case 4:
             cout << "Thursday" << endl;
             break;
        case 5:
             cout << "Friday" << endl;
             break;
        case 6:
             cout << "Saturday" << endl;
             break;
        default:
             cout << "Error - illegal day code" << endl;
    }
    
    
    
}

int main()
{
     int code;
     cout << "Code of the week: " << endl;
     cin >> code;
     displayDay(code);
     

}