#include <iostream>

using namespace std;

int numero,contador,mayor70,prom,suma;
int main()
{
    contador=0;
    mayor70=0;
    prom=0;
    suma=0;
    while(contador<5){

    cout << "ingrese numero "<<"\n";
    cin>>numero;

    if(numero>70)
    {
        mayor70++;
        suma=suma+numero;
    }
    contador++;
    }

    prom=suma/mayor70;

    cout<<"El promedio de los mayores a 70 es "<<prom<<"\n";

}
