#include <iostream>

using namespace std;

int numero,impar,i,mayor;
int main()
{
    mayor=0;
    impar=0;

    for(i=0;i<10;i++)
    {

    do
    {
            cout<<"ingrese un numero impar mayor a 50 ";
            cin>>numero;

            if(mayor<numero)
                mayor=numero;

    }while(!((numero%2!=0)&&(numero>50)));

    }
    cout<<"El numero mayor fue: "<<mayor<<"\n";
}
