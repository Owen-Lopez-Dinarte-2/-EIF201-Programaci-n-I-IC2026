#include "Colonos.h"
#include <iostream>

namespace EIF201 {

	Colonos::Colonos(std::string Name, int Id, std::string Speciality, double ConsumOxygeno, int Productivity)
		: Name(Name), Id(Id), Speciality(Speciality), ConsumOxygeno(ConsumOxygeno), Productivity(Productivity) {
	}

	Colonos::~Colonos() {}

	std::string Colonos::GetName() const { 
		return Name;
	}

	int Colonos::GetId() const {
		return Id;
	}

	std::string Colonos::GetSpeciality() const { 
		return Speciality;
	}

	double Colonos::GetConsumOxygeno() const { 
		return ConsumOxygeno; 
	}

	int Colonos::GetProductivity() const { 
		return Productivity; 
	}

	void Colonos::mostrar() const {
		std::cout << "Nombre: " << Name << std::endl;
		std::cout << "ID: " << Id << std::endl;
	}
}