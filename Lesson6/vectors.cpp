#include <iostream>

int maxNumber(int *a, int sizeVector){
    
    int maxValue = 0;
    for (int i = 0; i < sizeVector; i++){
        if (*(a + i) > maxValue){
            maxValue = *(a + i);
        }else{
            continue;
        }
    }
    return maxValue;
}

int minNumber(int *a, int sizeVector){
    
    int minValue = *(a + 0);
    for (int i = 0; i < sizeVector; i++){
        if (*(a + i) < minValue){
            minValue = *(a + i);
        }else{
            continue;
        }
    }
    return minValue;
}

float averageNumber(int *a, int sizeVector){
    
    int sumValue = 0;
    for (int i = 0; i < sizeVector; i++){
        sumValue += *(a + i);
    }
    return (float) sumValue/ (float) sizeVector;
}

int main() {

    int a[15];
    int sizeVector = *(&a + 1) - a;

    std::cout << "Please, enter 15 numbers: " << std::endl;
    
    for (int i = 0; i < sizeVector; i++){

        std::cout << "Number " << i + 1 << std::endl;
        std::cin >> *(a + i);
    }

    std::cout << "The max values of the array is: " << maxNumber(a, sizeVector) << std::endl;
    std::cout << "The min values of the array is: " << minNumber(a, sizeVector) << std::endl;
    std::cout << "The average of the array values: " << averageNumber(a, sizeVector) << std::endl;

    return 0;
} 