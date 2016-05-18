#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;
/* ingresara las horas, el pago por hora luego calculara el total**/

int main()
{
    cout << "Ingresar las Horas";
    cin>>horas;

    cout<<"Ingresar pago por horas";
    cin>>pagohoras;

    pagot=horas*pagohoras;
    cout<<"pago total....:"<<pagot<<"\n";
}
