#include <iostream>
using namespace std;

int main() {

    /*
    Programa que determina el día de la semana
    */

    int diaDeSemana;
    cout << "Ingrese el número de día correspondiente, debe estar entre 1 y 7" << "\n";
    cin >> diaDeSemana;

    switch (diaDeSemana)
    {
    case 1:
        cout << "Día Lunes" << "\n";
        break;
    case 2:
        cout << "Día Martes" << "\n";
        break;
    case 3:
        cout << "Día Niércoles" << "\n";
        break;
    case 4:
        cout << "Día Jueves" << "\n";
        break;
    case 5:
        cout << "Día Viernes" << "\n";
        break;
    case 6:
        cout << "Día Sábado" << "\n";
        break;
    case 7:
        cout << "Día Domingo" << "\n";
        break;
    default:
        cout << "El número ingresado es incorrecto, debe estar entre 1 y 7" << "\n";
        break;
    }

    /*
    Programa que determina el mes del año
    */

    int mes;
    cout << "Ingrese el número del mes correspondiente, debe estar entre 1 y 12" << "\n";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Mes Enero" << "\n";
        break;
    case 2:
        cout << "Mes Febrero" << "\n";
        break;
    case 3:
        cout << "Mes Marzo" << "\n";
        break;
    case 4:
        cout << "Mes Abril" << "\n";
        break;
    case 5:
        cout << "Mes Mayo" << "\n";
        break;
    case 6:
        cout << "Mes Junio" << "\n";
        break;
    case 7:
        cout << "Mes Julio" << "\n";
        break;
    case 8:
        cout << "Mes Agosto" << "\n";
        break;
    case 9:
        cout << "Mes Septiembre" << "\n";
        break;
    case 10:
        cout << "Mes Octubre" << "\n";
        break;
    case 11:
        cout << "Mes Noviembre" << "\n";
        break;
    case 12:
        cout << "Mes Diciembre" << "\n";
        break;
    default:
        cout << "El número ingresado es incorrecto, debe estar entre 1 y 12" << "\n";
        break;
    }

    /*
    Programa que muestra el número mayor
    */
    
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    cout << "please, enter the firstNumber" << "\n";
    cin >> firstNumber;
    cout << "please, enter the secondNumber" << "\n";
    cin >> secondNumber;
    cout << "please, enter the thirdNumber" << "\n";
    cin >> thirdNumber;

    cout << "============================================================" << "\n";

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        cout << firstNumber << "\n";
        if (secondNumber > thirdNumber)
        {
            cout << secondNumber << "\n";
            cout << thirdNumber << "\n";
        }else{
            cout << thirdNumber << "\n";
            cout << secondNumber << "\n";
        }
        
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        cout << secondNumber << "\n";
        if (firstNumber > thirdNumber)
        {
            cout << firstNumber << "\n";
            cout << thirdNumber << "\n";
        }else{
            cout << thirdNumber << "\n";
            cout << firstNumber << "\n";
        }
    }
    else
    {
        cout << thirdNumber << "\n";
        if (firstNumber > secondNumber)
        {
            cout << firstNumber << "\n";
            cout << secondNumber << "\n";
        }else{
            cout << secondNumber << "\n";
            cout << firstNumber << "\n";
        }
    }

    /*
    Programa que indica si el orden en que se ingresó los números es de forma creciente
    */
    
   cout << "=============================================================================" << "\n";

    int firstNumberCPP1;
    int secondNumberCPP2;
    int thirdNumberCPP2;

    cout << "please, enter the firstNumberCPP1" << "\n";
    cin >> firstNumberCPP1;
    cout << "please, enter the secondNumberCPP2" << "\n";
    cin >> secondNumberCPP2;
    cout << "please, enter the thirdNumberCPP2" << "\n";
    cin >> thirdNumberCPP2;

    if (firstNumberCPP1 < secondNumberCPP2 && secondNumberCPP2 < thirdNumberCPP2)
    {
        cout << "The numbers were entered increasingly" << "\n";
    }
    else
    {
        cout << "The numbers were entered without order" << "\n";
    }

    cout << "=============================================================================" << "\n";
    
    /*
    The program indicate the largest number from 10 numbers
    */
    
    int higherNumber = 0;
    int numberEvaluated;

    for (int i = 0; i < 10; i++)
    {
        cout << "please, enter the higherNumber" << "\n";
        cin >> numberEvaluated;

        if (numberEvaluated >= higherNumber)
        {
            higherNumber = numberEvaluated;
        }
    }
    
    cout << "the largest number is: " << higherNumber << "\n";

    cout << "=============================================================================" << "\n";
    
    /*
    The program indicate the perimeter of triangle equilateral scalene isosceles
    */
    
    int firstSide;
    int secondSide;
    int thirdSide;

    cout << "please, enter the firstSide" << "\n";
    cin >> firstSide;
    cout << "please, enter the secondSide" << "\n";
    cin >> secondSide;
    cout << "please, enter the thirdSide" << "\n";
    cin >> thirdSide;

    if (firstSide == secondSide && secondSide == thirdSide)
    {
        cout << "The perimeter of equilateral triangle is: " << firstSide + secondSide + thirdSide << "\n";
    }
    else if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide)
    {
        cout << "The perimeter of scalene triangle is: " << firstSide + secondSide + thirdSide << "\n";
    }
    else
    {
        cout << "The perimeter of scalene isosceles is: " << firstSide + secondSide + thirdSide << "\n";
    }

    return 0;
}
