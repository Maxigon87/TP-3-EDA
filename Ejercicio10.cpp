#include <iostream>
using namespace std;
bool esPrimo(int numero);
int resp;
int valor;
int main()
{

    while (1 == 1)
    {
        cout << "        Primotron:" << endl;
        cout << "***********************\n";
        cout << "Elija una opcion: " << endl;
        cout << "1. Determinar si un numero es primo." << endl;
        cout << "2. Calcular todos los numeros primos menores ingresados." << endl;
        cout << "3. Salir." << endl;
        cin >> resp;

        switch (resp)
        {
        case 1:
            cout << "Ingrese un valor para ver si es primo o no: " << endl;
            cin >> valor;
            esPrimo(valor);

            break;
        case 2:
            int cant;
            cout << "Ingrese un numero entero positivo. " << endl;
            cin >> cant;

            for (int i = 2; i < cant; i++)
            {
                int creciente = 2;
                bool esPrimo = true;

                while (esPrimo && creciente < i)
                {
                    if (i % creciente == 0)
                    {
                        esPrimo = false;
                    }
                    else
                    {
                        creciente++;
                    }
                }
                if (esPrimo)
                {
                    cout << i << "es un numero primo" << endl;
                }
            }
            break;
        case 3:
            exit(EXIT_SUCCESS);

        default:
            cout << "La opcion elegida no es valida" << endl;
        }
    }
}

bool esPrimo(int numero)
{

    if (numero == 0 || numero == 1 || numero == 4)
        return false;
    for (int x = 2; x < numero / 2; x++)
    {
        if (numero % x == 0)
            return false;
        
    }

    return true;
    
}