//PointOfSale for E-commerce
//Yogeshwar G (Ysh.x}
#include<iostream>

using namespace std;

template<class T>
void calculate(string products[], T price[], T quantity[], T number)
{
     T masterPrice;
     T masterQuantity;
     T loyalPrice;

     for(int i=0;i<number;i++)
     {
          masterPrice = masterPrice + (quantity[i] * price[i]);
          masterQuantity = masterQuantity + quantity[i];
     }
    
     cout << "MP " << masterPrice << endl;

     if(masterQuantity>1 && masterQuantity<5)
     {
          loyalPrice = 3;
     }
     else if(masterQuantity>5 && masterQuantity<10)
     {
          loyalPrice = 7;
     }
     else if (masterQuantity > 11 && masterQuantity < 20)
     {
          loyalPrice = 7;
     }
     else if (masterQuantity > 21 && masterQuantity < 30)
     {
          loyalPrice = 7;
     }
     else
     {
          loyalPrice = 0;
     }

     for(int i=0; i<number;i++)
     {
          cout <<"Product Name : "<< products[i] << "    Quantity:  " << quantity[i] << "   Price:  INR " << price[i] << endl;
     }
     cout << "___________________________________________________________" << endl;
     cout << "Products Purchased :  INR " << masterQuantity << endl;
     cout << "Total Amount : INR " << masterPrice << endl;
     cout << "Loyal Points dedcution:  INR " << loyalPrice;

     if(loyalPrice==0)
     {
          cout << endl
               << endl;
          cout << "Cannot Deduct Right Now!!! ";
     }
     else
     {
          masterPrice -= loyalPrice;
     }

     cout << endl
          << endl;
     cout << "___________________________________________________________" << endl;
     cout << "Final Amount:  INR" << masterPrice;


}

int main()
{
    
     float number;
     int ID;
     string name;
     string pName[20];
     float quantity[20];
     float price[20];
     float loyalPoints[20];
     float balance;
     //Gygshwr
    
     cout << " Name : ";
     cin >> name;
     cout << " Customer ID : ";
     cin >> ID;
     cout << " Number of Products : ";
     cin >> number;
     cin.ignore();
     for(int i=0; i<number;i++)
     {
          cout <<"Product Name : ";
          cin >> pName[i];
          cout << "Product Price : ";
          cin >> price[i];
          cout << "Product Quantity : ";
          cin >> quantity[i];
     }

    
     cout <<"\n\n\nGenerating Bill......\n\n";
     cout<<"-------------------ESTIMATE----------------------" << endl;
     cout <<"Customer Name:  " << name << endl;
     cout <<"Customer ID:     "<< ID << endl;
     cout << endl;
     cin.ignore();
     calculate(pName, price, quantity, number);
}

