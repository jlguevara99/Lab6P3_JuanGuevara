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
			cout<<"Sorry, solo funciona con binario... :("<<endl<<"pero transforma a lo demas"<<endl;
			cout<<"Ingrese el numero"<<endl;
			string numero;
			cin>>numero;
			Numero agregar(numero);
			numeros.push_back(agregar);
		}else if(opcion == 2){
			cout<<"Lista de numeros"<<endl;
			for(int i = 0; i < numeros.size(); i++) {
				cout<<i<<". "<<numeros[i].getNumero()<<endl<<endl;
			}
			
			cout<<"Elija el primer numero a operar"<<endl;
			int primerN, segundoN;
			cin>>primerN;
			cout<<"Elija el segundo numero a operar"<<endl;
			cin>>segundoN;
			cout<<endl;
			while((primerN<0 || primerN>= numeros.size()) || (segundoN<0 || segundoN>= numeros.size()) ){
				cout<<"Algun dato es incorrecto!! Ingrese de nuevo"<<endl;

				cout<<"Elija el primer numero a operar"<<endl;
				cin>>primerN;
				cout<<"Elija el segundo numero a operar"<<endl;
				cin>>segundoN;
				cout<<endl;
			}


			cout<<"Elija la operacion"<<endl;
			cout<<"1. Sumar"<<endl;
			cout<<"2. Resta"<<endl;
			cout<<"3. Multiplicar"<<endl;
			cout<<endl;
			int operacion;

			cin>>operacion;
			
			if(operacion == 1){
				Numero suma = numeros[primerN]+numeros[segundoN];
				//cout<<"aqui: "<< suma.getNumero()<<endl;

			}else if(operacion == 2){
				Numero resta = numeros[primerN]-numeros[segundoN];
				//cout<<"aqui: "<< resta.getNumero()<<endl;
			}else if(operacion == 3){
				Numero multi = numeros[primerN]*numeros[segundoN];
				//cout<<"aqui: "<<multi.getNumero()<<endl;
			}else{
				cout<<"Opcion invalida"<<endl;
			}
			cout<<endl;
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
