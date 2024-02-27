//
// Created by Jonwil on 26/02/2024.
//

#include "ControlJuego.h"
#include <iostream>
#include <string>
using namespace std;


ControlJuego::ControlJuego() {
    pila1 = torres.getTorre1();
    pila2 = torres.getTorre2();
    pila3 = torres.getTorre3();
}

void ControlJuego::inicio() {
    int seleccionTorre;
    int colocar_en_Torre;
    int  completado = 0;
    cout<<"__________________HANOI_______________________"<<endl;
    imprimirTorres();

    while (completado==0){
        cout<< "seleccionar de torre: 1-2-3: ";
        cin>>seleccionTorre;
        seleccionTorre = verificarSeleccion(seleccionTorre);
        if(seleccionTorre ==9){
            completado==1;
            return;
        }else{
            cout<<"ha seleccionado la torre: "<< seleccionTorre <<endl;
        }

        cout<< "colocar en Torre: 1-2-3: ";
        cin>>colocar_en_Torre;
        colocar_en_Torre = verificarSeleccion(colocar_en_Torre);
        if(colocar_en_Torre ==9){
            completado==1;
            return;
        }else{
            cout<<"ha seleccionado colocar en torre: "<< colocar_en_Torre<<endl;
        }
        desapilarDe(seleccionTorre, colocar_en_Torre);
        imprimirTorres();
    }
    cout<<"Saliendo del Juego";

}

void ControlJuego::apilarEnTorre(int colocarEn, int datoInsertar) {
    switch (colocarEn) {
        case 1:
            pila1.apilar(datoInsertar);
            break;
        case 2:
            pila2.apilar(datoInsertar);
            break;
        case 3:
            pila3.apilar(datoInsertar);
            break;
    }

}
void ControlJuego::desapilarDe(int seleccion, int colocarEn) {
    int dato;
    switch (seleccion) {
        case 1:
            dato = pila1.desapilar();
            apilarEnTorre(colocarEn, dato);
            break;
        case 2:
            dato = pila2.desapilar();
            apilarEnTorre(colocarEn, dato);
            break;
        case 3:
            dato = pila3.desapilar();
            apilarEnTorre(colocarEn, dato);
            break;
    }
}


void ControlJuego::imprimirTorres() {
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"__________________________________________________"<<endl;
    pila1.imprimirPila();
    cout<<"__________________________________________________"<<endl;
    pila2.imprimirPila();
    cout<<"__________________________________________________"<<endl;
    pila3.imprimirPila();
    cout<<"__________________________________________________"<<endl;

}


int ControlJuego::verificarSeleccion(int seleccion) {
        if(seleccion==9){
            cout<<"Selecciono Salir del Juego"<<endl;
        }else{
            while(seleccion >3 | seleccion<1){
                cout<<"Ingrese una opcion correcta: ";
                int seleccionCorregida;
                cin>>seleccionCorregida;
                seleccion = seleccionCorregida;
                cout<<endl;
            }
        }
        return seleccion;

}