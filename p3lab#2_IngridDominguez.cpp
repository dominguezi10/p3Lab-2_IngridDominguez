#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>


using namespace std;

//el menu 
int menu();

//menu del ejericicio 1
int menu2();

// ejercicio 1
void ejercicio1();


//ejercicio 1.2
void ejercicio1_2();

//ejercicio 1.3
void  ejercicio1_3();


//recursivo
int recursion(int);

int main(){
	//int numero = 0;

	int opcion = 1;
	while(opcion>=1 && opcion<=3 ){
		opcion = menu();

		switch(opcion){
			case 1:
				int opcionEjercicio1 = 1;
				while(opcionEjercicio1>= 1 &&  opcionEjercicio1<=3){
					opcionEjercicio1 = menu2();
					switch(opcionEjercicio1){
						case 1:
							ejercicio1();
						break;

						case 2:
							ejercicio1_2();
						break;
						case 3:
							ejercicio1_3();
						break;
					}// fin del los sub casos
				}// fin caso 1
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


int menu2(){
	int opcion = 0;
	cout<<" --------- Ejercicio 1 ----------"<< endl;
	cout<< "Ingrese su opcion: "<<endl;
	cout<< "1.- Numero Triangular"<< endl;
	cout<< "2.- Numero Random "<< endl;
	cout<< "3.- Numero Triangullar Previo"<<endl;
	cout<< "4.- Salir"<<endl;
	cin >> opcion;

	return opcion;

}// fin del segundo menu


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

	cout<< "Salio del ejercicio 1.1"<< endl;
//	return 0;
}// fin del metodo



void ejercicio1_2(){
	int numeroAleatorio = 0;
	numeroAleatorio  = rand() % 200 + 1;
	cout<< "-- Numero Random"<< endl;
	cout<< "El numero Aleatorio es : "<<numeroAleatorio<< endl;

        int acumulador = 0;
        for(int i = 1; i<=numeroAleatorio; i++){
                acumulador = acumulador +i;
        //      cout<< acumulador << endl;
                if(acumulador == numeroAleatorio){
                        cout<< "Es numero Triangular"<< endl;
                        break;
                }
        }// fin del for


	if(acumulador != numeroAleatorio){
		cout<< "El numero "<< numeroAleatorio << " no es triangular"<< endl;
	}// fin de la condiicion

}//fin del metodo


void ejercicio1_3(){
	int numero = 0;
	cout<< " -- Numero Triangular Previo -- "<< endl;
	cin >> numero;

	//prueba de la recursion
	int numeroPrevio =  recursion(numero);
	cout<< "Numero previo es "<< numeroPrevio << endl;

/*	int acumulador = 0;
	for(int i = 1; i<=numero; i++){
                acumulador = acumulador +i;
        //      cout<< acumulador << endl;
                if(acumulador == numero){
                        cout<< "Es numero Triangular es el mismo numero"<< endl;
                        break;
                }
        }// fin del for

	if(acumulador != numero){
		int numeroPrevio = 0;
		for(int i){
		}

	}//fin de la condicion
	*/
}//fin del ejercicio 1.3




//prueba de metodo recursivo
int recursion(int numero){
	//int numeroPrevio = numero;
	int acumulador = 0;
		

        for(int i = 1; i<=numero; i++){
                acumulador = acumulador +i;
        //      cout<< acumulador << endl;
                if(acumulador == numero){
                        cout<< "El numero Triangular Previo es: "<< numero << endl;
                        break;
                }
        }// fin del for


	cout<< acumulador<< endl;
	if(acumulador != numero){
		recursion(numero - 1);
	} else {
		return numero;
	}


}//fin del metodo



