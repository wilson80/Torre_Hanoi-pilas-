//
// Created by Jonwil on 26/02/2024.
//

#ifndef TORRE_HANOI_PILAS__PILA_H
#define TORRE_HANOI_PILAS__PILA_H


class Pila {

private:
    struct Nodo{
        int dato;
        Nodo * siguiente;
        Nodo(int valor): dato(valor), siguiente(nullptr){
        }
    };
    Nodo * top;
    int longitud;

public:
    Pila();
    void apilar(int );
    void imprimirPila();
    int desapilar();
    int getLongitud();

};


#endif //TORRE_HANOI_PILAS__PILA_H
