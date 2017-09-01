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
	int acumulador1 = 0;
	int acumulador2 =0;
	if(palabra.at(palabra.size()-1) == 'b'){
		
		int tamano = palabra.size()-1;
		for(int i = 0; i < palabra.size()-1; i++) {
			int num = palabra.at(i) -48;
//			cout<<num<<"---"<<(pow(2,tamano-1))<<endl;
			
			acumulador1 +=  num*(pow(2,tamano-1));
			tamano--;
		}
	
	string respuesta = " ";

		if(this->numero.at(numero.size()-1== 'b')){
			
			int tam = numero.size()-1;
			for(int i = 0; i < numero.size()-1; i++) {
				int temporal = numero.at(i)-48;
				acumulador2 += temporal*(pow(2,tam-1));
				tam--;
			}
		}
		
		int Total;
		Total = acumulador1 + acumulador2;

		cout<<"El numero en decimal es: "<<Total<<endl;
		respuesta = Total+"";
		Numero retorno(respuesta);

		string hexa = " ";
		while(Total>1){
			double residuo;
			residuo = Total % 16;
			Total = Total/16;
			int multiplicacion;
			multiplicacion = residuo*16;
			if(multiplicacion == 11){
				hexa += "B";
			}else if(multiplicacion == 12){
				hexa += "C";
			}else if(multiplicacion == 13){
				hexa += "D";
			}else if(multiplicacion == 14){
				hexa += "E";
			}else if(multiplicacion == 15){
				hexa += "F";
			}else if(multiplicacion == 10){
				hexa += "A";
			}else{
				hexa+= "1.";
			}
		}

		cout<<"El numero en hexadecimal es: "<< hexa;






		return retorno;

	}
}

Numero Numero::operator-(Numero& rNumero){
	string palabra = rNumero.getNumero();
	int acumulador1 = 0;
	int acumulador2 = 0;
	if(palabra.at(palabra.size()-1) == 'b'){
		int tamano = palabra.size()-1;
		for(int i = 0; i < palabra.size()-1; i++) {
			int num = palabra.at(i) -48;
			acumulador1 += num*(pow(2,tamano-1));
			tamano--;
		}
		string respuesta = " ";

		if(this->numero.at(numero.size()-1)=='b'){
			int tam = numero.size()-1;
			for(int i = 0; i < numero.size()-1; i++) {
				int temporal = numero.at(i)-48;
				acumulador2 += temporal*(pow(2,tam-1));
				tam--;
			}
		}
		int Total;
		Total = acumulador1 - acumulador2;
		cout<<"El numero en decimal es: "<<Total<<endl;
		respuesta = Total+"";
		Numero retorno(respuesta);
		return retorno;
	}
}

Numero Numero::operator*(Numero& rNumero){
	string palabra = rNumero.getNumero();
	int acumulador1 = 0;
	int acumulador2 = 0;
	if(palabra.at(palabra.size()-1) == 'b'){
		int tamano = palabra.size()-1;
		for(int i = 0; i < palabra.size()-1; i++) {
			int num = palabra.at(i) -48;
			acumulador1 += num*(pow(2,tamano-1));
			tamano--;
		}
		string respuesta = " ";

		if(this->numero.at(numero.size()-1)=='b'){
			int tam = numero.size()-1;
			for(int i = 0; i < numero.size()-1; i++) {
				int temporal = numero.at(i)-48;
				acumulador2 += temporal*(pow(2,tam-1));
				tam--;
			}
		}
		int Total;
		Total = acumulador1*acumulador2;
		cout<<"El numero en decimal es: "<<Total<<endl;
		respuesta = Total;
		Numero retorno(respuesta);
		return retorno;
	}
}
