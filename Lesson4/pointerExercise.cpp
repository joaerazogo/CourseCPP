/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    int *givenIntP = &givenInt;
    float *givenFloatP = &givenFloat;
    double *givenDoubleP = &givenDouble ;
    std::string *givenStringP = &givenString;
    char *givenCharP = &givenChar;

    std::cin >> givenInt;
    std::cin >> givenFloat;
    std::cin >> givenDouble;
    std::cin >> givenChar;
    std::getline(std::cin, givenString);

    std::cout << " address of givenInt = " << givenIntP << std::endl;
    std::cout << " value of givenInt = " << *givenIntP << std::endl;
    std::cout << " address of givenFloat = " << givenFloatP << std::endl;
    std::cout << " value of givenFloat = " << *givenFloatP << std::endl;
    std::cout << " address of givenDouble = " << givenDoubleP << std::endl;
    std::cout << " value of givenDouble = " << *givenDoubleP << std::endl;
    std::cout << " address of givenString = " << givenStringP << std::endl;
    std::cout << " value of givenString = " << *givenStringP << std::endl;
    std::cout << " address of givenChar = " << givenCharP << std::endl;
    std::cout << " value of givenChar = " << *givenCharP << std::endl;
    
    
    return 0;
}
