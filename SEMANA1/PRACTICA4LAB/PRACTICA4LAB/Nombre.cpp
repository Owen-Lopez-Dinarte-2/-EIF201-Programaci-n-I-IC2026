#include "Nombre.h"
#include <iostream>


void TotalCaracteres(std::string nombre) {
	int caracteres = 0;
	for (int i = 0; i < nombre.length(); i++) {
		if(nombre[i]!=' ') {
			caracteres = caracteres + 1;
		}
	}
	std::cout << "El numero total de caracteres seria: " << caracteres << std::endl;
}

void ContadorVocales(std::string nombre) {
	int vocales = 0;
	for (int i = 0; i < nombre.length(); i++) {
	
		if(nombre[i]== 'a'|| nombre[i] == 'A'|| nombre[i] == 'e'|| nombre[i] == 'E'|| nombre[i] == 'i'|| nombre[i] == 'I'|| nombre[i] == 'o'|| nombre[i] == 'O'|| nombre[i] == 'u'|| nombre[i] == 'U') {
			vocales = vocales + 1;

		}
	
	}
	std::cout << "La cantidad de vocales en su nombre es: "<< vocales << std::endl;
}

void EncontrarNombreyApellido(std::string nombre) {
	std::string nom;
	std::string apellido;
	int espacio1 = 0;
	int espacio2 = 0;
	bool condicional = false;
	espacio1 = nombre.find(" ");
	nom = nombre.substr(0, espacio1);
	std::cout << "Su Primer nombre seria: " << nom << std::endl;

	int i = espacio1 + 1;
	while (condicional == false) {

		if (nombre[i] == ' ') {
			condicional = true;
			espacio2 = i;
		}
		i++;
	}
	apellido = nombre.substr(espacio1, espacio2-espacio1);
	std::cout << "Su Primer apellido seria: " << apellido << std::endl;

}



void NomMayusculas(std::string nombre) {
	for (int i = 0; i< nombre.length(); i++) 
		nombre[i] = toupper(nombre[i]);
		
	
	std::cout << "Su nombre en Mayusculas seria: " << nombre << std::endl;

}