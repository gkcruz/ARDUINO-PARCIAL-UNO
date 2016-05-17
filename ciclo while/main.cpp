#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;

int contador;
int numero;
int suma,mayor,menor,con50,suma50,prom50;

int main()
{
    srand(time(0)); // semilla, para que no genere el mismo numero aleatorio
    contador=0;
    suma=0;
    mayor=0;
    menor=100;
    con50=0;

    while(contador<10)
    {
    numero=1 + rand() % (100-1);
    suma=suma +numero;

    if(mayor<numero)
    {
        mayor=numero;
    }
    if(menor>numero)
    {
        menor=numero;
    }
    if(numero>50)
      {
          con50++;
          suma50+=numero;
      }

    contador++;
     cout <<contador<< " Numero "<<numero<<"\n";
    }
    prom50=suma50/con50;
     cout<<"la suma total es "<<suma<<"\n";
     cout << "El numero mayor es "<<mayor<<"\n";
     cout << "El numero menor es "<<menor<<"\n";
     cout<<"Numeros mayores a 50 "<<con50<<"\n";
     cout<<" Promedio numeros mayores a 50 "<<prom50<<"\n";
    cout << "Final del programa "<<"\n";

}
