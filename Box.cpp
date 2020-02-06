
//This Module Demostrates the Block Printing
//Author - Ysh-x
//06-02-2020
//India
//C++


#include<iostream>
#include<string.h>


using namespace std;

class Pattern
{
public:
	void print_a_box(char content[])
	{
		int length;
		int i;
		length = strlen(content);
		cout<<"+"; //Use of an connector (Upper)
		for(i=0;i<length;i++)
		{
			cout<<"-";
		}
		cout<<"+"<<endl; //Use of an connector (End)
		cout<<"|";
		cout<<content;
		cout<<"|"; 
		cout<<endl;
		cout<<"+"; //Use of an connector (Lower)
		for(i=0;i<length;i++)
		{
			cout<<"-"; //Use of an connector (End)
		}
		cout<<"+"<<endl;
		


	}
};

int main()
{
	Pattern P;
	int ch;
	char string[100];
	cout<<"\n\n\n\t\t\tBLOCK BOX";
	do
	{
		cout<<"\n\n\nSTRING TO BE PRINTED |> ";
		cin>>string;
		cout<<"\n\n\n+ OUTPUT \n\n\n";
		P.print_a_box(string);
		cout<<"PRESS [0] TO CONTINUE. [1] TO EXIT";
		cin>>ch;
		if(ch==1)
			exit(0);

		
	}while(1);

}
