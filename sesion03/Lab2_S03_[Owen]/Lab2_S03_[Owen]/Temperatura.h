#ifndef TEMPERATURA_H
#define TEMPERATURA_H

double* CrearRegistro(int& cantidadDias);

void IngresarTemperaturas(double* registro, int cantidades);

double CalcularPromedio(const double* registro, int cantidad);

double CalcularMaximo(const double* registro, int cantidad);

double CalcularMinimo(const double* registro, int cantidad);

void MostrarResultado(const double* registro, int cantidad);




#endif

