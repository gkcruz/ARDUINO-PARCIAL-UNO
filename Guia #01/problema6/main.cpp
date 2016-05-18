#include <iostream>

using namespace std;

int cliente,cantidad;
float precio,subtotal,descuento,total;

int main()
{
    cout << "Ingrese el numero de cliente 1-3 ";
    cin>>cliente;

    cout << "Ingrese el precio del producto ";
    cin>>precio;

    cout << "Ingrese la cantidad del producto: ";
    cin>>cantidad;

    if(cliente==1)
    {
     subtotal=precio*cantidad;
     total=subtotal-subtotal*0.07;

     cout << "El subtotal es: "<<subtotal<<"\n";
     cout << "El Total es: "<<total<<"\n";
    }
     else if(cliente==2)
     {
     subtotal=precio*cantidad;
     total=subtotal-subtotal*0.08;

     cout << "El subtotal es: "<<subtotal<<"\n";
     cout << "El Total es: "<<total<<"\n";
    }

    else
    {
        subtotal=precio*cantidad;
     total=subtotal-subtotal*0.1;

     cout << "El subtotal es: "<<subtotal<<"\n";
     cout << "El Total es: "<<total<<"\n";
    }


}


