#ifndef SEDAN_H
#define SEDAN_H

#include"autos.h"

class Sedan: public Auto{ 
	
	private: 
		string quemacoco;  
		
	public: 
		Sedan(string mar, string mod, string qcoco): Auto(mar, mod,"Nuevo", 308900){
			quemacoco = qcoco;
		}
		
		string getQuemacoco(){
			return quemacoco;
		}
};

#endif
