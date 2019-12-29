#include "main.hpp"

int main() {

    string fullName;
    string address;

    cout << "Please, enter your full name \n";
    getline(cin, fullName);
    cout << "Please, enter your address \n";
    getline(cin, address);

    cout << fullName << endl;
    cout << address << endl;

    return 0;
}