#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;

int numero,contador,par;

int main()
{
    par=0;
    contador=0;

    srand(time(0)); // semilla, para que no genere el mismo numero aleatorio

    while(numero%2==0)
    {

     numero=1 + rand() % (100-50);  // rango inicial + numero generado

     while(contador<10)
     {
      par++;
      contador++;
     }

    }

 cout<<"los muneros aleatorios pares fueron...: "<<par<<"\n";
}
