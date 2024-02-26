//
// Created by Jonwil on 26/02/2024.
//

#ifndef TORRE_HANOI_PILAS__CREARTORRES_H
#define TORRE_HANOI_PILAS__CREARTORRES_H
#include "Pila.h"

class crearTorres {
private:
    Pila torre1;
    Pila torre2;
    Pila torre3;

public:
    crearTorres();
    Pila getTorre1();
    Pila getTorre2();
    Pila getTorre3();


};


#endif //TORRE_HANOI_PILAS__CREARTORRES_H
