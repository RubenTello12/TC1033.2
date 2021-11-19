#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "autos.h"
using namespace std; 

int main(){
	int opcion; 
	
	cout<<"Seleccione el tipo de auto que desea agregar\n"<<endl; 
	cout<<"1.- Van"<<endl; 
	cout<<"2.- Pick Up"<<endl; 
	cout<<"3.- Sedan\n"<<endl; 
	cout<<"Opcion: "<<endl; 
	cin>>opcion; 
	
	if (opcion == 1){
		Van v1; 
		string marca, modelo, estado; 
		int puertas, precio; 
		
		cout<<"\Digite la marca: "<<endl; cin>>marca; 
		cout<<"Digite el modelo: "<<endl; cin>>modelo; 
		cout<<"Digite el estado (nuevo/seminuevo): "<<endl; cin>>estado; 
		cout<<"Digite el numero de puertas: "<<endl; cin>>puertas; 
		cout<<"Digite el precio: "<<endl; cin>>precio; 
		
		v1.setmarca(marca);
		v1.setmodelo(modelo); 
		v1.setestado(estado);
		v1.setpuertas(puertas);
		v1.setprecio(precio);
		std::cout<<"\nMarca: "<<v1.getmarca()<<endl; 
		std::cout<<"Modelo: "<<v1.getmodelo()<<endl; 
		std::cout<<"Estado: "<<v1.getestado()<<endl;
		std::cout<<"Numero de puertas: "<<v1.getpuertas()<<endl; 
		std::cout<<"Precio: "<<v1.getprecio()<<endl; 
	}
	else if (opcion == 2){
		PickUp p1; 
		string marca, modelo, estado; 
		float peso; 
		int precio; 
		
		cout<<"\Digite la marca: "<<endl; cin>>marca; 
		cout<<"Digite el modelo: "<<endl; cin>>modelo; 
		cout<<"Digite el estado (nuevo/seminuevo): "<<endl; cin>>estado;
		cout<<"Digite el peso que soporta: "<<endl; cin>>peso;  
		cout<<"Digite el precio: "<<endl; cin>>precio; 
		
		p1.setmarca(marca);
		p1.setmodelo(modelo); 
		p1.setestado(estado);
		p1.setpeso(peso);
		p1.setprecio(precio);
		std::cout<<"\nMarca: "<<p1.getmarca()<<endl; 
		std::cout<<"Modelo: "<<p1.getmodelo()<<endl; 
		std::cout<<"Estado: "<<p1.getestado()<<endl;
		std::cout<<"Peso que soporta: "<<p1.getpeso()<<endl; 
		std::cout<<"Precio: "<<p1.getprecio()<<endl;	
	}
	else if (opcion == 3){
		Sedan s1; 
		string marca, modelo, estado, quemacoco; 
		int precio; 
		
		cout<<"\Digite la marca: "<<endl; cin>>marca; 
		cout<<"Digite el modelo: "<<endl; cin>>modelo; 
		cout<<"Digite el estado: (nuevo/seminuevo): "<<endl; cin>>estado; 
		cout<<"Tiene quemacoco (Si/No): "<<endl;cin>>quemacoco; 
		cout<<"Digite el precio: "<<endl; cin>>precio; 
		
		s1.setmarca(marca);
		s1.setmodelo(modelo); 
		s1.setestado(estado);
		s1.setquemacoco(quemacoco);
		s1.setprecio(precio);
		std::cout<<"\nMarca: "<<s1.getmarca()<<endl; 
		std::cout<<"Modelo: "<<s1.getmodelo()<<endl; 
		std::cout<<"Estado: "<<s1.getestado()<<endl;
		std::cout<<"Quemacoco: "<<s1.getquemacoco()<<endl;  
		std::cout<<"Precio: "<<s1.getprecio()<<endl;
	}
	else{
		cout<<"Opcion no valida"<<endl; 
	}
	
	system("pause");
	return 0; 
}
