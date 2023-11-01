#include <iomanip>
#include <iostream>
using namespace std;


double id(int x); //named "id" because it converts an interger into a decimal data type
int di(double x); //named "di" because it converts an decimal into a interger data type


int main(){

char option; 
double number;//Used double because it allows the user to enter a wider range of numeric values than int 

do{

cout << "\nPlease select an option: \n" << endl;
cout << "1. Convert int to double" << endl;
cout << "2. Convert double to int" << endl;
cout << "3. Exit program" << endl; 
cin >> option;
   
   switch (option) {

   case '1': 
   cout << "You selected option 1, please enter an interger type value:" << endl;   
   cin >> number;
   cout << "Your initial number was: " << number << endl;
   number = static_cast<int>(number);
   cout << "Your converted number is: " << id(number) << endl;
   break;

   case '2':
   cout << "You selected option 2, please enter a double type value:" << endl;
   cin >> number;
   cout << "Your initial number was: " << number << endl;
   cout << "Your converted number is: " << di(number) << endl;
   break;  

   case '3': 
   cout << "You selected option 3. Now exiting the program, have a good day!" << endl;
   break;

   default:
   cout << "Invalid input" << endl; 
   break;
   }

}while(option != '3');

}


double id(int x)
{
double num2 = static_cast<double>(x);
return num2; 
}



int di(double x)
{
int num2 = static_cast<int>(x);
return num2; 
}
