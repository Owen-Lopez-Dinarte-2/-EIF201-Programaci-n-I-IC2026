
#include <iostream>
#include <array>
#include <vector>
#include "Inversion.h"

int main()
{
    int tamano = 0;
    std::cout << "Bienvenido" << std::endl;
    std::cout << "De que Tamano seria la lista que deseas crear" << std::endl;
    std::cin >> tamano;
    std::vector<int> Numeros(tamano);
    std::vector<int> Invertido(tamano);
    if (tamano > 20) {
        std::cout << "El tamano maximo permitido para la lista es de 20 numeros" << std::endl;
    }
    else {
        for (size_t i = 0; i < Numeros.size(); i++) {
            std::cout << "Ingrese un Numero" << std::endl;
            std::cin >> Numeros[i];
        }
        
        InvertirNum(Numeros, Invertido);
        MostrarNum(Numeros, Invertido);
        
    }

}


