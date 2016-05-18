#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int n1,n2,n3;

int main()
{
    cout << "Ingresar Numero 1...:";
    cin>>n1;

    cout<<"Ingresar Numero 2...:";
    cin>>n2;

    cout<<"Ingresar Numero 3...:";
    cin>>n3;

    if((n1>n2)&&(n1>n3))
    {
        cout<<"El mayor es Numero es "<<n1;
    }
    else if(n2>n3)
    {
        cout<<"El mayor es Numero es "<<n2;
    }
    else
    {
        cout<<"El mayor es Numero es "<<n3;
    }
    cout<<"\n";
    system("PAUSE");
}

