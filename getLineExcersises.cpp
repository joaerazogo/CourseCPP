#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void userInfo(int number){

    string username;
    string lastName;
    string phone;
    string email;

    //user info

    cout << "Welcome user " << number << endl;
    cout << "what is your name? " << endl;
    getline(cin, username);
    cout << "what is your lastName? " << endl;
    getline(cin, lastName);
    cout << "what is your phone? " << endl;
    getline(cin, phone);
    cout << "what is your email? " << endl;
    getline(cin, email);

    cout << "name\tlastName\tphone\temail" << endl;
    cout << username << "\t" << lastName << "\t" << phone << "\t" << email << endl;

}

int main()
{
    userInfo(1);
    userInfo(2);
    return 0;
}
