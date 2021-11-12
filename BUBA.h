#include<stdio.h>
#include<conio.h>
#include<windows.h> //Para poder usar SetConsoleCursorPosition
#include<stdlib.h>

void gotoxy(int x, int y){
	HANDLE hCon; 
	hCon = GetStdHandle(STD_OUTPUT_HANDLE); //Nos permite tomar control de la salida 
	COORD dwPos; 
	dwPos.X = x; 
	dwPos.Y = y; 
	
	SetConsoleCursorPosition(hCon, dwPos);	
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void OcultarCursor(){ 
	HANDLE hCon; 
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci; 
	cci.dwSize = 2; 
	cci.bVisible = FALSE; 
	
	SetConsoleCursorInfo(hCon, &cci); 
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void pintar_limites(){
	for(int i = 2; i<78; i++){
		gotoxy(i,3); 
		printf ("%c",205); 
		gotoxy(i,18);
		printf ("%c",205);
	}
	for(int i = 4; i<18; i++){
		gotoxy(2,i); 
		printf("%c",186); 
		gotoxy(77,i); 
		printf("%c",186);
	}
	gotoxy(2,3);
	printf("%c",201); 
	gotoxy(2,18);
	printf("%c",200);
	gotoxy(77,3);
	printf("%c",187);
	gotoxy(77,18);
	printf("%c",188);	
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class BUBA{
	int x,y;
	int corazones;  
	int vidas;   
public: 
	BUBA(int _x, int _y, int _corazones, int _vidas); 
	int X(){ return x;}
	int Y(){ return y;}
	void COR(){ corazones --;}
	void pintar(); 
	void borrar(); 
	void mover();
	void pintar_corazones();  
	void morir(); 
};

BUBA::BUBA(int _x, int _y, int _corazones, int _vidas){
	x=_x;
	y=_y;
	corazones=_corazones;  	
	vidas=_vidas; 
}

void BUBA::pintar(){
	gotoxy(x,y); 
	printf("  %c%c%c%c%c%c", 40,223,95,223,170,41); 

}

void BUBA::borrar(){
	gotoxy(x,y); 
	printf("        ");  	
}

void BUBA::mover(){
	if(kbhit()){ //kbhiy comprueba si se presiona una tecla
			char tecla = getch(); 
			borrar(); 
			if (tecla == 'a' && x>3) x--; 
			if (tecla == 'd' && x+6 < 75) x++; 
			if (tecla == 'w' && y>4) y--; 
			if (tecla == 's' && y < 17) y++;
			if (tecla == 'e') corazones--; 
			pintar();
			pintar_corazones();  
		}
}

void BUBA::pintar_corazones(){
	gotoxy(50,2); 
	printf("VIDAS %d", vidas); 
	gotoxy(64,2);
	printf("Salud"); 
	gotoxy(70,2); 
	printf ("      "); 
	for (int i=0; i < corazones; i++){
		gotoxy(70+i,2);
		printf("%c",3);  
	}
}

void BUBA::morir(){
	if(corazones == 0){
		borrar(); 
		
		gotoxy(x,y); 
		printf ("  *  "); 
		Sleep(200); 
		
		borrar(); 
		
		gotoxy(x,y); 
		printf (" *  *  *"); 
		Sleep(200); 
		borrar(); 
		
		vidas--; 
		corazones = 3; 
		pintar_corazones(); 
		pintar(); 
	}	
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class BALAS{
	int x,y; 
public: 
	BALAS(int _x, int _y): x(_x), y(_y){}
	void pintar(); 
	void mover(); 
	void choque(class BUBA &B); 
};

void BALAS::pintar(){
	gotoxy(x,y); 
	printf ("%c", 79);
}

void BALAS::mover(){
	gotoxy(x,y); 
	printf(" "); 
	x++; 
	if (x > 76){
		y = (rand() % 14)+4;  
		x = 3; 
	}
	pintar(); 
}

void BALAS::choque(class BUBA &B){
	if (x == B.X() && x < B.X()+7 && y == B.Y() && y == B.Y() ) 
	{
		B.COR(); 
		B.borrar(); 
		B.pintar();
		B.pintar_corazones(); 
		y = (rand() % 14)+4;  
		x = 3;
	}	
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class MISIL{
	int x,y; 
public: 
	MISIL(int _x, int _y): x(_x), y(_y){}
	void pintar(); 
	void mover(); 
	void choque(class BUBA &B);
};

void MISIL::pintar(){
	gotoxy(x,y); 
	printf ("%c%c%c", 175,254,62);
}

void MISIL::mover(){
	gotoxy(x,y); 
	printf("   "); 
	x++; 
	if (x > 74){
		y = (rand() % 14)+4;  
		x = 3; 
	}
	pintar(); 
}

void MISIL::choque(class BUBA &B){
	if (x == B.X() && x < B.X()+7 && y == B.Y() && y == B.Y() ) 
	{
		B.COR(); 
		B.borrar(); 
		B.pintar();
		B.pintar_corazones(); 
		y = (rand() % 14)+4;  
		x = 3;
	}	
}


