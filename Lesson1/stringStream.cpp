#include "main.hpp"

int main ()
 {
   string stringLength;
   float inches = 0;
   float yardage = 0;

   string heightHouse;
   float height, price;

   cout << "Enter number of inches: ";
   getline (cin,stringLength);
   stringstream(stringLength) >> inches;
   cout<<"You entered "<<inches<<"\n";
   yardage = inches/36;
   cout << "Yardage is " << yardage;

   cout << "\nNow, enter the height of the house: ";
   getline(cin,heightHouse);
   stringstream(heightHouse)  >> height;
   price = 23 * height;
   cout << "The price of the house is " << price << endl;
   return 0;
 }
