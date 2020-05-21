//Creating  Class average using vectors;

#include <iostream>
#include <vector>

int main()
{
	int number,outOf;
	float classAverage;
	float temp, total;
	std::vector <float> marks;

	std::cout << "Number of students in your class: ";
	std::cin >> number;

	std::cout << "Maximum marks awarded: ";
	std::cin >> outOf;

	int y;
	for(y=0; y<number; y++)
	{
		std::cout << "Mark of Student " << " (" << y+1  << ") : ";
		std::cin >> temp;
		marks.push_back(temp);
		temp = 0; 
	}

	classAverage = total = 0;
	for(y=0; y<number; y++)
	{
		total+= marks[y];
	}
	classAverage = total/number;


	std::cout << "\t\t-----------------RESULT---------------\t\t\n";
	for(y=0; y<number; y++)
	{
		std::cout << "Mark of Student " << " ( " << y+1  << " ) : " << marks[y] << std::endl;
	}

	std::cout <<" The total of the entire class: " << total << " / " << (outOf * number) << std::endl;
	std::cout << "The class average of the entire class is: " << classAverage << std::endl;


}
