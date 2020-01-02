/*The header file for main.cpp*/

#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string nameIn){
    name = nameIn;
}

void Dog::setLicenseNumber(string licenseNumberIn){
    licenseNumber = licenseNumberIn;
}

string getName(){
    return name;
}

string getLicenseNumber(){
    return licenseNumber;
}
 
void printInfo()
{
    cout << name << " " << licenseNumber << endl;
}