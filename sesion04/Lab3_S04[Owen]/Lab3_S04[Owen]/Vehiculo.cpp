#include "Vehiculo.h"

namespace UNA {

	Vehiculo::Vehiculo(std::string placa, std::string marca, int Year, double kilometraje)
		: placa(placa), marca(marca), Year(Year), kilometraje(kilometraje), activo(true) {
	}




	std::string Vehiculo::GetPlaca() const {
		return placa;
	}

	std::string Vehiculo::GetMarca() const {
		return marca;
	}

	int Vehiculo::GetYear() const {
		return Year;
	}

	double Vehiculo::GetKilometraje() const {
		return kilometraje;
	}

	bool Vehiculo::GetActivo() const {
		return activo;
	}



	void Vehiculo::SetPlaca(std::string NuevaPlaca) {
		if (NuevaPlaca.empty()) {
			std::cout << "Error, la placa no puede estar vacia" << std::endl;
		}
		placa = NuevaPlaca;
	}

	void Vehiculo::SetMarca(std::string NuevaMarca) {
		if (NuevaMarca.empty()) {
			std::cout << "Error, la marca no puede estar vacia" << std::endl;
		}
		marca = NuevaMarca;
	}

	void Vehiculo::SetYear(int NuevoYear) {
		if (NuevoYear < 0) {
			std::cout << "Error, el anio no puede ser negativo" << std::endl;
		}
		Year = NuevoYear;
	}

	void Vehiculo::SetKilometraje(double NuevoKilometraje) {
		if (NuevoKilometraje < 0) {
			std::cout << "Error, el kilometraje no puede ser negativo" << std::endl;
		}
		kilometraje = NuevoKilometraje;
	}



	void Vehiculo::registrarKilometros(double km) {
		if (km <= 0) {
			std::cout << "Error, los kilometros deben ser positivos" << std::endl;
			return;
		}

		if (!activo) {
			std::cout << "Error, el vehiculo esta fuera de servicio" << std::endl;
			return;
		}

		kilometraje += km;
	}

	void Vehiculo::desactivar() {
		if (!activo) {
			std::cout << "El vehiculo ya esta fuera de servicio" << std::endl;
			return;
		}

		activo = false;
	}

	void Vehiculo::reactivar() {
		if (activo) {
			std::cout << "El vehiculo ya esta activo" << std::endl;
			return;
		}

		activo = true;
	}


	void Vehiculo::mostrar() const {
		std::cout << "Placa: " << placa << std::endl;
		std::cout << "Marca: " << marca << std::endl;
		std::cout << "Year: " << Year << std::endl;
		std::cout << "Kilometraje: " << kilometraje << std::endl;

		if (activo) {
			std::cout << "Estado: ACTIVO" << std::endl;
		}
		else {
			std::cout << "Estado: FUERA DE SERVICIO" << std::endl;
		}
	}

}
