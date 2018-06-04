#include <string>
#include <iostream>
#include <ctime>
#include "cListaT.h"
#include "Funciones.h"

int main(){

    cListaT <cJugador> Jugadores(2);
	cListaT <cPais> Paises(12);

    Generar_Paises(Paises);
    
    return 0;
}