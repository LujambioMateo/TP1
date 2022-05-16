#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED




//Ejercicio N°1

float superficieCirculo(int radio)
{
    return(3.1416 * radio * radio);

}




//Ejercicio N°2

long suma (int desde, int hasta)
{
    int i;
    long aux = 0;
    for(i = desde; i<= hasta; i++){
            aux = aux + i;
    }

    return aux;
}






























//Ejercicio N°9
/*
void tablaDel(int n, int *tabla)
{
    for(int i=0, i<10, ++i)
        tabla[i]= n*(i+1);
*/

#endif // TP1_H_INCLUDED
