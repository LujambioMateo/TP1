#include <iostream>
#include "TP1.h"
long factorial()
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
0OL.0O
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








//Ejercicio N°



string romanos (int numero)
{
    string numeroRomano
    int millares, centenas, decenas, unidades;

    unidades = numero % 10; numero /= 10;
    decenas = numero % 10; numero /= 10;
    centenas = numero % 10; numero /=10;
    millares = numero % 10; numero /=10;

    switch(millares)
    {
    case 1:
        numeroRomano = "M";
        break;

    case 2:
        numeroRomano = "MM";
        break;
    case 3:
        numeroRomano = "MMM";
        break;
    }

    switch(centenas)
    {
    case 1:
        numeroRomano += "C";
        break;
    case 2:
        numeroRomano +=  "CC";
        break;
    case 3:
        numeroRomano += "CCC";
        break;
    case 4:
        numeroRomano += "CD";
        break;
    case 5:
        numeroRomano += "D";
        break;
    case 6:
        numeroRomano += "DC";
        break;
    case 7:
        numeroRomano += "DCC";
        break;
    case 8:
        numeroRomano += "DCCC";
        break;
    case 9:
        numeroRomano += "CM";
        break;
    }

    switch(decenas)
    {
    case 1:
        numeroRomano += "X";
        break;
    case 2:
        numeroRomano +=  "XX";
        break;
    case 3:
        numeroRomano += "XXX";
        break;
    case 4:
        numeroRomano += "XL";
        break;
    case 5:
        numeroRomano += "L";
        break;
    case 6:
        numeroRomano += "LX";
        break;
    case 7:
        numeroRomano += "LXX";
        break;
    case 8:
        numeroRomano += "LXXX";
        break;
    case 9:
        numeroRomano += "XC";
        break;



    switch(unidades)
    {
    case 1:
        numeroRomano += "I";
        break;
    case 2:
        numeroRomano +=  "II";
        break;
    case 3:
        numeroRomano += "III";
        break;
    case 4:
        numeroRomano += "IV";
        break;
    case 5:
        numeroRomano += "V";
        break;
    case 6:
        numeroRomano += "VI";
        break;
    case 7:
        numeroRomano += "VII";
        break;
    case 8:
        numeroRomano += "VIII";
        break;
    case 9:
        numeroRomano += "IX";
        break;

}



