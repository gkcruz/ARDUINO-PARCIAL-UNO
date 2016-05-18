#include <iostream>

using namespace std;

int numero1,numero2,numero3;

int main()
{
    cout << "Ingrese el primer numero: ";
    cin>>numero1;

    cout << "Ingrese el segundo numero: ";
    cin>>numero2;

    cout << "Ingrese el tercer numero: ";
    cin>>numero3;

    if((numero1>numero2 && numero1>numero3) && (numero2<numero1 && numero2>numero3))
    {
        cout<<"El numero mayor es: "<<numero1<<"\n";
        cout<<"El numero medio es: "<<numero2<<"\n";
        cout<<"El numero menor es: "<<numero3<<"\n";
    }

    else if((numero1>numero2 && numero1>numero3) && (numero3<numero1 && numero3>numero2))
    {
      cout<<"El numero mayor es: "<<numero1<<"\n";
      cout<<"El numero medio es: "<<numero3<<"\n";
      cout<<"El numero menor es: "<<numero2<<"\n";
    }

      else if((numero2>numero1 && numero2>numero3) && (numero1<numero2 && numero1>numero3))
    {
      cout<<"El numero mayor es: "<<numero2<<"\n";
      cout<<"El numero medio es: "<<numero1<<"\n";
      cout<<"El numero menor es: "<<numero3<<"\n";
    }

      else if((numero2>numero1 && numero2>numero3) && (numero3<numero2 && numero3>numero1))
    {
      cout<<"El numero mayor es: "<<numero2<<"\n";
      cout<<"El numero medio es: "<<numero3<<"\n";
      cout<<"El numero menor es: "<<numero1<<"\n";
    }

      else if((numero3>numero1 && numero3>numero2) && (numero1<numero3 && numero1>numero2))
    {
      cout<<"El numero mayor es: "<<numero3<<"\n";
      cout<<"El numero medio es: "<<numero1<<"\n";
      cout<<"El numero menor es: "<<numero2<<"\n";
    }
    else
    {
      cout<<"El numero mayor es: "<<numero3<<"\n";
      cout<<"El numero medio es: "<<numero2<<"\n";
      cout<<"El numero menor es: "<<numero1<<"\n";
    }
}
