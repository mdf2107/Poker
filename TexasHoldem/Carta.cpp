#include "stdafx.h"
#include "Carta.h"


Carta::Carta()
{
	int valor = 0;
	int palo = 0;
	bool dis = true;
}//Fin de Constructor default

Carta::Carta(int val, int pal)
{
	int valor = val;
	int palo = pal;
	bool dis = true;
}//Fin de ConstructorCarta

Carta::~Carta()
{
}

int Carta::getPalo() {

	return palo;
}//Fin de metodo getPalo

void Carta::setPalo(int i)
{
	palo = i;
}



