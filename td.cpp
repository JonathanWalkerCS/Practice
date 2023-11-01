#include <iostream>
#include <iomanip>

using namespace std;


//typedef example

int main(){

double number;
cout << "Please enter a number: " << endl;
cin >> number; 
typedef double real; //Creates an alias for double, called "real"

real numbers;

/*Defines the variable "numbers" under data type real 
which is an alias for data type double
*/
numbers = number;

cout << "The number you entered is: " << numbers << endl;

}
