# include <iostream>
# include <vector>
# include <math.h>

class Calculator
{
	public:
		std::vector<double> history;

		void calculate()
		{
			double firstOperand, secondOperand, Result;
			char Operator;

			std::cout << "Expression: ";
			std::cin >> firstOperand;
			std::cin >> Operator;
			std::cin >> secondOperand;
			if (Operator == '+')
			{
				Result = firstOperand + secondOperand;
			}
			else if (Operator == '-')
			{
				Result = firstOperand - secondOperand;
			}
			else if (Operator == '*')
			{
				Result = firstOperand * secondOperand;
			}
			else if (Operator == '/')
			{
				Result = firstOperand / secondOperand;
			}
			else if (Operator == '%')
			{
				Result = int(firstOperand) % int(secondOperand);
			}
			else if (Operator == '^')
			{
				Result = pow(firstOperand, secondOperand);
			}
			else if (Operator == '>')
			{
				Result = (firstOperand > secondOperand ? 1 : 0);
			}
			else if (Operator == '<')
			{
				Result = (firstOperand < secondOperand ? 1 : 0);
			}

			std::cout << "________________________\n" << "Answer | " << Result << std::endl << std::endl;

			history.push_back(Result);

		
	}

	void viewHistory()
	{
		std::cout << std::endl << " You made " <<history.size() << " calculations " << std::endl;
		for(int y=0; y<(history.size()); y++)
		{
			std::cout << history[y] << std::endl;
		}
	}
}C;

int main()
{
	char desc;
	int choice;
	std::cout << " \t\t +-Ysh.x Calculator-+\n \t\t  +-Version 1.0-+ \n \t\t-----Please Select your option---- " << std::endl;

	do
	{
		std::cout << "\n \t\t[Menu]\n \t\t+-1.Calculate-+ \n \t\t+-2.View History-+" << std::endl << std::endl;
		std::cin >> choice;
		if(choice == 1)
		{
			C.calculate();
		}
		else if(choice == 2)
		{
			C.viewHistory();

		}
		else
		{
			std::cout << "\n \t\t Wrong Selection.\n \t\t Exiting the application" << std::endl;

		}
		
	 	std::cout << "Do you want to Continue ? Y/N ";
	 	std::cin >> desc;

	 }while(desc=='Y' || desc=='y');
	 std::cout << "\n \t\t Exiting the application" << std::endl;
	 return 0;
}