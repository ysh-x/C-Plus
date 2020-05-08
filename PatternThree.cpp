//Program to print box pattern

#include<iostream>

int main()
{
	int pattern[4][4] //Initialisting the patter board
	{
		{1,1,1,1},
		{1,0,0,1},
		{1,1,1,1},

	};

	int i,j; // Declaring iterators

	std::cout << " Pattern " << std::endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(pattern[i][j]==1)
			{
				std::cout << "*"; // Printing the "On" values
			}
			else
			{
				std::cout << ' '; // Printing the "Off" values
			}
		}

		std::cout << std::endl; // Used to terminate a column
	}
}