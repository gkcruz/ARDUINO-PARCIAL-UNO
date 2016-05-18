#include <iostream>

using namespace std;

int dia;

int main()
{
    cout<<"Ingrese el Dia ";
    cin>>dia;

    switch(dia)
    {
    case 1:
        cout<<"Domingo";
        break;
    case 2:
        cout<<"Lunes";
        break;
    case 3:
        cout<<"Martes";
        break;
    case 4:
        cout<<"Miercoles";
        break;
    case 5:
        cout<<"Jueves";
        break;
    case 6:
        cout<<"Viernes";
        break;
    case 7:
        cout<<"Sabado";
        break;
    default:
        cout<<"Dia incorrecto ";
        break;

    }









}
