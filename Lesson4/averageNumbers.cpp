/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

void averageNumber(){
    
    float number;
    float sumNumber = 0;
    float counter = 0;

    std::cout << "Please, enter five numbers " << std::endl;

    for (int i = 0; i < 5; i++){
        
        std::cin >> number;
        sumNumber += number;
        ++counter;
    }
    
    std::cout << "The sum of the numbers is: " << sumNumber << std::endl;
    std::cout << "The average of the numbers is: " << sumNumber/counter << std::endl;
}

int main() {

    averageNumber();
    
    return 0;
}