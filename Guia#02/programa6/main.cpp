#include <iostream>

using namespace std;

int turno,mayorsal,horas,totalhoras,pagoxhora,pago;
int i=0;
char continuar;

int main()
{


    do
    {
        pagoxhora=0;
        pago=0;
        horas=0;
        totalhoras=0;

        do
        {
            cout<<" ingrese el numero de turno: ";
            cin>>turno;

        }
        while(turno<1 || turno>3);

        for(i=0;i<5;i++)
        {

            cout<<" Ingrese las horas de los 5 dias de la semana respectivamente.. ";
            cin>>horas;

            totalhoras=totalhoras+horas;
        }

        switch(turno)
        {
        case 1:
            pagoxhora=100;
            break;
        case 2:
            pagoxhora=150;
            break;
        default:
            pagoxhora=200;
            break;
        }

        pago=totalhoras*pagoxhora;

        if(mayorsal<pago)
            mayorsal=pago;

        cout<< "el total de horas trabajadas fueron: "<<totalhoras<<"\n";
        cout<< "El pago total es: "<<pago<<"\n";

        do
        {

        cout<<"Desea continuar: ";
        cin>>continuar;
        }
        while((continuar!='S') && (continuar!='N'));

    }
    while(continuar=='S');
    cout<< "El Salario mayor fue : "<<mayorsal<<"\n";
}
