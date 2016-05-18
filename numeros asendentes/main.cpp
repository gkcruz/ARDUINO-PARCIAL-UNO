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

    if((n1<n2)&&(n2<n3))
    {
        cout<<"Ascendente"<<"\n";
    }
    else
    {
     cout<<"No es Ascendente"<<"\n";
    }
    system("PAUSE");
}
