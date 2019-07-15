#include <iostream>
#include <iomanip>

int main() {

    std::cout<<"\n\nThe text without any formating\n";
    std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

    std::cout<<"Bienvenido, esta es una tabla de multiplicar con tabulacion t"<< "\n";

    std::cout << "Tabla1\t\t" <<  "Tabla2\t\t" << "Tabla3\t\t" << "Tabla4\t\t" << "Tabla5\t\t" << "Tabla6\t\t" << "Tabla7\t\t" << "Tabla8\t\t" << "Tabla9\t\t" << "\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout<< "1 * " << i  << " = " << 1 * i << "\t" 
            << "2 * " << i  << " = " << 2 * i << "\t"
            << "3 * " << i  << " = " << 3 * i << "\t"
            << "4 * " << i  << " = " << 4 * i << "\t"
            << "5 * " << i  << " = " << 5 * i << "\t"
            << "6 * " << i  << " = " << 6 * i << "\t"
            << "7 * " << i  << " = " << 7 * i << "\t"
            << "8 * " << i  << " = " << 8 * i << "\t"
            << "9 * " << i  << " = " << 9 * i << "\t" << "\n";
    }

    std::cout<<"Bienvenido, esta es una tabla de multiplicar con tabulacion std::setw()"<< "\n";

    std::cout << "Tabla1" << std::setw(16) <<  "Tabla2" << std::setw(16) << "Tabla3" << std::setw(16) << "Tabla4" << std::setw(16) << "Tabla5" << std::setw(16) << "Tabla6" << std::setw(16) << "Tabla7" << std::setw(16) << "Tabla8" << std::setw(16) << "Tabla9" << "\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout<< "1 * " << i  << " = " << 1 * i << std::setw(11) 
            << "2 * " << i  << " = " << 2 * i << std::setw(11)
            << "3 * " << i  << " = " << 3 * i << std::setw(10)
            << "4 * " << i  << " = " << 4 * i << std::setw(10)
            << "5 * " << i  << " = " << 5 * i << std::setw(10)
            << "6 * " << i  << " = " << 6 * i << std::setw(10)
            << "7 * " << i  << " = " << 7 * i << std::setw(10)
            << "8 * " << i  << " = " << 8 * i << std::setw(10)
            << "9 * " << i  << " = " << 9 * i << std::setw(10) << "\n";
    }

    for (int i = 1; i <= 10; i++)
    {
        std::cout<< std::setw(10) << "1 * " << i  << " = " << 1 * i << std::setw(15) << "2 * " << i  << " = " << 2 * i << "\n";
    }

    return 0;

}
