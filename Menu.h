#ifndef AGREGACION_MENU_H
#define AGREGACION_MENU_H

#include "Tierra.h"
#include "Tipos.h"

template <typename T>
T input(string label) {
 T value;
 cout << label;
 cin >> value;
 cin.clear();
 cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
 return value;
}
class Menu {
   TipoEntero opcion;
   Tierra tierra;
   void imprimirMenu();
   void seleccionarOpcion();
   void agregarObjeto();
   void removerObjeto();
   void dibujarMapa();
public:
   Menu(): opcion{} {}
   void ejecutar();
};
