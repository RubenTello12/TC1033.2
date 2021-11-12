#include<iostream>
#include"BUBA.h"

using namespace std; 

int main(){
	
	OcultarCursor(); 
	pintar_limites(); 
	BUBA B(69,10,3,3); 
	B.pintar(); 
	B.pintar_corazones(); 
	
	BALAS bala1(10,4); 
	MISIL misil1(10,15);
	
		
	bool game_over = false; 
	while(!game_over){
		 
		bala1.mover(); bala1.choque(B); 
		misil1.mover(); misil1.choque(B); 
		
		B.morir(); 
		B.mover(); 
		Sleep(30); 
		
	}
	
	return 0; 
}
