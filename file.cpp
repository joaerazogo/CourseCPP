#include "main.hpp"

int main() {

    string line;

    ofstream myfileI("/home/jose/Downloads/c++/input.txt", ios::app);

    if (myfileI.is_open()){
        myfileI << "\nI Eureka.\n";
        myfileI << "\nI El Levante.\n";
        myfileI.close();
    }
    else{
        cout << "Unable to open file for writing";
    }
    
    ifstream myfileO("/home/jose/Downloads/c++/input.txt");

    if (myfileO.is_open())
    {
        while (getline(myfileO, line))
        {
            cout << line << '\n';
        }
        myfileO.close();
    }else{
        cout << "Unable to open file for reading";
    }
    
    return 0;
}