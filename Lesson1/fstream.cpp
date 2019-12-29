#include "main.hpp"

int main() {

    string line;

    fstream myfileI("/home/jose/Downloads/CourseCPP/input.txt");

    if (myfileI.is_open()){
        myfileI << "\nRead and write to this file. \n";
        myfileI << "\nWhat am I doing here? \n";
        myfileI << "\nThis is not a good example of a file \n";
        myfileI << "\nmy name is Anthony Gonzalez \n";

        while ( getline (myfileI,line) )
        {
            cout << line << '\n';
        }
        myfileI.close();

    }else{
        cout << "unable to open file for writing";
    }
    
    return 0;
}