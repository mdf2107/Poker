#pragma once

#include "Carta.h"

/*
La clase Baraja se encarga precisamente de barajar las 52 cartas del mazo durante la partida de poquer.
Funcionará como un Auxilar de Administrador para no cargar la clase y dejar funciones escenciales para el juego bajo su
control.
*/
class Baraja
{

/*
Definicion de metodos y variables publicas de la clase Baraja
*/
public:

	//Lista enlazada de cartas que conformarán el mazo (Podriamos hacer un vector de tam 52 tambien)
	Carta* mazoCartas;

	/*
	Constructor por defecto de la clase Baraja
	*/
	Baraja();
	~Baraja();

	/*
	Getter de clase baraja que funciona para devolver una carta cuando Administrador la solicite
	*/
	Carta* getCarta();


	/*
	Este metodo se encarga de mezclar el mazo de cartas para darle una consecución aleatoria.
	*/
	void barajarCartas();


/*
Metodos y varibles privadas de la clase Baraja.
*/
private:

	int tamañoBaraja;

};

