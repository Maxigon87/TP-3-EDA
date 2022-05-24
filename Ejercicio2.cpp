#include <iostream>
#include <conio.h>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
} FA, FC;

void cumple(int dia, int mes);

int main()
{

    cout << "Digite la fecha actual: " << endl;

    cout << "Ingrese el dia:" << endl;
    cin >> FA.dia;
    cout << "Ingrese el mes: " << endl;
    cin >> FA.mes;

    cout << "Digite la fecha cumple: " << endl;

    cout << "Ingrese el dia:" << endl;
    cin >> FC.dia;
    cout << "Ingrese el mes: " << endl;
    cin >> FC.mes;

    cumple(FC.dia, FC.mes);

    return 0;
}

void cumple(int dia, int mes)
{
    if (dia == FA.dia && mes == FA.mes)
    {
        cout << "Que los cumplas feliz" << endl;
    }
    else
    {
        cout << "No es tu cumple, no te regalo nada" << endl;
    }
}