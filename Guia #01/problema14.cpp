#include <iostream>

using namespace std;

int numero,d1,d2,d3;

int main()
{
    cout << "Ingrese un numero de 3 cifras ";
    cin>>numero;

    if(numero<0)
        numero=numero*(-1);

    if(numero>99 && numero<1000)
    {
     d1=numero/100;
     d2=(numero%100)/10;
     d3=numero %10;

     cout<<"El numero Alrevez es: "<<d3<<d2<<d1;
    }
    else
    {
      cout << "Su numero debe tener 3 cifras "<<"\n";
    }
}
