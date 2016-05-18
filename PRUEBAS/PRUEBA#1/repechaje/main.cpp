#include<iostream>

using namespace std;
int numero, d;
int rst, suma1, suma2;
int main()


{
suma1=0;
suma2=0;
rst=0;
    cout<<"ingrese un numero>>>>>>";
    cin>>numero;
    while(numero>0)
    {
d=numero%10;
numero=numero/10;

if (d>rst)
    {
        rst=d;
    }
if ((d==1)|| (d==3)|| (d==5)|| (d==7)|| (d==9))
{
suma1=suma1+1;
}
if ((d==2)|| (d==4)|| (d==6)|| (d==8)|| (d==0))
{
suma2=suma2+1;
}
}
cout<<"Cantidad de Impares        " <<suma1;
cout<<">>>>>>";
cout<<"Cantidad de Pares        " <<suma2;
cout<<">>>>>>";
cout<<"Numero mayor" <<rst;

}
