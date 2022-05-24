#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double numerof, numero, numeroRaro;

    cout << "Ingrese un valor: " << endl;
    cin >> numero;

    numerof = modf(numero, &numeroRaro);

    cout << numero << " = " << numeroRaro << " + " << numerof << endl;

    return 0;
}