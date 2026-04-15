#include <iostream>
#include "Colonia.h"

int main() {

    EIF201::Colonos* c1 = new EIF201::Colonos("Ana", 1, "BIOLOGO", 5, 80);
    EIF201::Colonos* c2 = new EIF201::Colonos("Luis", 2, "INGENIERO", 6, 70);
    EIF201::Colonos* c3 = new EIF201::Colonos("Maria", 3, "MEDICO", 4, 90);
    EIF201::Colonos* c4 = new EIF201::Colonos("Pedro", 4, "GEOLOGO", 5, 60);
    EIF201::Colonos* c5 = new EIF201::Colonos("Juan", 5, "PILOTO", 7, 75);
    EIF201::Colonos* c6 = new EIF201::Colonos("Elena", 6, "BIOLOGO", 6, 85);
    EIF201::Colonos* c7 = new EIF201::Colonos("Carlos", 7, "INGENIERO", 5, 65);
    EIF201::Colonos* c8 = new EIF201::Colonos("Sofia", 8, "MEDICO", 4, 95);

    EIF201::Colonia* colonia = new EIF201::Colonia("MarteBase", "Marte", 3);

    EIF201::Domo* d1 = new EIF201::Domo("laboratorio", 1, 3, 30, false);
    EIF201::Domo* d2 = new EIF201::Domo("ingenieria", 2, 3, 40, false);
    EIF201::Domo* d3 = new EIF201::Domo("habitat", 3, 4, 50, false);

    colonia->addDomo(d1);
    colonia->addDomo(d2);
    colonia->addDomo(d3);

    colonia->AssingColono(c1);
    colonia->AssingColono(c2);
    colonia->AssingColono(c3);
    colonia->AssingColono(c4);
    colonia->AssingColono(c5);
    colonia->AssingColono(c6);
    colonia->AssingColono(c7);
    colonia->AssingColono(c8);

    std::cout << "CONTROL BOARD" << std::endl;
    colonia->ControlBoard();

    std::cout << "TRANSFERENCIAS" << std::endl;
    colonia->Transfer(c2, 0, 1);
    colonia->Transfer(c3, 1, 2);

    std::cout << "EVACUACION" << std::endl;
    colonia->EvacuateDomo(0);

    std::cout << "REBALANCEO" << std::endl;
    colonia->Rebalance();

    std::cout << "ESTADISTICAS" << std::endl;
    colonia->Statistic();

    delete colonia;

    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete c6;
    delete c7;
    delete c8;

    return 0;
}