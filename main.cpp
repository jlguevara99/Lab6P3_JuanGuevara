#include <string>
#include <iostream>
#include "Numero.h"
#include "Octal.h"
#include "Hexadecimal.h"
#include "Binario.h"
#include <vector>
using namespace std;

int menu();

int main(){
	vector<Numero> numeros;
	bool salir = true;
	int opcion = 0;
	
	cout<<">>>>LAB 6 -- JUAN GUEVARA.<<<<"<<endl;
	do {
		opcion = menu();
		if(opcion == 1){
			cout<<"Ingrese el numero"<<endl;
			string numero;
			cin>>numero;
			Numero agregar(numero);
			numeros.push_back(agregar);
		}else if(opcion == 2){
			cout<<"Lista de numeros"<<endl;
			for(int i = 0; i < numeros.size(); i++) {
				cout<<i<<". "<<numeros[i].getNumero()<<endl<<endl<<endl;
			}
			cout<<"Elija el primer numero a operar"<<endl;
			int primerN, segundoN;
			cin>>primerN;
			cout<<"Elija el segundo numero a operar"<<endl;
			cin>>segundoN;

			cout<<"Elija la operacion"<<endl;
			cout<<"1. Sumar"<<endl;
			cout<<"2. Resta"<<endl;
			cout<<"3. Multiplicar"<<endl;

			int operacion;

			cin>>operacion;
			
			if(operacion == 1){
			

			}else if(operacion == 2){

			}else if(operacion == 3){

			}else{
				cout<<"Opcion invalida"<<endl;
			}
			
		}else if(opcion == 3){
			salir = false;
		}else{
			cout<<"Opcion incorrecta";
		}
	} while (salir);



	return 0;
}

int menu(){
	cout<<"1. Agregar Numero"<<endl;
	cout<<"2. Hacer operaciones"<<endl;
	cout<<"3. Salir"<<endl;
	int opcion;
	cout<<"Ingrese opcion"<<endl;
	cin>>opcion;

	return opcion;
}
