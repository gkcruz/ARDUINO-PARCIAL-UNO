#include <iostream>
#include <stdlib.h>

using namespace std;

int numero;

int main()
{
    cout << "Ingresar Numero";
    cin>> numero;
    if(numero>0)
    {
     cout<<"Es Positivo";
    }
    else if(numero<0)
    {
        cout<<"Es Negativo";
    }
    else
    {
     cout<<" Es cero";
    }
    cout<<"\n";
    system("PAUSE");    //que no se salga de la consola y tire mensaje de espera
}
