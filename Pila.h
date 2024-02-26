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

public:
    Pila();
    void apilar(int );
    void desapilar();

};


#endif //TORRE_HANOI_PILAS__PILA_H
