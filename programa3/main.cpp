#include <iostream>

using namespace std;
/*ingresar la nota acumulada y examen del
alumno y presentar la nota final*/

int acumulado,examen,total;

int main()
{
    cout << "Ingrese nota acumulada...:";
    cin>>acumulado;

    cout << "Ingrese nota de examen...:";
    cin>>examen;

    total= acumulado + examen ;
    cout << "La nota final es...:"<<total<<"\n";

    if(total>=60)
    {
     cout<<"APROBADO";
    }
    else
    {
        cout<<"REPROBADO";
    }

cout<<"\n";

}
