#include <iostream>

int main() {
    
    /* const int var = 100;

    std::cout << "the value of var is = " << var << std::endl;

    std::cout << "sizeof int = " << sizeof(int) << std::endl;
    std::cout << "sizeof short = " << sizeof(short) << "\n";
    std::cout << "sizeof long = " << sizeof(long) << "\n";
    std::cout << "sizeof char = " << sizeof(char) << "\n";
    std::cout << "sizeof float = " << sizeof(float) << "\n";
    std::cout << "sizeof double = " << sizeof(double) << "\n";
    std::cout << "sizeof bool = " << sizeof(bool) << "\n";

    return 0;    
    */

    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    enum NUMBERS {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11};
    
    NUMBERS number;
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan && number == e1)
    {
        std::cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
    
}