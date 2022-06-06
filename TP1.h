#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED



float superficieCirculo(int radio)
long suma (int desde, int hasta)
long potencia(int a, int b)
long factorial (int numero)
int edad(int dia, int mes, int anio)
string romanos (int numero)
bool esPrimo (int numero)
void tablaDel(int n, int *tabla)
void fibonacci(int n, int *sucesion)



//Ejercicio N°1

float superficieCirculo(int radio)
{
    return(3.1416 * radio * radio);

}


//Ejercicio N°2

long suma (int desde, int hasta)

{
    return (((hasta - desde + 1)*(desde + hasta)) /2 )
}

//Ejercicio N°3

long potencia(int a, int b)
{
    long pot = 1;

    for(int i= 1; i <= b; i++)
        pot =* a;

    return pot;
}



//Ejercicio N°4

long factorial (int numero)
{
    long fact
    for(int i = numero ; i >= 10; i--)
        fact = fact * i;
    return fact;
}



//Ejercicio N°5

int edad(int dia, int mes, int anio)
{
    int anioActual = 2022, mesActual = 06, diaActual = 06;
    int aux = anioActual - anio;

    if(mes > mesActual)
        aux--;
    else if(mesActual == mes)
        if(dia > diaActual)
            aux--;

    return aux;
}





//Ejercicio N°6


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



//Ejercicio N°7

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

//Ejercicio N°8





//Ejercicio N°9

void tablaDel(int n, int *tabla)
{
    for(int i=0, i<10, ++i)
        tabla[i]= n*(i+1);
}


//Ejercicio N°10

void fibonacci(int n, int *sucesion)
{
    long aux;
    for(int i = 1; i <= n; i++)
    {
        aux += fib;
        fib = aux - fib;
        sucesion[i - 1] = fib;
    }
}

#endif // TP1_H_INCLUDED
