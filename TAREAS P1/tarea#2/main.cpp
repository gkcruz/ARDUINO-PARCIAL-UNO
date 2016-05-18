#include <iostream>

using namespace std;

int numero,digito;

int main()
{
    cout << "ingrese un numero ";
    cin>>numero;

    while(numero>10)
    {
        digito= numero%10;
        cout<<digito;
        numero=numero/10;

    }
    cout<<numero;
}
