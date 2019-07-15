#include <sstream>
#include <iostream>
#include <string>
using namespace std;


string askUser(int userNumber){

    string userName; 
    string userAddress; 
    string userPhone; 
    stringstream output;

    cout << "User Number" << userNumber << endl;
    cout << "Tell me your name?: ";
    getline(cin,userName);
    cout << "Tell me your address?: ";
    getline(cin,userAddress);
    cout << "Tell me your phone?: ";
    getline(cin,userPhone);
    output << userName << endl;
    output << userAddress << endl;
    output << userPhone << endl;
    return output.str();
}

int main()
{

    string user1 = askUser(1);
    string user2 = askUser(2);
    cout << user1 << user2;
    return 0;
}