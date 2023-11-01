#include <iomanip>
#include <iostream>

using namespace std;
//testing out static_cast syntax

int main()
{ 
double num1; 

cout << "Enter a decimal number: " << endl;
cin >> num1; 
cout << "The decimal number you entered is: " << num1 << endl; 

int num2 = static_cast<int>(num1);
//Declares new variable num2 of data type int
//The double value of num1, is converted to type int, then assigned to num2

cout << "When converted to an integer data type, that number is: " << num2 << endl; 

}