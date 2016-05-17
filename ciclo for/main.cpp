#include <iostream>

using namespace std;

int i=0,suma=0,num;

int main()
{
    while(i<5)
    {
       cout << "Ingresar numero ";
       cin>>num;
       suma= suma+num;
       i++;
    }
   cout<<"suma de los numeros es "<<suma<<"\n";
}
