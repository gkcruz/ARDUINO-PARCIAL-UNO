#include <iostream>

using namespace std;

int numero1,numero2;

int main()
{
    cout << "Ingrese el primer numero: ";
    cin>>numero1;

    cout << "Ingrese el segundo numero: ";
    cin>>numero2;

    if(numero1>numero2)
    {
        cout << "El primer numero es: "<<numero2<<"\n";
        cout << "El segundo numero es: "<<numero1<<"\n";
    }
    else
    {
       cout << "El primer numero es: "<<numero1<<"\n";
       cout << "El segundo numero es: "<<numero2<<"\n";
    }
}
