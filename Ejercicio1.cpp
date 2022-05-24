#include <iostream>
#include <conio.h>

using namespace std;

struct Persona
{
    char nombre[15];
    int edad;
    char sexo[15];
    int telefono;
} pa[2];

// void recibo(struct arreglo[]);
void mostrarDatos(Persona);

int main()
{

    for (int i = 1; i < 3; i++)
    {
        fflush(stdin);
        cout << "Complete los datos" << endl;
        cout << "**" << endl;
        cout << "Digite su nombre: " << endl;
        cin.getline(pa[i].nombre, 15, '\n');
        cout << "Ingresa edad: " << endl;
        cin >> pa[i].edad;
        fflush(stdin);
        cout << "Ingrese sexo: " << endl;
        cin.getline(pa[i].sexo, 15, '\n');
        cout << "Ingrese telefono: " << endl;
        cin >> pa[i].telefono;
    }

    mostrarDatos(pa[2]);

    return 0;
}

void mostrarDatos(Persona p)
{
    for (int i = 0; i < 2; i++)
    {
        if (pa[i].edad > 30)
            cout << pa[i].nombre << " es mayor con sus " << pa[i].edad << ", de sexo " << pa[i].sexo << " y telefono " << pa[i].telefono << endl;
    }
}