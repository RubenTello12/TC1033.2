#ifndef PICKUP_H
#define PICKUP_H

#include "autos.h"

class PickUp: public Auto{
	
	private: 
		string peso; 
	
	public: 
		PickUp (string mar, string mod, string pes): Auto(mar,mod,"Nuevo",999400){	
			peso = pes;
		}
	
		string getPeso(){
			return peso;      
		}
};

#endif
