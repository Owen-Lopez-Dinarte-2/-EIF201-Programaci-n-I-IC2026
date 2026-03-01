#ifndef MATRICES_H
#define MATRICES_H
#include <array>
#include <iomanip>
const int FILAS = 3;
const int COLS = 3;

void LeerMatriz(std::array<std::array<int, COLS>, FILAS>& tabla);
void SumaFilas(const std::array<std::array<int, COLS>, FILAS>&tabla);
void ImprimirMatriz(const std::array<std::array<int, COLS>, FILAS>& tabla);
void SumaColumnas(const std::array<std::array<int, COLS>, FILAS>& tabla);
void SumarDiagonal(const std::array<std::array<int, COLS>, FILAS>& tabla);

#endif