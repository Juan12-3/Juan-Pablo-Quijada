#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion {
    char Direccion[40];
    char Ciudad[20];
    char Municipio[20];
};

struct Empleado {
    char Nombre[30];
    struct info_direccion dir_empleado; 
    double Salario;
} empleados[2];


int main() {
    for(int i=0; i<2; i++) {
        fflush(stdin); 
        cout << "Digite su nombre: ";
        cin.getline(empleados[i].Nombre, 20, '\n');
        
        cout << "Digite su direccion:";
        cin.getline(empleados[i].dir_empleado.Direccion, 30, '\n');
        
        cout << "Digite la ciudad:";
        cin.getline(empleados[i].dir_empleado.Ciudad, 20, '\n');
        
        cout << "Digite la Municipio:";
        cin.getline(empleados[i].dir_empleado.Municipio, 20, '\n');
        
        cout << "Digite el salario:";
        cin >> empleados[i].Salario;
        cout << "\n";
    }

    
    for(int i=0; i<2; i++) {
        cout << "Nombre:" << empleados[i].Nombre << endl;
        cout << "Direccion:" << empleados[i].dir_empleado.Direccion << endl;
        cout << "Ciudad:" << empleados[i].dir_empleado.Ciudad << endl;
        cout << "Municipio:" << empleados[i].dir_empleado.Municipio << endl;
        cout << "Salario:" << empleados[i].Salario << endl;
        cout << "\n";
    }

    getch();
    return 0;
}