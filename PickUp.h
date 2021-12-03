/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/
#ifndef PICKUP_H
#define PICKUP_H

#include "autos.h"

class PickUp: public Auto{
	//Atributos 
	private: 
		string peso; 
	//Metodos
	public: 
		PickUp (string mar, string mod, string pes): Auto(mar,mod,"Nuevo",999400){	
			peso = pes;
		}
	//Getter para el peso que soporta la Pick Up
		string getPeso(){
			return peso;      
		}
};

#endif
