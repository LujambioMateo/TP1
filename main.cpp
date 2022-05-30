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
*/



//Ejercicio N°7


int main()
{

int vector [POS] = 0, numero;
    tablaDel(3, vector);

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "el numero " << numero;
    if(esPrimo(numero))
        cout << " es primo." << endl;
    else
        cout << " no es primo." << endl;

    return 0;

}

long factorial(int numero)
{
    long fact = 1;
    for(int i = numero; i >= 1; i--)
        fact = fact * i;

    return fact;
}


bool esPrimo (int numero)
{
    bool aux;
    if(numero <= 1)
        aux = false;
    else
        aux = true;

    for(int i = 2; i < numero; i++)
    {
        if((numero % i ) == 0)
            aux = false;
    }

    return aux;

}
