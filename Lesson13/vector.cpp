#include <iostream>
#include <vector>

/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries

int main ()
{
  //TODO: instantiate vFloat vector
    std::vector<float> vFloat;
    std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

    //Changing the size of vectorInts to 6
    //TODO: Change the size of vFloat to 10 elements

    vFloat.resize(10);
    std::cout<<"\n\nvFloat now has "<<vFloat.size()<<" elements\n";

    return 0;
}

