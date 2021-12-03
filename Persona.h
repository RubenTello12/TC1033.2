/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/

#ifndef PERSONA_H
#define PERSONA_H
#include"autos.h"

using namespace std; 
//Clase que se agrega 
class Persona{
	//Atributos 
	private: 
		string nombre; 
		int edad; 
	//Metodos
	public: 
		Persona(string nom, int ed){ //Constructor
			nombre = nom; 
			edad = ed; 
		}
//Getters 
	string getNombre(){
		return nombre; 
	}
	
	int getEdad(){
		return edad; 
	}
//Setters
	string setNombre(string n){
		nombre = n; 
	}
	
	int setEdad(int e){
		edad = e; 
	}	
};

#endif
