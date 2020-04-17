/* Size and Values of the primitive types in C++
Author| Yogeshwar G*/

#include<iostream>
#include<climits>
#include<cfloat>

using std::cout;
using std::cin;
using std::endl;

int main()
{
     //Size Chart of all the primitive data types in C++ using ' Sizeof ' operator

     cout << "\t\tSize Chart\t\t" <<endl;
     cout << "Datatype\t| " <<"\t " << "Size(in Bytes)" << endl;
     cout << "Short Int\t| " <<"\t " << sizeof(short) << endl;
     cout << "Int\t\t| " <<"\t " << sizeof(int) << endl;
     cout << "Unsigned Int\t| " <<"\t " << sizeof(unsigned) << endl;
     cout << "Long Int\t| " <<"\t " << sizeof(long) << endl;
     cout << "Long Long Int\t| " <<"\t " << sizeof(long long) << endl;
     cout << "Float \t\t| " <<"\t " << sizeof(float) << endl;
     cout << "Double \t\t| " <<"\t " << sizeof(double) << endl;
     cout << "Long Double \t| " <<"\t " << sizeof(long double) << endl;
     cout << "Charecter\t| " <<"\t " << sizeof(char) << endl;
     cout << "Boolean\t\t| " <<"\t " << sizeof(bool) << endl;
     cout << endl <<endl;
       //range of all the primitive data types in C++
       cout<<"\t\tRange Table" << endl;
       cout << "Datatype\t| " <<"\t " << " Range " << endl;
       cout << "Int\t\t| " <<"\t " << INT_MIN << " TO "<< INT_MAX << endl;
       cout << "Char\t\t| " <<"\t " << CHAR_MIN << " TO "<< CHAR_MAX << endl;
       cout << "Short\t\t| " <<"\t " << SHRT_MIN << " TO "<< SHRT_MAX << endl;
       cout << "Long\t\t| " <<"\t " << LONG_MIN << " TO "<< LONG_MAX << endl;
       cout << "L Long\t\t| " <<"\t " << LLONG_MIN << " TO "<< LLONG_MAX << endl;
       cout << "Float\t\t| " <<"\t " << FLT_MIN << " TO "<< FLT_MAX << endl;
     
     return 0;
}
