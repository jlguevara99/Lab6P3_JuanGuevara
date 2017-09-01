#ifndef NUMERO_H
#define NUMERO_H
#include <math.h> 
#include <string>
#include <iostream>

using namespace std;

class Numero{
	protected:
		string numero;
	public:
		Numero(string);
		string getNumero();
		void setNumero(string);
		
		Numero operator+(Numero&);
		Numero operator-(Numero&);
		Numero operator*(Numero&);
};

#endif
