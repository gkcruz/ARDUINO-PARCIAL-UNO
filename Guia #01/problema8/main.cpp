#include <iostream>

using namespace std;

int nota1,nota2,nota3,promedio;

int main()
{
    cout << "Ingrese la primera nota ";
    cin>>nota1;

    cout << "Ingrese la segunda nota ";
    cin>>nota2;

    cout << "Ingrese la tercera nota ";
    cin>>nota3;

    if(nota1<nota2 && nota1<nota3)
    {
        promedio=(nota2+nota3)/2;
        cout<<"el promedio de las dos notas mas altas es : "<<promedio<<"\n";
    }
    else if(nota2<nota1 && nota2<nota3)
    {
        promedio=(nota1+nota3)/2;
        cout<<"el promedio de las dos notas mas altas es : "<<promedio<<"\n";
    }
    else
    {
        promedio=(nota1+nota2)/2;
        cout<<"el promedio de las dos notas mas altas es : "<<promedio<<"\n";
    }

}
