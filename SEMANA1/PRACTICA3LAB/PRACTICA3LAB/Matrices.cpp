#include <iostream>
#include <array>
#include "Matrices.h"
#include <iomanip>

void LeerMatriz(std::array<std::array<int, COLS>, FILAS>&tabla) {
	std::cout << "Bienvenido" << std::endl;
	std::cout << "Ingrese los Valores que desea agregar a la matriz" << std::endl;
	for (size_t fila = 0; fila < tabla.size(); fila++) {
		for (size_t columna = 0; columna < tabla.size(); columna++) {
			{
				std::cin >> tabla[fila][columna];

			}
		}

	}
	
	}

void ImprimirMatriz(const std::array<std::array<int, COLS>, FILAS>& tabla) {
	std::cout << "La Matriz quedo asi: " << std::endl;
	for (size_t fila = 0; fila < tabla.size(); fila++) {
		for (size_t columna = 0; columna < tabla.size(); columna++) {
			{
				std::cout<< std::setw(5) << tabla[fila][columna];

			}

		}
		std::cout << std::endl;
	}

}

void SumaFilas(const std::array<std::array<int, COLS>, FILAS>& tabla) {
	for (size_t i = 0; i < FILAS; i++) {
		int suma = 0;
		for (size_t j = 0; j < COLS; j++) {
			suma =suma+ tabla[i][j];
		}
		std::cout << "La suma de la fila " << i+1 << " es:" << suma << std::endl;
	}


}


void SumaColumnas(const std::array<std::array<int, COLS>, FILAS>& tabla) {
	for (size_t j = 0; j < COLS; j++) {
		int suma = 0;
		for (size_t i = 0; i < FILAS; i++) {
			suma = suma + tabla[i][j];
		}
		std::cout  << "La suma de la Columna " << j + 1 << " es: " << suma << std::endl;
	}

}

void SumarDiagonal(const std::array<std::array<int, COLS>, FILAS>& tabla) {
	int suma = 0;
	for (size_t fila = 0; fila < tabla.size(); fila++) {
		for (size_t columna = 0; columna < tabla.size(); columna++) {
			{
				if (fila == columna) {
					suma = tabla[fila][columna] + suma;
				}


			}
		}
		
	}
	std::cout << "La suma de la Diagonal es: " << suma << std::endl;
}