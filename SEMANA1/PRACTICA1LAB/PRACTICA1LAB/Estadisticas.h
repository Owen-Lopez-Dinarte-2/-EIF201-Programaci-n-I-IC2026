#pragma once
#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <array>

int SumaNum(std::array<int, 10>numeros, int suma);
int BuscarMenor(std::array<int, 10>numeros, int menor);
int BuscarMayor(std::array<int, 10>numeros, int mayor);
double ResulPromedio(std::array<int, 10>numeros, int suma,double promedio);
#endif