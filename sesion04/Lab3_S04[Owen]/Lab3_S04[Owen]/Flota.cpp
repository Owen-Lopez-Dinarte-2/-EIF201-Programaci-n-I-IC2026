#include "Flota.h"
#include <iostream>

namespace UNA {


	Flota::Flota(int CapacidadInicial) : cantidad(0), capacidad(CapacidadInicial) {
		vehiculos = new Vehiculo * [CapacidadInicial];
		for (int i = 0; i < capacidad; i++) {
			vehiculos[i] = nullptr;
		}
	}



	Flota::~Flota() {
		for (int i = 0; i < cantidad; i++) {
			delete vehiculos[i];
			vehiculos[i] = nullptr;
		}

		delete[] vehiculos;
		vehiculos = nullptr;
		std::cout << "Flota destruida" << std::endl;
	}



	void Flota::Redimensionar() {
		int NuevaCapacidad = capacidad * 2;

		Vehiculo** NuevoArreglo = new Vehiculo * [NuevaCapacidad];

		for (int i = 0; i < cantidad; i++) {
			NuevoArreglo[i] = vehiculos[i];
		}

		for (int i = cantidad; i < NuevaCapacidad; i++) {
			NuevoArreglo[i] = nullptr;
		}

		delete[] vehiculos;

		vehiculos = NuevoArreglo;
		capacidad = NuevaCapacidad;
	}



	void Flota::agregar(Vehiculo* nuevo) {
		if (nuevo == nullptr) {
			std::cout << "Error" << std::endl;
			return;
		}

		if (cantidad == capacidad) {
			Redimensionar();
		}

		vehiculos[cantidad] = nuevo;
		cantidad++;
	}


	void Flota::mostrarTodos() const {
		if (cantidad == 0) {
			std::cout << "Error, No Data" << std::endl;
			return;
		}

		std::cout << "------------- FLOTA ----------------" << std::endl;

		for (int i = 0; i < cantidad; i++) {
			vehiculos[i]->mostrar();
		}

		std::cout << "------------------------------------" << std::endl;
	}


	Vehiculo* Flota::buscarPorPlaca(std::string placa) const {
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->GetPlaca() == placa) {
				return vehiculos[i];
			}
		}
		return nullptr;
	}

	void Flota::mostrarPorMarca(std::string marca) const {
		int contador = 0;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->GetMarca() == marca) {
				vehiculos[i]->mostrar();
				contador++;
			}
		}

		if (contador == 0) {
			std::cout << "No hay vehiculos de esa marca" << std::endl;
		}
		else {
			std::cout << "Total encontrados: " << contador << std::endl;
		}
	}



	bool Flota::eliminar(std::string placa) {
		int posicion = -1;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->GetPlaca() == placa) {
				posicion = i;
				break;
			}
		}

		if (posicion == -1) {
			std::cout << "Vehiculo no encontrado" << std::endl;
			return false;
		}


		if (vehiculos[posicion]->GetActivo()) {
			std::cout << "Debe desactivar el vehiculo antes de eliminarlo" << std::endl;
			return false;
		}

		std::string placaVehiculo = vehiculos[posicion]->GetPlaca();

		delete vehiculos[posicion];

		for (int i = posicion; i < cantidad - 1; i++) {
			vehiculos[i] = vehiculos[i + 1];
		}

		vehiculos[cantidad - 1] = nullptr;
		cantidad--;

		std::cout << "Vehiculo " << placaVehiculo << " eliminado de la flota" << std::endl;
		return true;
	}



	int Flota::contarActivos() const {
		int contador = 0;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->GetActivo()) {
				contador++;
			}
		}

		return contador;
	}

}
