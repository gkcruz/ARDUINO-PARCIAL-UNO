#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;


int main()
{
    int numero,i;

    srand(time(0)); // semilla, para que no genere el mismo numero aleatorio

   for(i=1;i<=10;i++)
   {
       do
       {
       numero=1 + rand() % (100-1);  // rango inicial + numero generado
       }
       while((numero % 2) !=0);

    cout<<"numero generados "<<numero<<"\n";
   }
}
