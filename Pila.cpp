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
    string torre1 ="      __";
    string torre2 ="     __ __";
    string torre3 ="    __ __ __";
    string torre4 ="   __ __ __ __";
    string torre5 ="  __ __ __ __ __";
    string torre6 =" __ __ __ __ __ __";
    string torre7 ="__ __ __ __ __ __ __";

    cout << "Imprimiendo la Lista " << endl;
    int contador = 8;
    Nodo *nodo = top;

    while (nodo) {
        contador--;
        int numeroDisco = nodo->dato;
        switch (numeroDisco) {
            case 1:
                cout << "[" <<contador << "]"<< torre1<< endl;
            case 2:
                cout << "[" <<contador << "]"<< torre2<< endl;
            case 3:
                cout << "[" <<contador << "]"<< torre3<< endl;
            case 4:
                cout << "[" <<contador << "]"<< torre3<< endl;
            case 5:
                cout << "[" <<contador << "]"<< torre4<< endl;
            case 6:
                cout << "[" <<contador << "]"<< torre5<< endl;
            case 7:
                cout << "[" <<contador << "]"<< torre6<< endl;

        }

        nodo = nodo->siguiente;

    }
    contador = 8



}