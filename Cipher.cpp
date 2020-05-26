//Encrypting and decrypting using substitution cipher
//Ysh.x

#include <iostream>
#include <string>

using namespace std;

class Cipher
{
     public:
     string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890"}; //The actual letters
     string key {"qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()_+-={}|:;<>,.?~`"}; // Key for substitution cipher
     string code;
     string secret;
     string reverse;
     void encrypt()
     {
          string str;

          cout << "Please enter your name: \n";
      
               size_t index;
               cout << " PHRASE TO BE ENCRYPTED : ";
               cin.ignore();
               getline(cin,code);
               for(auto a: code)
               {
                    index = alphabet.find(a);
                    if(index!=string::npos) // If element is found in the letter set, replace it with key
                    {
                        a = key.at(index);
                        secret.push_back(a);  // storing of encrypted message
                    }
                    else // Else leave it to the original form
                    {
                         cout << a;
                         se
                         secret.push_back(a); // storing of encrypted message
                    }
               } 
               cout <<"\n\t\tENCRYPTING......\n";
               cout << "\nENCRYPTED MESSAGE :  " << secret << endl;
               secret = " "; // Emptying the string for next use.
    
          }

          void decrypt() // Vice versa in decrpypting 
          {
               size_t index;
               string local;
               cout << " PHRASE TO BE DECRYPTED : ";
               cin.ignore();
               getline(cin, local);
               for (auto a : local)
               {
                    index = key.find(a);
                    if (index != string::npos)
                    {
                         a = alphabet.at(index);
                         reverse.push_back(a);
                    }
                    else
                    {
                         cout << a;
                         reverse.push_back(a);
                    }
               }
               cout << "\n\t\tDECRYPTING......\n";
               cout << "\nDECRYPTED MESSAGE :  " << reverse << endl;
               reverse = " "; // Emptying the string for next use.
          }
          
}C;

int main()
{
     char exitKey;
     int choice;
     do
     {
          cout << " \n\t\t\tENCRYPTOR\n\n";
          cout << "\n**************************\n\n1.Encrypt\n2.Decrypt\n**************************\n";
          cin >> choice;
          switch(choice)
          {
               case 1:
               {
                   C.encrypt();
                    break;
               }
               case 2:
               {
                    C.decrypt();
                    break;
               }
               default:
               {
                    cout << "WRONG OPTION" << endl;
               }
          }
          cout << " PRESS [.] TO EXIT " << endl;
          cin >> exitKey;

     } while (exitKey!='.');
     
}