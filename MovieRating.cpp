//Printing a movie Board using two diamensional Array
#include<iostream>

using namespace std;

int review[10][10] = {{5,4,5,5,5},{4,3,5,4},{4,3,2,1},{5,4,1,2}};
char movie[20][20] = {"EndGame","Inf-War","Smurf","Rataba"};
int main () {

     cout << "\t\tMovie - Board\n";

     cout << "Reviewer One\t\tTwo\t\tThree\t\tFour\n";
     for(int i=0; i<4; i++) {
          cout << movie[i];
          for(int j=0; j<4; j++) {
               cout <<"\t" << review[i][j] << "\t";
          }
          cout << "\n";
     }

}