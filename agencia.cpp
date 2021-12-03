/*
Pensamiento computacional orientado a objetos
Proyecto Autos 
Rubén Tello Fuentes 
A01611039
03/12/2021
*/
#include<iostream>

using namespace std; 

#include "Vans.h"
#include "Pickup.h"
#include "Sedan.h"
#include "Persona.h"

int main(){
	//Creando un auto de cada clase
	Van auto1 ("Ford","Transit","3"); 
	PickUp auto2 ("Ford","Lobo","6350Kg"); 
	Sedan auto3 ("Ford", "Onix", "Sin quemacoco");  
	//Mostrar las caracteristicas de los autos 
	cout<<"Caracteristicas de los autos: \n\n";
	//Crendo pasajero para Van 
	Persona persona1 ("Ruben",20);
	//Imprimir datos de la Van 
	cout<<"Van:\n";
	cout<<"Marca: "<<auto1.getMarca()<<endl; 
	cout<<"Modelo: "<<auto1.getModelo()<<endl;
	cout<<"Estado: "<<auto1.getEstado()<<endl;
	cout<<"Precio: "<<auto1.getPrecio()<<endl;   
	cout<<"Numero de puertas: "<<auto1.getPuertas()<<endl;
	cout<<"Nombre de pasajero: "<<persona1.getNombre()<<endl; 
	cout<<"Edad de pasajero: "<<persona1.getEdad()<<"\n\n"; 
	//Imprimir datos de la Pick Up	
	cout<<"Pick Up:\n";
	cout<<"Marca: "<<auto2.getMarca()<<endl; 
	cout<<"Modelo: "<<auto2.getModelo()<<endl;
	cout<<"Estado: "<<auto2.getEstado()<<endl;
	cout<<"Precio: "<<auto2.getPrecio()<<endl; 
	cout<<"Capacidad de carga: "<<auto2.getPeso()<<"\n\n";
	//Imprimir datos del Sedan
	cout<<"Sedan:\n";
	cout<<"Marca"<<auto3.getMarca()<<endl; 
	cout<<"Modelo: "<<auto3.getModelo()<<endl;
	cout<<"Estado: "<<auto3.getEstado()<<endl;
	cout<<"Precio: "<<auto3.getPrecio()<<endl; 
	cout<<"Quemacoco: "<<auto3.getQuemacoco();	
}
