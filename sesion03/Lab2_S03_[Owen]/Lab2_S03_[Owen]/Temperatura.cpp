#include "Temperatura.h"
#include <iostream>
#include <iomanip>

double* CrearRegistro(int& cantidadDias) {
	std::cout << "+-------------------------------------+" << std::endl;
	std::cout << "| Sistema de Registro de Temperaturas |" << std::endl;
	std::cout << "+-------------------------------------+" << std::endl;
	std::cout << "Ingrese la cantidad de dias a Registrar: ";
	std::cin >> cantidadDias;
	while (cantidadDias <= 0) {
		std::cout << "Error: Debe ser mayor a 0, intentelo de nuevo: " << std::endl;
		std::cin >> cantidadDias;
	}

	double* registro = new double[cantidadDias];
	return registro;
}

void IngresarTemperaturas(double* registro, int cantidad) {
	std::cout << std::endl << "Ingrese las temperaturas en grados Celcius" << std::endl;
	for (int i = 0; i < cantidad; i++) {
		std::cout << "Dia " << (i + 1) << ":" << std::endl;
		std::cin >> registro[i];
	}

}

double CalcularPromedio(const double* registro, int cantidad) {
	double suma = 0.0;
	for (int i = 0; i < cantidad; i++) {
		suma = suma + registro[i];
	}
	return suma / cantidad;

}

double CalcularMaximo(const double* registro, int cantidad) {
	double maximo = registro[0];
	for (int i = 0; i < cantidad; i++) {
		if (registro[i] > maximo) {
			maximo = registro[i];
		}
	}
	return maximo;

}


double CalcularMinimo(const double* registro, int cantidad) {
	double minimo = registro[0];
	for (int i = 0; i < cantidad; i++) {
		if (registro[i] < minimo) {
			minimo = registro[i];
		}
	}
	return minimo;

}

void MostrarResultado(const double* registro, int cantidad) {

	std::cout << std::endl << std::fixed << std::setprecision(2);
	std::cout << "+------------------------------+" << std::endl;
	std::cout << "| RESUMEN DEL REGISTRO        |" << std::endl;
	std::cout << "+------------------------------+" << std::endl;
	std::cout << "| Dias registrados:   " << cantidad << std::endl;
	std::cout << "| Temperatura promedio: " << CalcularPromedio(registro, cantidad) << " C" << std::endl;
	std::cout << "| Temperatura maxima:  " << CalcularMaximo(registro, cantidad) << " C" << std::endl;
	std::cout << "| Temperatura minima:  " << CalcularMinimo(registro, cantidad) << " C" << std::endl;
	std::cout << "+------------------------------+" << std::endl;
}