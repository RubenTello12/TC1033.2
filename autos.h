#ifndef AUTO_H
#define AUTO_H

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std; 

class Auto{
	private:  
		string marca, modelo, estado; 
		int precio; 
	
	public: 
		Auto(string mar, string mod, string est, int pre){
			marca = mar; 
			modelo = mod; 
			estado = est; 
			precio = pre; 
			 			 
		}
		
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
		
		string setEstado (string e){
			estado = e;
		}
		
		int setPrecio (int p){
			precio = p;
		}
		
	
};

#endif
