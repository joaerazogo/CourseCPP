#include "main.hpp"

int main() {

    float a;
    float b;
    float c;
    float d;
    string e;
    
    cout << "Enter the first text \n" ;
    cin >> e;

    cout << "Enter the first number \n" ;
    cin >> a;
    cout << "Enter the second number \n" ;
    cin >> b;
    cout << "Enter the third number \n" ;
    cin >> c;

    d = pow(pow(b, 2) - (4 * a * c), 0.5);

    if (d > 0){
        cout << "There are two roots for this squared function";
    }else if (d == 0){
        cout << "There is a root for this squared function";
    }else{
        cout << "There aren't root for this squared function";
    }
    
    return 0;
}