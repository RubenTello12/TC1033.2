#ifndef VAN_H
#define VAN_H

#include "autos.h" 

class Van: public Auto{
	
	private: 
		string puertas;  
	
	public: 
		Van(string mar, string mod, string pue):Auto(mar,mod,"Nuevo", 731200){
			puertas = pue;
		}
	
		string getPuertas(){
			return puertas; 
		}
	
};

#endif
