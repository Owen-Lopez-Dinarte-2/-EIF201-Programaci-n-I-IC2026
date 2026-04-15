#ifndef DOMO_H
#define DOMO_H

#include "Colonos.h"

namespace EIF201 {

	class Domo {
	private:
		std::string Type;
		int CodigoId;
		int CapacityColonos;
		double GenerationOxygeno;
		bool Sealed;

		Colonos** colonos;
		int CantidadActual;

	public:
		Domo(std::string Type, int CodigoId, int CapacityColonos, double GenerationOxygeno, bool Sealed);
		~Domo();

		bool Emergency();
		bool WithDraw(Colonos* c);
		bool CanAdmit(Colonos* c);
		bool Admit(Colonos* c);
		void Seal();
		void Evacuate(Colonos** lista, int& cantidad);

		double GetRatioO2();
		int GetCantidad();
		Colonos* GetColono(int i);
		double GetConsumoTotal();
		double GetCapacidad();
	};
}

#endif
