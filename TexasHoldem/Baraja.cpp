#include "stdafx.h"
#include "Baraja.h"
#include "Carta.h"
#include <iostream>


Baraja::Baraja()
{
	Carta baraja[52];
	
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 13; ++j) {
			baraja[(i * 13)+ j].setPalo(i);
			baraja[(i * 13) + j].setValor(j);
		}
	}

}//Fin de Constructor de Baraja


Carta* Baraja::getCarta() {
	Carta* respuesta = new Carta;
	int numero = rand() % 52;
	bool rep = false;
	while (rep == false) {
		respuesta = juego.get(numero);
		rep = respuesta.estaDisponible();
		if (rep == true) {
			respuesta.sacar();
		}
		else {
			respuesta = NULL;
		}
	}
	return respuesta;
}//Fin de getCarta

Baraja::~Baraja()
{


}// Fin de destructor de Baraja.