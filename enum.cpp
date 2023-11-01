#include <iostream>
#include <iomanip>

using namespace std;

int main(){

enum year{first, second, third, fourth} newYear;
//The above statement defines an enumeration type, "year", 
//and declares newYear as a variable of type year.


for(newYear = first; newYear <= fourth; newYear = static_cast<year>(newYear + 1)){
//Assigns the variable, "newYear" the value of the enumerator "first"
cout << "The value of new year is: " << newYear << endl; 
}

}
