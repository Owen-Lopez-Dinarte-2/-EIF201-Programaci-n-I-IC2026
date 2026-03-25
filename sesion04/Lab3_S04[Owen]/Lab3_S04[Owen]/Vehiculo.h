#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

namespace UNA {

	class Vehiculo
	{
	private:
		std::string placa;
		std::string marca;
		int Year;
		double kilometraje;
		bool activo;

	public:
		Vehiculo(std::string placa, std::string marca, int year, double kilometraje);


		std::string GetPlaca() const;
		std::string GetMarca() const;
		int GetYear() const;
		double GetKilometraje() const;
		bool GetActivo() const;


		void SetPlaca(std::string NuevaPlaca);
		void SetMarca(std::string NuevaMarca);
		void SetYear(int NuevoYear);
		void SetKilometraje(double NuevoKilometraje);

	
		void registrarKilometros(double km);
		void desactivar();
		void reactivar();


		void mostrar() const;
	};
}

#endif