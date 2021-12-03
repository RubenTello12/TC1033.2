/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/
#ifndef SEDAN_H
#define SEDAN_H

#include"autos.h"

class Sedan: public Auto{ 
	//Atributos 
	private: 
		string quemacoco;  
	//Metodos	
	public: 
		Sedan(string mar, string mod, string qcoco): Auto(mar, mod,"Nuevo", 308900){
			quemacoco = qcoco;
		}
	//Getter para ver si el auto tiene quemacoco
		string getQuemacoco(){
			return quemacoco;
		}
};

#endif
