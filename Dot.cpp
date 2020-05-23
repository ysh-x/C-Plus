//Press . to exit

#include <iostream>

using namespace std;

int main()
{
     char exitKey;
     int count = 0;

     do
     {
         cout << "Hello. This is  " << count << " Time of iteration " << endl;
         cout << "Press [.] to exit, Other key to continue";
         cin >> exitKey;
          ++count;
     } while (exitKey!='.');
     

}