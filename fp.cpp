#include <iostream>
#include <string>

int main(){
    int digito;
    int modulo;
    int cantidadDivisores = 0;

    std::cout << "por favor ingrese un digito" << std::endl;
    std::cin >> digito;

    for (int i = 1; i <= digito; i++)
    {
        modulo = digito % i;
        if (modulo == 0)
        {
            cantidadDivisores++;
        }
        
    }

    if(cantidadDivisores == 1){
        std::cout << "El número es unitario" << std::endl;
    }else if (cantidadDivisores == 2)
    {
        std::cout << "El número es primo" << std::endl;
    }else
    {
        std::cout << "El número no es primo" << std::endl;
    }

    return 0;
}