//
// Created by Jonwil on 26/02/2024.
//

#include "crearTorres.h"

crearTorres::crearTorres() {
    torre1 = Pila();
    torre1.apilar(7);
    torre1.apilar(6);
    torre1.apilar(5);
    torre1.apilar(4);
    torre1.apilar(3);
    torre1.apilar(2);
    torre1.apilar(1);
    torre2 = Pila();
    torre3 = Pila();

}

Pila crearTorres::getTorre1() {
    return torre1;
}
Pila crearTorres::getTorre2() {
    return torre1;
}
Pila crearTorres::getTorre3() {
    return torre1;
}






