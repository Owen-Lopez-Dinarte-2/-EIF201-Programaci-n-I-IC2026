#include <iostream>
#include <string>
#include "Nombre.h"

int main()
{
    std::string Nombre = "";
    std::cout << "Ingrese su Nombre" << std::endl;
    std::getline(std::cin, Nombre);
    NomMayusculas(Nombre);
    EncontrarNombreyApellido(Nombre);
    ContadorVocales(Nombre);
    TotalCaracteres(Nombre);
}

