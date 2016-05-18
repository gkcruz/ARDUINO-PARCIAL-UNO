#include <iostream>
#include <stdio.h>

using namespace std;

int numero,cp=0,mayor=0;
char continuar;


int main()
{
    do
    {
        cout<<"ingrese un numero ";
        cin>>numero;
        if(numero%2==0)
        {
            cp++;
            if(numero>mayor)
                mayor=numero;
        }
        do
        {

           cout<<"Desea continuar ";
           cin>>continuar;
           continuar=toupper(continuar);
        }
    while((continuar!='S') && (continuar!='N'));
    }
        while(continuar!='N');
        cout<<"Mayor de los pares.... "<<mayor<<"\n";
}
