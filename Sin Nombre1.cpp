#include<iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void quitarPila(Nodo *&pila, int &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

int main() {
    Nodo *pila = NULL;
    int valor;
    char rpt;

    do {
        cout << "Escribe un numero: ";
        cin >> valor;

        Nodo *nuevoNodo = new Nodo();
        nuevoNodo->dato = valor;
        nuevoNodo->siguiente = pila;
        pila = nuevoNodo;

        cout << "Otro? (s/n): "; cin >> rpt;
    } while(rpt == 's');

    cout << "\nSacando de la pila: ";
    while(pila != NULL) {
        quitarPila(pila, valor);
        cout << valor << " ";
    }

    return 0;
}