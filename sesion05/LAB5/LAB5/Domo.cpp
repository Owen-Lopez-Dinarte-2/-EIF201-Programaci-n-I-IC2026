#include "Domo.h"

namespace EIF201 {

	Domo::Domo(std::string Type, int CodigoId, int CapacityColonos, double GenerationOxygeno, bool Sealed)
		: Type(Type), CodigoId(CodigoId), CapacityColonos(CapacityColonos),
		GenerationOxygeno(GenerationOxygeno), Sealed(false) {

		CantidadActual = 0;
		colonos = new Colonos * [CapacityColonos];
	}

	Domo::~Domo() {
		delete[] colonos;
	}

	bool Domo::CanAdmit(Colonos* c) {
		if (Sealed) return false;
		if (CantidadActual >= CapacityColonos) return false;

		double consumo = 0;
		for (int i = 0; i < CantidadActual; i++) {
			consumo += colonos[i]->GetConsumOxygeno();
		}

		return (consumo + c->GetConsumOxygeno()) <= GenerationOxygeno;
	}

	bool Domo::Admit(Colonos* c) {
		if (!CanAdmit(c)) return false;
		colonos[CantidadActual++] = c;
		return true;
	}

	bool Domo::WithDraw(Colonos* c) {
		for (int i = 0; i < CantidadActual; i++) {
			if (colonos[i] == c) {
				colonos[i] = colonos[CantidadActual - 1];
				CantidadActual--;
				return true;
			}
		}
		return false;
	}

	void Domo::Seal() {
		Sealed = true;
	}

	double Domo::GetRatioO2() {
		double consumo = GetConsumoTotal();
		if (consumo == 0) return GenerationOxygeno;
		return GenerationOxygeno / consumo;
	}

	void Domo::Evacuate(Colonos** lista, int& cantidad) {
		for (int i = 0; i < CantidadActual; i++) {
			lista[cantidad++] = colonos[i];
		}
		CantidadActual = 0;
	}

	bool Domo::Emergency() {
		return Sealed;
	}

	int Domo::GetCantidad() {
		return CantidadActual;
	}

	Colonos* Domo::GetColono(int i) {
		if (i >= 0 && i < CantidadActual) return colonos[i];
		return nullptr;
	}

	double Domo::GetConsumoTotal() {
		double total = 0;
		for (int i = 0; i < CantidadActual; i++) {
			total += colonos[i]->GetConsumOxygeno();
		}
		return total;
	}

	double Domo::GetCapacidad() {
		return GenerationOxygeno;
	}
}