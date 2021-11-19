#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std; 

//Vans----------------------------------------------------------------
class Van{
	private:
		string marca, modelo, estado; 
		int puertas, precio; 
	public: 
		Van(); 
		void setmarca(string _marca); 
		void setmodelo(string _modelo); 
		void setestado(string _estado); 
		void setpuertas(int _puertas);
		void setprecio(int _precio);
		string getmarca(); 
		string getmodelo(); 
		string getestado(); 
		int getpuertas();
		int getprecio();
};

Van::Van(){
}
//Setters
void Van::setmarca(string _marca){
	marca= _marca;
}
void Van::setmodelo(string _modelo){
	modelo = _modelo;
}
void Van::setestado(string _estado){
	estado = _estado;
}
void Van::setpuertas(int _puertas){
	puertas = _puertas;
}
void Van::setprecio(int _precio){
	precio = _precio; 
}
//Getters
string Van::getmarca(){
	return marca;
}
string Van::getmodelo(){
	return modelo; 
}
string Van::getestado(){
	return estado;
}
int Van::getpuertas(){
	return puertas;
}
int Van::getprecio(){
	return precio; 
}

//Pick Ups-----------------------------------------------------------
class PickUp{
	private:
		string marca, modelo, estado; 
		float peso;
		int precio; 	 
	public: 
		PickUp(); 
		void setmarca(string _marca); 
		void setmodelo(string _modelo); 
		void setestado(string _estado);
		void setpeso(float _peso); 
		void setprecio(int _precio);
		string getmarca(); 
		string getmodelo(); 
		string getestado();
		float getpeso();  
		int getprecio();
};

PickUp::PickUp(){
}
//Setters
void PickUp::setmarca(string _marca){
	marca= _marca;
}
void PickUp::setmodelo(string _modelo){
	modelo = _modelo;
}
void PickUp::setestado(string _estado){
	estado = _estado;
}
void PickUp::setpeso(float _peso){
	peso = _peso;  
}
void PickUp::setprecio(int _precio){
	precio = _precio; 
}
//Getters
string PickUp::getmarca(){
	return marca;
}
string PickUp::getmodelo(){
	return modelo; 
}
string PickUp::getestado(){
	return estado;
}
float PickUp::getpeso(){
	return peso; 
}
int PickUp::getprecio(){
	return precio; 
}

//Sedan----------------------------------------------------------------
class Sedan{
	private:
		string marca, modelo, estado, quemacoco; 
		int precio; 
	public: 
		Sedan(); 
		void setmarca(string _marca); 
		void setmodelo(string _modelo); 
		void setestado(string _estado);
		void setquemacoco(string _quemacoco); 
		void setprecio(int _precio);
		string getmarca(); 
		string getmodelo(); 
		string getestado();
		string getquemacoco(); 
		int getprecio();
};

Sedan::Sedan(){
}
//Setters
void Sedan::setmarca(string _marca){
	marca= _marca;
}
void Sedan::setmodelo(string _modelo){
	modelo = _modelo;
}
void Sedan::setestado(string _estado){
	estado = _estado;
}
void Sedan::setquemacoco(string _quemacoco){
	quemacoco = _quemacoco;
}
void Sedan::setprecio(int _precio){
	precio = _precio; 
}
//Getters
string Sedan::getmarca(){
	return marca;
}
string Sedan::getmodelo(){
	return modelo; 
}
string Sedan::getestado(){
	return estado;
}
string Sedan::getquemacoco(){
	return quemacoco;
}
int Sedan::getprecio(){
	return precio; 
}
