#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	char M, A, L,C,T,O, fabricante, tipoPrograma, dispositivo;
	int sistemaM = 1500, sistemaA = 2500, sistemaL = 1000;
	int precio;
	
	cout << "ingrese el fabricante M(microsoft),A(apple),L(linux)";
	cin >> fabricante;

	cout << "ingrese el tipo de programa M(microsoft),A(apple),L(linux)";
	cin >> fabricante;

	switch (fabricante){
	 case 'M':
		 if (tipoPrograma == 'S') {
			 precio = 1500;
		 }
		 else {
			 cout << "ingrese el tipo de dispositivo";
			 cin >> dispositivo;
			 if (tipoPrograma == 'C') {
				 precio = 1800;
			 }
			 if (tipoPrograma == 'T') {
				 precio = 1200;
			 }
			 if (tipoPrograma == 'O') {
				 precio = 900;
			 }
		 }		
		 break;
	 case 'A':
		 if (tipoPrograma == 'S') {
			 precio == 2500;
		 }
		 else {
			cout << "ingrese el tipo de dispositivo";
			cin >> dispositivo;
			if (tipoPrograma == 'c') {
				precio = 1900;}
			if (tipoPrograma == 't') {
				precio = 1800;}
			if (tipoPrograma == 'o') {
			precio = 1600;}
		 } break;
	 case 'L':
		 if (tipoPrograma == 'L') {
			 precio == 1000;
		 }
		 else {
			 cout << "ingrese el tipo de dispositivo";
			 cin >> dispositivo;
			 if (tipoPrograma == 'c') {
				 precio = 100;
			 }
			 if (tipoPrograma == 't') {
				 precio = 150;
			 }

			 if (tipoPrograma == 'o') {
				 precio = 50;
			}

		 }
		 
		 break;

	 default:
		 cout<<"Ingresaste una opcion equivocada";

	}


	system("pause");
	return 0;
}