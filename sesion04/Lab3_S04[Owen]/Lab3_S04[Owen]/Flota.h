#ifndef FLOTA_H
#define FLOTA_H

#include "Vehiculo.h"
#include <string>

namespace UNA {

	class Flota
	{
	private:
		Vehiculo** vehiculos;
		int cantidad;
		int capacidad;

		void Redimensionar();

	public:
		Flota(int CapacidadInicial = 3);

		~Flota();

		void agregar(Vehiculo* nuevo);
		void mostrarTodos() const;

		Vehiculo* buscarPorPlaca(std::string placa) const;
		void mostrarPorMarca(std::string marca) const;
		bool eliminar(std::string placa);
		int contarActivos() const;

	};
}

#endif

