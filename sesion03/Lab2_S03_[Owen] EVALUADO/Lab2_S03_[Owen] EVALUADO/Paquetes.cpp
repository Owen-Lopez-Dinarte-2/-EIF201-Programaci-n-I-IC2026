#include "Paquetes.h"
#include <iostream>
#include <iomanip>

double* crearRegistro(int& cantidad) {
	std::cout << "+------------------------------+" << std::endl;
	std::cout << "| Sistema de Registro de Paquetes |" << std::endl;
	std::cout << "+------------------------------+" << std::endl;
	std::cout << "Ingrese la cantidad de paquetes que desea registrar: ";
	std::cin >> cantidad;
	while (cantidad <= 0) {
		std::cout << "Error: Debe ser mayor a 0, intentelo de nuevo: " << std::endl;
		std::cin >> cantidad;
	}

	double* pesos = new double[cantidad];
	return pesos;

}

void ingresarPesos(double* pesos, int cantidad) {
	std::cout << std::endl << "Ingrese el peso de los paquetes" << std::endl;
	for (int i = 0; i < cantidad; i++) {
		std::cout << "Peso " << (i + 1) << ":" << std::endl;
		std::cin >> pesos[i];

	}
}

double calcularPesoTotal(const double* pesos, int cantidad) {
	double suma = 0.0;
	for (int i = 0; i < cantidad; i++) {
		suma = suma + pesos[i];
	}
	return suma;

}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int sobrepeso = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {

			sobrepeso = sobrepeso + 1;
		}
	}
	return sobrepeso;
}

const double* buscarMasPesado(const double* pesos, int cantidad) {
	const double* mayor = &pesos[0];
	int numpaquete = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > *mayor) {
			mayor = &pesos[i];
			numpaquete = i;
		}
	}
	std::cout << "El paquete mas pesado es el numero: " << numpaquete+1 << std::endl;
	return mayor;
}