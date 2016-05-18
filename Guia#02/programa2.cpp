#include <iostream>

using namespace std;

int i,numero,primo,div;

int main()
{
    primo=0;
    div=0;
    i=0;

    cout<<"ingrese un numero ";
        cin>>numero;

    while(i<100)
    {
        i++;

        if((numero%i)==0)
            div++;



        }

        if(div==2)
      cout<<" El numero ingresado es primo " <<"\n";

        else
            cout<<" El numero ingresado es No es primo " <<"\n";

}
