#include <iostream>
using namespace std;
  
 
struct Estudiante {
string nombre;
int edad;
float promedio;
}; // <--- ¡No olvides el punto y coma!

int main() {
    Estudiante alumno1;
    
    alumno1.nombre = "Juan Pablo"; // 
    alumno1.edad = 17.5;
    alumno1.promedio = 18.5;

    cout << "Alumno: " << alumno1.nombre << endl;
    cout << "Promedio: " << alumno1.promedio << endl;
    cout << "Edad: " << alumno1.edad << endl;
    return 0;
}