/*
Programa_15 ejerciciio de banderas, tipo de datos booleanos, hacer mientras.
estructura selectiva multiple
Autor: Luis Alberto García Rodríguez
N° lista 11
fecha 19 de febrero del 2015
*/
#include <stdlib.h>
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    bool ban = true;
    int n;

    do{
    cout << "\n\n Introduce un numero mayor a 6 para salir... \t";
    cin>>n;
        if (n>6)
            ban = false;

    }
    while (ban == true);
    cout<<"\n\n\tSaliendo... \n\n\t\t";
    system ("pause");

    return 0;
}
