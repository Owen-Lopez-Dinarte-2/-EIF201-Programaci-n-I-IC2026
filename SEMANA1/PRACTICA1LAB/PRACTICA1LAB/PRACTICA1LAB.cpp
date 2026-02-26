// PRACTICA1LAB.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include"Estadisticas.h"




int main()
{
    int mayor = 0;
    int menor = 0;
    int suma = 0;
    double promedio = 0;

        std::array<int, 10>numeros;
            std::cout << "Bienvenido" << std::endl;
            for (size_t i = 0; i < numeros.size(); i++) {
                std::cout << "Ingrese un Numero Entero" << std::endl;
                std::cin >> numeros[i];
            }
            std::cout << "Su numero mayor es: " << BuscarMayor(numeros, mayor) << std::endl;
            std::cout << "Su numero menor es: " << BuscarMenor(numeros, menor) << std::endl;
            std::cout << "La suma de todos los numero es: " << SumaNum(numeros, suma) << std::endl;
            std::cout << "El promedio es el siguiente: " << ResulPromedio(numeros, suma,promedio) << std::endl;
        }