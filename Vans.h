/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/
#ifndef VAN_H
#define VAN_H

#include "autos.h" 

class Van: public Auto{
	//Atributos 
	private: 
		string puertas;  
	//Metodos
	public: 
		Van(string mar, string mod, string pue):Auto(mar,mod,"Usado", 731200){
			puertas = pue;
		}
	//Getter para la cantidad de puertas que tiene la Van 
		string getPuertas(){
			return puertas; 
		}
	
};

#endif
