#include <iostream>

//Ejercicio que determina si un número es par o impar
int main() {
    
    int numero;

    std::cout << "Ingrese el número a evaluar" << std::endl;
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "El número ingresado es par" << std::endl;
    }else{
        std::cout << "El número ingresado es impar" << std::endl;
    }
    

}