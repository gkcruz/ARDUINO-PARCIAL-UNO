#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
ingresar el dia de la semana en numero entero de
1-7, luego indicar en letras el dia de la semana
a que pertenece.
*/
int dia;

int main()
{
    cout<<"Ingrese el Dia ";
    cin>>dia;

    if(dia==1)
    {
        cout<<"Lunes"<<"\n";
    }
    else if(dia==2)
    {
        cout<<"Martes"<<"\n";
    }
    else if(dia==3)
    {
        cout<<"Miercoles"<<"\n";
    }
    else if(dia==4)
    {
        cout<<"Jueves"<<"\n";
    }
    else if(dia==5)
    {
        cout<<"Viernes"<<"\n";
    }
    else if (dia==6)
    {
        cout<<"Sabado"<<"\n";
    }
    else if(dia==7)
    {
        cout<<"Domingo"<<"\n";
    }
    else
    {
       cout<<"Dia incorrecto"<<"\n";
    }
   system("PAUSE");
}
