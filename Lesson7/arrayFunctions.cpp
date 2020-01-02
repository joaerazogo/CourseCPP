/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *array, int size, int searchKey){

    int location;
    for (int i = 0; i < size; i++){
        if (array[i] == searchKey){
            location = i;
        }else{
            location = -1;
        }
    }
    
    return location;
}
