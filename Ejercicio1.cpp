#include <iostream>

using namespace std;

struct personas
{
    char nombre[20];
    int edad[2];
    char sexo[10];
    double telefono[10];
} personas[5];

main()
{

    int may = 30;
    cout << "Ingrese los datos de las 5 personas." << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre: ";
        cin.getline(personas[i].nombre,20,'\n');

        cout << "Ingrese la edad: ";
        cin.getline(personas[i].edad,2,'\n');

        cout << "Ingrese el sexo: ";
        cin.getline(personas[i].sexo,10,'\n');

        cout << "Ingrese el telefono: ";
        cin.getline(personas[i].telefono,10,'\n');

        if (personas[i].edad > may)
        {
            may = personas[i].edad;
            cout << personas[i].nombre << " es mayor de 30."<<endl;
        }
        
    }
}