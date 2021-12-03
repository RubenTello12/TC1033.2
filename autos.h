/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/
#ifndef AUTO_H
#define AUTO_H

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"Persona.h"
using namespace std; 

class Auto{
	//Atributos
	private:  
		string marca, modelo, estado; 
		int precio;  
	//Metodos 
	public: 
		Auto(string mar, string mod, string est, int pre){ //Constructor
			marca = mar; 
			modelo = mod; 
			estado = est; 
			precio = pre; 
		 			 
		}
//Getters	
		string getMarca(){
			return marca; 
		}
		
		string getModelo(){
			return modelo; 
		}
		
		string getEstado(){
			return estado; 
		}
		
		int getPrecio(){
			return precio;
		}
//Setters 
		string setEstado (string e){
			estado = e;
		}
		
		int setPrecio (int p){
			precio = p;
		}	
};

#endif
