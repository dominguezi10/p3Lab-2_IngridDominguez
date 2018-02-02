#include <iostream>
#include <string>

using namespace std;

//el menu 
int menu();

// ejercicio 1
void ejercicio1();


int main(){
	//int numero = 0;

	int opcion = 1;
	while(opcion>=1 && opcion<=3 ){
		opcion = menu();

		switch(opcion){
			case 1:
				ejercicio1();
			break;
		}//  fin del caso
	}// fin del while
	
	cout<< "Salio del metodo!" << endl;
}// fin del main

int menu(){
	int opcion = 0;
	cout<< "Bienvenindo!"<< endl;
	cout<< "Ingrese su opcion:"<< endl;
	cout<< "1.- Ejercicio 1"<< endl;
	cout<< "2.- Ejercicio 2"<< endl;
	cout<< "3.- Ejercicio 3"<< endl;
	cout<< "4.- Salir"<< endl;
	cin>> opcion;
	
	return opcion;
}// fin del metodo del menu


void ejercicio1(){
	int numero = 0;
	int respuesta = 0;
	cout<< " ----- Numero Triangular -----" << endl;
	cout<< "Ingrese un numero: "<<endl;
	cin>> numero;
	
	int acumulador = 0;
	for(int i = 1; i<=numero; i++){
		acumulador = acumulador +i;
	//	cout<< acumulador << endl;
		if(acumulador == numero){
			cout<< "Es numero Triangular"<< endl;
			break;
		}
	}// fin del for

	cout<< "Salio del metodo 1"<< endl;
//	return 0;
}// fin del metodo







