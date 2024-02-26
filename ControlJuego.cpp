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
    imprimirJuego();

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


    }
    cout<<"Saliendo del Juego";

}

void ControlJuego::imprimirJuego() {

    pila1.desapilar();
    pila1.desapilar();
    pila1.desapilar();

    //    string torre1[7];
//    string torre2[7];
//    string torre3[7];
//
//
//
//
//
//    torre1 [0]="      __";
//    torre1 [1]="     __ __";
//    torre1 [2]="    __ __ __";
//    torre1 [3]="   __ __ __ __";
//    torre1 [4]="  __ __ __ __ __";
//    torre1 [5]=" __ __ __ __ __ __";
//    torre1 [6]="__ __ __ __ __ __ __";
//
//
//    for (int i = 0; i < 7; ++i) {
//        cout << torre1[i] << endl;
//    }





//1
//2
//3
//4
//5
//6
//7
//
//




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