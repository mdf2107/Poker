#pragma once

/**
La clase Carta simula el comportamiento de un objeto Carta en una baraja de poquer, tiene métodos básicos para 
pedir información de la carta y un constructor por que crea la carta con sus valores desde el inicio
**/
class Carta
{

/*
Lista de atributos de la clase:
1. Un entero llamado valor, para definir el valor de la carta en escala de As a King
2. Un entero llamado Palo, identificador del palo al cual pertenece la carta, en escala de 1 a 4.
3. Un estado booleano llamado Disponible, indica si una carta ya fue usada o aun puede sacarse de la baraja
*/
private:

	int valor;
	int palo;
	bool disponible;


/*
Definiciones de métodos y atributos públicos de la clase
*/
public:
	
	/*
	Constructor por defecto de la clase carta.
	*/
	Carta();

	/*
	Constructor personalizado para la clase Carta, recibe y asigna los valores de parámetro a las variables propias
	de la carta, Valor, Palo y Disponible
	*/
	Carta(int, int, bool);

	~Carta();


	/*
	Getter para obtener el valor correspondiente a la carta, devuelve un valor entre 1 y 13, dependiendo del valor asignado
	a la carta
	*/
	int getValor();

	/*
	Getter para obtener el palo correspondiente a la carta, devuelve un valor entre 1 y 4, dependiendo del palo asignado
	*/
	int getPalo();

	/*
	Este método devuelve un tipo de dato booleano para confirmar si la carta puede seleccionarse de la baraja, o si ya ha sido 
	utilizada durante alguna ronda de apuesta.
	*/
	bool estaDisponible();

};//Fin de la clase Carta