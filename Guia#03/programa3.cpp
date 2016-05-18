#include <iostream>

using namespace std;

int tabla,i,k,mult;

int main()
{
    for(i=1;i<=5;i++)
    {

        for(k=1;k<=10;k++)
        {
            mult=i*k;

            cout<<i<<"X"<<k<<"="<<mult<<"\n";
        }
        cout<<"\n";
    }

}
