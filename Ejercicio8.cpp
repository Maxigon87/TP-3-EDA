#include <iostream>
#include <conio.h>
using namespace std;

int maximo(int &a, int &b, int &c)
{
    int max = 0;

    if (a > b && a > c)
    {
        max = a;
    }

    else if (b > a && b > c)
        max = b;

    else if (c > a && c > b)
        max = c;

    else if (a > c && a == b)
        max = a;

    else if (b > c && b == a)
        max = b;

    else if (c > a && c == b)
        max = c;

    else if (a > b && a == c) // 100 10 100
        max = c;

    else if (a == b && b == c && a == c)
        max = a;

    return max;
}

int main()
{
    int n1, n2, n3, mayor;

    cout << "1) Ingrese numero: ";
    cin >> n1;
    cout << "\n2) Ingrese numero: ";
    cin >> n2;
    cout << "\n3) Ingrese numero: ";
    cin >> n3;

    mayor = maximo(n1, n2, n3);

    cout << "\nNumero mas grande: " << mayor << endl;

    getch();
    return 0;
}