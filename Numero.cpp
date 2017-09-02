#include "Numero.h"
#include<iostream>
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
		while(Total>=1){
			float residuo;
			residuo = Total % 16;
			//cout<<residuo<<endl;
			Total = Total/16;
			int multiplicacion;
			multiplicacion = residuo*16;
			int valor = residuo;
			if(residuo == 11){
				hexa += "B";
			}else if(residuo == 12){
				hexa += "C";
			}else if(residuo == 13){
				hexa += "D";
			}else if(residuo == 14){
				hexa += "E";
			}else if(residuo == 15){
				hexa += "F";
			}else if(residuo == 10){
				hexa += "A";
			}else if(Total==1){
				hexa+="1";
			}else{
				hexa+= to_string(valor);
			}
		}
		string temporal = "";

		for(int i = hexa.size()-1; i >= 0; i--) {
			temporal+= hexa.at(i);
		}

		cout<<"El numero en hexadecimal es: "<< temporal<<endl;


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

		string hexa = " ";
		while(Total>=1){
			float residuo;
			residuo = Total % 16;
			Total = Total/16;
			int multiplicacion;
			multiplicacion = residuo*16;
			int valor = residuo;
			if(residuo == 11){
				hexa += "B";
			}else if(residuo == 12){
				hexa += "C";
			}else if(residuo == 13){
				hexa += "D";
			}else if(residuo == 14){
				hexa += "E";
			}else if(residuo == 15){
				hexa += "F";
			}else if(residuo == 10){
				hexa += "A";
			}else if(Total == 1){
			hexa += "1";
			}else{
				hexa+= to_string(valor);
			}
		}
		
		string temporal = "";

		for(int i = hexa.size()-1; i >= 0; i--) {
			temporal += hexa.at(i);
		}
		cout<<"El numero en hexadecimal es: "<< temporal<<endl;
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

		string hexa = " ";
		while(Total>=1){
			float residuo;
			residuo = Total % 16;

			Total = Total/16;
			int multiplicacion;
			multiplicacion = residuo*16;
			int valor = residuo;
			if(residuo == 11){
				hexa += "B";
			}else if(residuo == 12){
				 hexa += "C";
			}else if(residuo == 13){
				 hexa += "D";
			}else if(residuo == 14){
				 hexa += "E";
			}else if(residuo == 15){
				 hexa += "F";
			}else if(residuo == 10){
				 hexa += "A";
			}else if(Total==1){
				 hexa += "1";
			}else{
				hexa+= to_string(valor);
			}
		}
		string temporal = "";

		for(int i = hexa.size()-1; i >= 0; i--) {
			temporal += hexa.at(i);
		}
		cout<<"El numero en hexadecimal es: "<<temporal<<endl;
		
		Numero retorno(respuesta);
		return retorno;
	}
}
