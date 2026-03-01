

#include <iostream>
#include <iomanip>
#include "Matrices.h"

int main()
{
	const int FILAS = 3;
	const int COLS = 3;
	std::array<std::array<int, COLS>, FILAS>tabla;
	LeerMatriz(tabla);
	ImprimirMatriz(tabla);
	SumaFilas(tabla);
	SumaColumnas(tabla);
	SumarDiagonal(tabla);
	
}