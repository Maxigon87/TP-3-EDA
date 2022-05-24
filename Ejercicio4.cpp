#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}pers;

void pedirDatos();
void mostrarDatos(Persona);

int main(){
    pedirDatos();
    mostrarDatos(pers);

    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(pers.nombre,30,'\n');
    cout<<"Digite su edad: ";
    cin>>pers.edad;
}

void mostrarDatos(Persona p){
    cout << "Nombre: "<<p.nombre<<endl;
    cout<<"Edad: " <<p.edad<<endl;
}