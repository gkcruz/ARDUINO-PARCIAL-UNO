#include <iostream>

using namespace std;
/*ingresar un numero de hasta 4 cifras
pero puede ingresar uno mayor.
el programa debera escribir cuantas cifras
tiene el numero */
int numero;


int main()
{
    cout << "Ingresar Numero....:";
    cin>>numero;

    if(numero<0)
        numero*=(-1);   // numero= numero * (-1)

    if(numero<=9)
        cout<<"Tiene una cifra";

    else if(numero<=99)
        cout<<"Tiene Dos cifra";

    else if(numero<=999)
        cout<<"Tiene tres cifra";

        else
        cout<<"Tiene cuatro o mas de cuatro cifras";


}
