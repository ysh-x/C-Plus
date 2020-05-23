
#include<iostream>
#include<vector>

int main()
{
	std::vector<int> students;
	int number, i;
	int student;
	float sum, average;

	std::cout << "Number of Students:	";
	std::cin >> number;

	for(i=0; i<number; i++)
	{
		std::cout <<"Mark of Student " << i+1 << ":	";
		std::cin>>student;
		students.push_back(student);
		
	}
	for(int i:students)
	{
		sum = sum+i;
	}

	average = sum/number;

	std::cout << "Class average:	" << average;

}