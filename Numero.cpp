#include "Numero.h"

#include <string>
using namespace std;

Numero::Numero(string pNum){
	numero = pNum;
}

string Numero::getNumero(){
	return numero;
}

void Numero::setNumero(string pNumero){
	numero = pNumero;
}

Numero Numero::operator+(Numero& rNumero){
	string palabra = rNumero.getNumero();
	int acumulador = 0;
	if(palabra.at(palabra.size()-1) == 'b'){
		
		int tamano = palabra.size();
		for(int i = 0; i < palabra.size()-1; i++) {
			int num = palabra.at(i) -48;
			
			acumulador +=  num*(pow(2,tamano-1));
		}
	}
	string respuesta = " ";
	respuesta = acumulador + " ";
	Numero retorno(respuesta);
	return retorno;
}
