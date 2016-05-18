#include <iostream>

using namespace std;

int numero;

int main()
{
    cout << "Ingrese un Numero...: "<<"\n";
    cin>>numero;

    if(numero>0)
    cout << "El numero es Positivo...: "<<"\n";

    else if(numero<0)
        cout << "El numero es Negativo...: "<<"\n";

        else
            cout << "El numero es Cero : "<<"\n";
}
