#include <sstream>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    
    float cateto1;
    float cateto2;
    float altura;
    string valor;

    cout << "Por favor ingrese el primer cateto " << endl;
    getline(cin, valor);
    stringstream(valor) >> cateto1;
    
    cout << "Por favor ingrese el segundo cateto " << endl;
    getline(cin, valor);
    stringstream(valor) >> cateto2;
    
    cout << "Por favor ingrese la altura " << endl;
    getline(cin, valor);
    stringstream(valor) >> altura;

    cout << "El valor de la altura es: h = " << sqrt(pow(cateto1, 2) + pow(cateto2, 2)) << endl;
    cout << "El valor del área es: A = " << (cateto1 * cateto2)/2 << endl;
    cout << "El valor del perímetro es: p = " << altura + cateto1 + cateto2 << endl;

    return 0;

}
