/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    int array2Dim[4][4];
    int array1Dim[4];
    int opMatrixVector[4];

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            std::cout<<"element of array2Dim["<<i<<"]["<<j<<"] = " << "\n";
            std::cin >> array2Dim[i][j];
        }
    }   

    for(int i=0; i<4;i++){
        std::cout<<"element of array1Dim["<<i<<"] = " << "\n";
        std::cin >> array1Dim[i];
    }   

    for(int i=0; i<4;i++){
        opMatrixVector[i] = 0;
        for(int j=0;j<4;j++){
            opMatrixVector[i] =  opMatrixVector[i] + array2Dim[i][j] * array1Dim[i];
        }
    }

    for(int i=0; i<4;i++){
        std::cout<<"opMatrixVector["<<i<<"] = ";
        std::cout<< opMatrixVector[i] << std::endl;
    }   


    return 0;
}