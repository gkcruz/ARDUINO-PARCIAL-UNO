#include <iostream>
#include <time.h>
#include <stdlib.h> // random
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0)); // semilla, para que no genere el mismo numero aleatorio
    int numero;
    numero=50 + rand() % (100-50);  // rango inicial + numero generado
    cout << "valor de numero" <<numero<<"\n";
    system("PAUSE");
}
