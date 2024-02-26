//
// Created by Jonwil on 26/02/2024.
//

#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
    top = nullptr;
}

void Pila::apilar(int dato) {
    if(top==nullptr){
        Nodo * nodo = new Nodo(dato);
        top = nodo;
        return;
    }
    Nodo * nodo = new Nodo(dato);

    nodo->siguiente = top;
    top = nodo;
}
void Pila::desapilar() {
    cout << "Imprimiendo la Lista " << endl;
    Nodo *nodo = top;
    while (nodo) {
        cout << "dato: " << nodo->dato << endl;
        nodo = nodo->siguiente;
    }
}