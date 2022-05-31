#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void cuadrado(int vec[], int);
void mostrar(int vec[], int);

int main()
{

    const int TAM = 3;
    int vec[TAM] = {10, 11, 12};

    cout<<"Los valores de la const son: "<<endl;
    mostrar(vec,TAM);
    cout<<"\n";
    cout<<"-------------------------------------\n";
    cout<<"Los valores de la const al cuadrado son: "<<endl;
    cuadrado(vec, TAM);
    mostrar(vec,TAM);
}

void cuadrado(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = pow(vec[i], 2);
    }
}

void mostrar(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << " ";
    }
}