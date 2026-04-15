#pragma once
#ifndef COLONOS_H
#define COLONOS_H

#include <string>

namespace EIF201 {

	class Colonos {
	private:
		std::string Name;
		int Id;
		std::string Speciality;
		double ConsumOxygeno;
		int Productivity;

	public:
		Colonos(std::string Name, int Id, std::string Speciality, double ConsumOxygeno, int Productivity);
		~Colonos();

		std::string GetName() const;
		int GetId() const;
		std::string GetSpeciality() const;
		double GetConsumOxygeno() const;
		int GetProductivity() const;

		void mostrar() const;
	};
}

#endif