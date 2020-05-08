//A program to use all  size of integers in C++

#include<iostream>

int main()
{
	char name[25];
	int age;
	long phone;
	float height;
	
	std::cout << std::endl << " Sign-In " << std::endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Age: ";
	std::cin >> age;
	std::cout << "Phone: ";
	std::cin >> phone;
	std::cout << "Height: ";
	std::cin >> height;

	std::cout  << " Phone Book " << std::endl;
	std::cout << " Name 	|  " << name << std::endl;
	std::cout << " Age  	|  " << age << std::endl;
	std::cout << " Phone 	|  " << phone << std::endl;
	std::cout << " Height |  " << height << std::endl << std::endl;

	std::cout  << " Data Consumption " << std::endl;
	std::cout << " Name 	|  " << sizeof(name) << " Bytes " << std::endl;
	std::cout << " Age  	|  " << sizeof(age) << " Bytes " << std::endl;
	std::cout << " Phone 	|  " << sizeof(phone) << " Bytes " << std::endl;
	std::cout << " Height |  " << sizeof(height) << " Bytes " << std::endl;



}