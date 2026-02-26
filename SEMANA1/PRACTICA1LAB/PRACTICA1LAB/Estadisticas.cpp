#include <iostream>
#include "Estadisticas.h"


int SumaNum(std::array<int, 10>numeros, int suma) {
    for (size_t i = 0; i < numeros.size(); i++) {
        suma = numeros[i] + suma;
    }
    return suma;
}

int BuscarMenor(std::array<int, 10>numeros, int menor) {
    menor = numeros[1];
    for (size_t i = 0; i < numeros.size(); i++) {
        if (menor > numeros[i]) {
            menor = numeros[i];
        }
    }
    return menor;
}

int BuscarMayor(std::array<int, 10>numeros, int mayor) {
    for (size_t i = 0; i < numeros.size(); i++) {

        if (mayor < numeros[i]) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

double ResulPromedio(std::array<int, 10>numeros, int suma,double promedio) {
    for (size_t i = 0; i < numeros.size(); i++) {
        suma = numeros[i] + suma;  
    }
    promedio = suma / 10.0;
    return promedio;
}

