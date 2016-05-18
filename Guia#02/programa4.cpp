#include <iostream>

using namespace std;

int numero;
char continuar;


int main()
{
    continuar= 'S';

    while(continuar=='S' || continuar=='N')
    {

        while(continuar=='S'){
        cout<<"ingrese un numero ";
        cin>>numero;

        cout<< "Desea continuar? si:S y no:N ";
        cin>>continuar;
        }
        break;
    }
}
