#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;

int numero;

int main()
{
    srand(time(0));
    numero=1 + rand() % 200;
    cout << "Numero aleatorio es: " <<numero<<"\n";

    if(numero>=1 && numero<=60)
    {
        cout << "Numero esta entre 1 y 60 "<<"\n";
    }
    else if(numero>=61 && numero<=90)
    {
        cout << "Numero esta entre 61 y 90 "<<"\n";
    }
    else if(numero>=91 && numero<=160)
    {
        cout << "Numero esta entre 91 y 160 "<<"\n";
    }
    else
    {
        cout << "Numero esta entre 161 y 200 "<<"\n";
    }

}
