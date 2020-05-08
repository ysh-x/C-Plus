//Program to print heart pattern

#include<iostream>

int main()
{
	int pattern[10][20] //Initialisting the patter board
	{
		
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,1,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0},
		{0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
		{0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0},
		{0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},


		

	};

	int i,j; // Declaring iterators

	std::cout << " This heart is made of Pixels " << std::endl;
	for(i=0;i<10;i++)
	{
		for(j=0;j<20;j++)
		{
			if(pattern[i][j]==1)
			{
				std::cout << "•"; // Printing the "On" values
			}
			else
			{
				std::cout << ' '; // Printing the "Off" values
			}
		}

		std::cout << std::endl; // Used to terminate a column
	}
}