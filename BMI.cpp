//BMI Calculator
//Author: Yogeshwar.G

#include<iostream>
#include<math.h>
#include<string.h>
class BMI
{
	

public:
		float BMI;
		float height, weight, weightRangeOne, weightRangeTwo, recommend;
		char status[30];
		char advice[200];

		void getDetails()
		{
			std::cout << std::endl << std::endl;
			std::cout << "\t\t\tBMI BOT xD ";
			std::cout << "\n\n\t\t Version 1.0 (Created by: Ysh.x)" << std::endl;
			std::cout << "Height(In Cm):	";
			std::cin >> height;
			std::cout << "Weight(In Kg):	";
			std::cin >> weight;
			height/=100;

		}

		void calculate()
		{
		
			BMI = (weight/ pow(height,2));
			weightRangeOne = (18.5*pow(height,2));
			weightRangeTwo = (24.9*pow(height,2));
			recommend = weight - weightRangeTwo;

			if(BMI<18.5)
			{
				strcpy(status,"UnderWeight");
			}
			else if(BMI>18.5 && BMI<24.9)
			{
				strcpy(status,"Healthy");
			}
			else if(BMI>25.0 && BMI<29.9)
			{
				strcpy(status,"OverWeight");
			}
			else
			{
				strcpy(status,"Obese");
			}

			if(strcmp(status,"UnderWeight")==0)
			{
				strcpy(advice,"Eating carb-rich food can help you improve your fitness :(");
			}
			else if(strcmp(status,"Healthy")==0)
			{
				strcpy(advice,"You are healthy and perfect! Maintain your fitness :)");
			}
			else if(strcmp(status,"OverWeight")==0)
			{
				strcpy(advice,"A diet plan maybe perfect for you. Consider some bland food :)");
			}
			else 
			{
				strcpy(advice,"I am sorry to say this. Some how you have to reduce weight :(");
			}


		}

		void display()
		{
			getDetails();
			calculate();
			std::cout << std::endl << std::endl;
			std::cout << "-------------------BMI CHART---------------" << std::endl;
			std::cout << "Height: " << height << " Cms " << std::endl;
			std::cout << "Weight: " << weight << " Kgs " << std::endl;
			std::cout << "Your BMI is:	" << (BMI) << " Kg/Cm^2 " << std::endl;
			std::cout << "Status: " << status << std::endl;
			std::cout << "Advice:	" << advice << std::endl << std::endl;
			std::cout << "Recommendation:\n	Your weight should be around " << round(weightRangeOne) << " to " << round(weightRangeTwo) << "Kgs" << std::endl;
			if(recommend>0)
			{
				std::cout << "\tYou need to reduce " << recommend << "Kg(s) " << std::endl;
				std::cout << "____________________________________________" << std::endl;
			}	
			else
			{
				std::cout << "____________________________________________" << std::endl;
			}	
			

		}
	
};

int main()
{
	BMI B;
	B.display();
}