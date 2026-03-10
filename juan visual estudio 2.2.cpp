#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce el tamaño del arreglo: ";
    cin >> n;

    int* datos = new int[n];

    cout << "Arreglo de " << n << " creado correctamente." << endl;

    delete[] datos;

    return 0;
}