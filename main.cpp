#include <iostream>
#include "TP1.h"

using namespace std;

/*
//Ejercicio N°1
int main()
{
    int radio;

    cout << "Ingrese el radio: ";
    cin >> radio;
    cout << "La superficie es:  " << superficieCirculo(radio);

    return 0;

}
*/

//Ejercicio N°2

int main()
{
    int desde, hasta;

    cout << "Ingrese desde: ";
    cin >> desde;
    cin.sync();

    cout << "Ingrese hasta: ";
    cin >> hasta;
    cin.sync();

    cout << "La suma entre " << desde << " y " << hasta << " es: ";
    cout << suma(desde, hasta);

    return 0;
}
