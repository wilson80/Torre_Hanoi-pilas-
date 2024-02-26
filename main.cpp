#include <iostream>
#include "Pila.h"
using namespace std;

char verificarSeleccion(char seleccion){
    if(seleccion != 9){
        while(seleccion != 1 | seleccion != 2 | seleccion != 2){
                cout<<"Ingrese una seleccion correcta: ";
                cin>>seleccion;
        }
    }else{
        cout<<"Selecciono Salir del Juego";
    }
   return seleccion;

}

int main() {

    cout << "Prueba de la pila para la torre de Hanoi" <<endl;

    char seleccionTorre;
    char colocar_en_Torre;

    cout<< "seleccionar de torre: 1-2-3";
    cin>>seleccionTorre;
    seleccionTorre = verificarSeleccion(seleccionTorre);
    cout<<"ha seleccionado la torre: "<< seleccionTorre;


    cout<< "colocar en Torre: 1-2-3";
    cin>>colocar_en_Torre;
    colocar_en_Torre = verificarSeleccion(colocar_en_Torre);
    cout<<"Colocar en torre: "<< colocar_en_Torre;



    cout<<"Saliendo del Juego";


    return 0;
}
