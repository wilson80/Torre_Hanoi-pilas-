//
// Created by Jonwil on 26/02/2024.
//

#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
    top = nullptr;
    longitud=0;
}

void Pila::apilar(int dato) {
    if(top==nullptr){
        Nodo * nodo = new Nodo(dato);
        top = nodo;
        longitud++;
        return;
    }
    Nodo * nodo = new Nodo(dato);
    nodo->siguiente = top;
    top = nodo;
    longitud++;
}

void Pila::imprimirPila() {
    int * torre [7] = {nullptr};

    string torre0 ="      *";
    string torre1 ="      __";
    string torre2 ="     __ __";
    string torre3 ="    __ __ __";
    string torre4 ="   __ __ __ __";
    string torre5 ="  __ __ __ __ __";
    string torre6 =" __ __ __ __ __ __";
    string torre7 ="__ __ __ __ __ __ __";

    int contador = 0;
    Nodo *nodo = top;
    while (nodo) {
        int numeroDisco = nodo->dato;
        torre[contador] = new int(numeroDisco);
        contador++;
//        cout<<"dato: " <<numeroDisco << ", ";
        nodo = nodo->siguiente;
    }

//    cout<<endl;
    int nivelesVacios =  7-longitud;
    for (int i = 0; i < nivelesVacios; ++i) {
            cout << "[" <<i+1<< "]"<< torre0<< endl;
    }

    nivelesVacios++;
    for (int i = 0; i < 7; ++i) {
        if(torre[i]!= nullptr) {
            switch (*torre[i]) {
                case 1:
                    cout << "[" << i + nivelesVacios << "]" << torre1 << endl;
                    break;
                case 2:
                    cout << "[" << i + nivelesVacios << "]" << torre2 << endl;
                    break;
                case 3:
                    cout << "[" << i + nivelesVacios << "]" << torre3 << endl;
                    break;
                case 4:
                    cout << "[" << i + nivelesVacios << "]" << torre4 << endl;
                    break;
                case 5:
                    cout << "[" << i + nivelesVacios << "]" << torre5 << endl;
                    break;
                case 6:
                    cout << "[" << i + nivelesVacios << "]" << torre6 << endl;
                    break;
                case 7:
                    cout << "[" << i + nivelesVacios << "]" << torre7 << endl;
                    break;
            }
        }
    }
    contador = 0;
}

int Pila::desapilar() {
    int dato= top->dato ;
    if(top!= nullptr){
        top = top->siguiente;
        longitud--;
    }
    return dato;
}

int Pila::getLongitud() {
    return longitud;
}

