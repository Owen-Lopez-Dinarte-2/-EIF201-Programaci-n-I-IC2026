#include "Colonia.h"
#include <iostream>

namespace EIF201 {

	Colonia::Colonia(std::string Name, std::string Planet, int NumberDomos)
		: Name(Name), Planet(Planet), NumberDomos(NumberDomos) {

		domos = new Domo * [NumberDomos];

		for (int i = 0; i < NumberDomos; i++) {
			domos[i] = nullptr;
		}
	}

	Colonia::~Colonia() {
		for (int i = 0; i < NumberDomos; i++) {
			delete domos[i];
		}
		delete[] domos;
	}

	void Colonia::addDomo(Domo* d) {
		for (int i = 0; i < NumberDomos; i++) {
			if (domos[i] == nullptr) {
				domos[i] = d;
				return;
			}
		}
	}

	bool Colonia::AssingColono(Colonos* c) {
		for (int i = 0; i < NumberDomos; i++) {
			if (domos[i] != nullptr && domos[i]->CanAdmit(c)) {
				return domos[i]->Admit(c);
			}
		}
		return false;
	}

	void Colonia::EvacuateDomo(int index) {
		Colonos* lista[100];
		int cant = 0;

		domos[index]->Seal();
		domos[index]->Evacuate(lista, cant);

		for (int i = 0; i < cant; i++) {
			AssingColono(lista[i]);
		}
	}

	bool Colonia::Transfer(Colonos* c, int Origen, int Destino) {
		if (domos[Destino]->CanAdmit(c)) {
			domos[Origen]->WithDraw(c);
			return domos[Destino]->Admit(c);
		}
		return false;
	}

	void Colonia::Rebalance() {
		int movidos = 0;

		for (int i = 0; i < NumberDomos; i++) {
			if (domos[i]->GetRatioO2() < 1.3) {

				int cant = domos[i]->GetCantidad();

				for (int j = 0; j < cant; j++) {

					Colonos* c = domos[i]->GetColono(0);
					domos[i]->WithDraw(c);

					bool movido = false;

					for (int k = 0; k < NumberDomos; k++) {
						if (k != i && domos[k]->CanAdmit(c)) {
							domos[k]->Admit(c);
							movidos++;
							movido = true;
							break;
						}
					}

					if (!movido) {
						domos[i]->Admit(c);
					}
				}
			}
		}

		std::cout << "Colonos rebalanceados: " << movidos << std::endl;
	}

	void Colonia::ControlBoard() {
		for (int i = 0; i < NumberDomos; i++) {
			std::cout << "Domo " << i << std::endl;
			std::cout << "Colonos: " << domos[i]->GetCantidad() << std::endl;
			std::cout << "Ratio O2: " << domos[i]->GetRatioO2() << std::endl;
			std::cout << "-------------------" << std::endl;
		}
	}

	void Colonia::Statistic() {
		int total = 0;

		for (int i = 0; i < NumberDomos; i++) {
			total += domos[i]->GetCantidad();
		}

		std::cout << "Total colonos: " << total << std::endl;
	}
}











