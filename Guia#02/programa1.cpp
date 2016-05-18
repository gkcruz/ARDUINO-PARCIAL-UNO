#include <iostream>

using namespace std;

int contador,numero,divisible5;

int main()
{
    contador=0;
    divisible5=0;

    while(contador<10)
    {
        cout<<"ingrese un numero ";
        cin>>numero;

        if((numero%5)==0)
            divisible5++;

            contador++;
    }
    cout<<" numeros divisibles entre 5...: " <<divisible5<<"\n";
}

