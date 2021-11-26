#include<iostream>

using namespace std; 

#include "Vans.h"
#include "Pickup.h"
#include "Sedan.h"

int main(){
	
	Van auto1 ("Ford","Transit","3"); 
	PickUp auto2 ("Ford","Lobo","6350Kg"); 
	Sedan auto3 ("Ford", "Onix", "Sin quemacoco");  
	
	cout<<"Caracteristicas de los autos: \n\n";
	
	cout<<"Van:\n";
	cout<<"Marca: "<<auto1.getMarca()<<"\n"; 
	cout<<"Modelo: "<<auto1.getModelo()<<"\n";
	cout<<"Estado: "<<auto1.getEstado()<<"\n";
	cout<<"Precio: "<<auto1.getPrecio()<<"\n"; 
	cout<<"Numero de puertas: "<<auto1.getPuertas()<<"\n\n";
		
	cout<<"Pick Up:\n";
	cout<<"Marca: "<<auto2.getMarca()<<"\n"; 
	cout<<"Modelo: "<<auto2.getModelo()<<"\n";
	cout<<"Estado: "<<auto2.getEstado()<<"\n";
	cout<<"Precio: "<<auto2.getPrecio()<<"\n"; 
	cout<<"Capacidad de carga: "<<auto2.getPeso()<<"\n\n";
	
	cout<<"Sedan:";
	cout<<"Marca"<<auto3.getMarca()<<"\n"; 
	cout<<"Modelo: "<<auto3.getModelo()<<"\n";
	cout<<"Estado: "<<auto3.getEstado()<<"\n";
	cout<<"Precio: "<<auto3.getPrecio()<<"\n"; 
	cout<<"Quemacoco: "<<auto3.getQuemacoco();
	
}
