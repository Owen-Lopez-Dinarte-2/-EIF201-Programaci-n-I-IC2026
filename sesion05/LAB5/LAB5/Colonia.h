#pragma once
#ifndef COLONIA_H
#define COLONIA_H

#include "Domo.h"

namespace EIF201 {

	class Colonia {
	private:
		std::string Name;
		std::string Planet;
		int NumberDomos;
		Domo** domos;

	public:
		Colonia(std::string Name, std::string Planet, int NumberDomos);
		~Colonia();

		bool AssingColono(Colonos* c);
		void EvacuateDomo(int index);
		bool Transfer(Colonos* c, int Origen, int Destino);
		void Rebalance();
		void ControlBoard();
		void Statistic();
		void addDomo(Domo* d);
	};
}

#endif