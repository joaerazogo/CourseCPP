#include "main.hpp"

float roomArea(string valueSide){

    string valueString;
    float valueSideRoom;
    cout << "Tell me the " << valueSide << " of the room"<<endl;
    getline(cin, valueString);
    stringstream(valueString) >> valueSideRoom;
    return valueSideRoom;
}


int main()
{
    /* std::string stringLength;
    float inches = 0;
    float yardage = 0;

    std::cout << "Enter number of inches: ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> inches;
    std::cout << 'You entered' << inches << '\n';
    yardage = inches / 36;
    std::cout << 'You yardage is: ' << yardage;
    return 0; */
    
    float widht;
    float height;
    
    widht = roomArea("widht");
    height = roomArea("height");
    
    cout << "The area of the room is = " << widht * height << endl;

}
