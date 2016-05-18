#include <iostream>

using namespace std;

int tabla, multiplicacion,i;

int main()
{
    cout << "Ingrese la tabla que desea multiplicar: ";
    cin>>tabla;

    for(i=1;i<11;i++)
    {
        multiplicacion=tabla*i;

        cout<<tabla<<"x"<<i<<"= "<<multiplicacion<<"\n";
    }
}
