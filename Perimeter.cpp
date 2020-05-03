//Given a length of a wire, Calculate the length of each side of a Eqi-Triangle, Sqaure and the radius
//Use the concept of OOPS wherever required

//Author:Yogeshwar.G
#include<iostream>

class Shape
{
     
     float length; // The varible of length can only be accessed within the class "Shape"

     public: //The public access specifier

     // Function to calculate the lengths
     void square(float perimeter) 
          {
               length = perimeter / 4;
               std::cout << "We could create a square of length " << length << " cm " << std::endl;
     }
     void triangle(float perimeter)
     {
          length = perimeter / 3;
          std::cout << "We could create an equilateral triangle of length " << length << " cm " << std::endl;
     }
     void circle(float perimeter)
     {
          length = perimeter / (2*3.14);
          std::cout << "We could create a circle with  of radius " << length << " cm " << std::endl;
     }
     
};

int main()
{
     float perimeter;

     //Feeding the perimeter to the input
     std::cout << "Length of the wire (in Cm ): " << std::endl;
     std::cin >> perimeter;

     //Creating the object for the class " Shape "
     Shape S;

     //Function calling s
     S.circle(perimeter);
     S.triangle(perimeter);
     S.square(perimeter);

     //Test display
     std::cout << " Execution Successful " << std::endl;
     return 0;


}