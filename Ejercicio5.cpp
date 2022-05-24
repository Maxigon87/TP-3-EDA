#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <iomanip> //setw()
#include <ctime>   //srand

using namespace std;

int main()
{
    int mat[5][5];
    int f, c, fi, co, men = 1000;

    srand(time(0));

    for (int f = 0; f < 5; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            mat[f][c] = 1 + rand() % 20;
        }
    }

    for (int f = 0; f < 5; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << setw(3) << mat[f][c] << " ";
        }
        cout << endl;
    }

    for (int f = 0; f < 5; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (men > mat[f][c])
            {
                men = mat[f][c];
            }
        }
    }
    cout << "El valor mas pequeño es: " << men << endl;

    return 0;
}
