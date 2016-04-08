#include "stdafx.h"
#include "Carta.h"


Carta::Carta()
{
}//Fin de Constructor default

Carta::Carta(int val, int palo, bool disp) {

}//Fin de ConstructorCarta

int Carta::getPalo(){

	return palo;
}//Fin de metodo getPalo


int Carta::getValor() {

	return valor;

}//Fin de metodo getValor


bool Carta::estaDisponible() {
	
	return disponible;
}//Fin de metodo Disponible

Carta::~Carta()
{
}


