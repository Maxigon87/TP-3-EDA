#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void funpot(long pot);

int main()
{

    long numero;

    cout << "Digite un numero" << endl;
    cin >> numero;

    funpot(numero);

    return 0;
}

void funpot(long pot)
{
    long resultado = 0;
    long oPot = pot;

    resultado = pow(pot, oPot);

    cout << "El resultado es: " << resultado << endl;
}