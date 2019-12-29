#include <iostream>
#include <iomanip>

int main() {

    std::cout<<"\n\nThe text without any formating\n";
    std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";



    std::cout << "sizeof int = " << std::setw(8) << sizeof(int) << "\n";
    std::cout << "sizeof short = " << std::setw(8) << sizeof(short) << "\n";
    std::cout << "sizeof long = " << std::setw(8) << sizeof(long) << "\n";
    std::cout << "sizeof char = " << std::setw(8) << sizeof(char) << "\n";
    std::cout << "sizeof float = " << std::setw(8) << sizeof(float) << "\n";
    std::cout << "sizeof double = " << std::setw(8) << sizeof(double) << "\n";
    std::cout << "sizeof bool = " << std::setw(8) << sizeof(bool) << "\n";

    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout << std::setw(10) << "Ints" << std::setw(15) << "Floats" << std::setw(15) << "Doubles" << std::endl; 
    std::cout << std::setw(10) << a << std::setw(15) << b << std::setw(15) << c << std::endl; 
    std::cout << std::setw(10) << aa << std::setw(15) << bb << std::setw(15) << cc << std::endl; 
    std::cout << std::setw(10) << aaa << std::setw(15) << bbb << std::setw(15) << ccc << std::endl; 
    
}