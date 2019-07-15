#include <sstream>
#include <iostream>
#include <string>

float obtainSide(std::string side)
{
    float valueSide;
    std::string stringLength;
    std::cout << "Tell me the " << side << " of the room" << ": ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> valueSide;
    return valueSide;
}

int main()
{
    float width, length;
    width = obtainSide("width");
    length = obtainSide("length");
    std::cout << "The area of the room is = " << width * length << std::endl;
    return 0;
}