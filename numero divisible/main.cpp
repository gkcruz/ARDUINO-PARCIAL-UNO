#include <iostream>

using namespace std;

int numero;
int main()
{
    cout << "Ingresar un numero: ";
    cin>>numero;
    if((numero%5)==0)
    {
       cout << "Es divisible entre 5"<<"\n";
    }
    else
    {
     cout << "No es divisible entre 5 "<<"\n";
    }
}
