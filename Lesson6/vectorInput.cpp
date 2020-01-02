/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

void quicksort(int A[],int izq, int der ){ 
    int i, j, x , aux; 
    i = izq; 
    j = der; 
    x = A[ (izq + der) /2 ]; 
        do{ 
            while( (A[i] < x) && (j <= der) ){ 
                i++;
            } 
    
            while( (x < A[j]) && (j > izq) ){ 
                j--;
            } 
    
            if( i <= j ){ 
                aux = A[i]; A[i] = A[j]; A[j] = aux; 
                i++;  j--; 
            }
            
        }while( i <= j ); 
    
        if( izq < j ) 
            quicksort( A, izq, j ); 
        if( i < der ) 
            quicksort( A, i, der ); 
}


int main()
{
    int userInput[5];
    int arraySize = *(&userInput + 1) - userInput;
    
    for(int i = 0; i <arraySize; i++){
        std::cin >> userInput[i];
        //std::cout << userInput[i] << " ";
    }

    std::cout << std::endl;
    for(int i = arraySize; i >= 0; i--){
        std::cout << userInput[i] << " ";
    }

    std::cout << std::endl;
    quicksort(userInput,0,arraySize-1);

    //std::cout << "Array sorted " << std::endl;
    for(int i = 0; i <arraySize; i++){
        std::cout << userInput[i] << " ";
    }

    return 0;
}