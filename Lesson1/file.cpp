#include "main.hpp"

int main() {

    string line;

    ofstream myfileI("/home/jose/Downloads/CourseCPP/input.txt", ios::app);

    if (myfileI.is_open()){
        myfileI << "\n I am adding a line.\n";
        myfileI << "\n I am adding another line.\n";
        myfileI.close();
    }else{
        cout << "unable to open file for writing";
    }

    ifstream myfileO("/home/jose/Downloads/CourseCPP/input.txt");    
    
    if (myfileO.is_open()){
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }

        myfileO.close();
    }else{
        cout << "unable to open file for reading";
    }
    

    return 0;
}