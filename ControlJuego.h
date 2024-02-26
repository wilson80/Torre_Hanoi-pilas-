//
// Created by Jonwil on 26/02/2024.
//

#ifndef TORRE_HANOI_PILAS__CONTROLJUEGO_H
#define TORRE_HANOI_PILAS__CONTROLJUEGO_H
#include "Pila.h"
#include "crearTorres.h"

class ControlJuego {

private:
    Pila pila1;
    Pila pila2;
    Pila pila3;
    crearTorres torres = crearTorres();

public:
    ControlJuego();
    void inicio();
    void imprimirJuego();
    int verificarSeleccion(int);

};


#endif //TORRE_HANOI_PILAS__CONTROLJUEGO_H
