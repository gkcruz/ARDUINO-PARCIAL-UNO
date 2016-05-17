#include <iostream>

using namespace std;

int num,suma=0,prom,c=0;
char resp;

int main()
{
    do
    {

   do
   {
            cout << "Ingresar numero div entre 5 mayor a 100 ";
            cin>>num;
   }    while((num%5 !=0) &&(num<100));
        suma+=num;

        do
        {
            cout<<"desea continuar ";
            cin>>resp;
            resp=toupper(resp);
        }while((resp!='S') &&(resp!='N'));

        c++;
    }while(resp!='N');
    prom=suma/c;
    cout<<"promedio es "<<prom<<"\n";
}
