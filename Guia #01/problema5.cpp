#include <iostream>

using namespace std;

int examen,acumulado,total;

int main()
{
    cout << "Ingrese la nota de acumulados: ";
    cin>>acumulado;

    cout<<"Ingrese la nota de examen: ";
    cin>>examen;

    total=examen+acumulado;

    if(total>56 && total<60)
    {
        total=60;
        cout<<"la nota final es: "<<total;
    }

    else
    {
        cout<<"la nota final es: "<<total;
    }

}
