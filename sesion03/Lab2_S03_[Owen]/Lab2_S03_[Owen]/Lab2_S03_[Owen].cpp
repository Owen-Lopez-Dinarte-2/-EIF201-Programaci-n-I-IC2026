#include <iostream>
#include "Temperatura.h"

int main()
{
    int cantidadDias = 0;

    
    double* registroTemp = CrearRegistro(cantidadDias);

    
    IngresarTemperaturas(registroTemp, cantidadDias);

    
    MostrarResultado(registroTemp, cantidadDias);

   
    delete[] registroTemp;
    registroTemp = nullptr;

    return 0;
}

