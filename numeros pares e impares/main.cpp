#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>


using namespace std;

int contador,pares,impares,mod,numero;

int main()
{
    srand(time(0));
    contador=0;
    pares=0;
    impares=0;

    while(contador<10)
    {

        numero=1 + rand() % (100-1);
        mod= numero%2;

        cout<<contador<< " Numero "<<numero<<"\n";

        if(mod==0)
            pares++;

        else
            impares++;

            contador++;
    }
    cout<< "Numero de impares "<<pares<<"\n";
    cout<< "Numero de impares "<<impares<<"\n";

}
