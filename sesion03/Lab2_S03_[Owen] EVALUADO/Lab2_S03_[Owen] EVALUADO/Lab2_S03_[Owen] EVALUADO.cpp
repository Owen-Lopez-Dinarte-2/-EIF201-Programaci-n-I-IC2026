#include <iostream>
#include <array>
#include "Paquetes.h"

int main(){
        int cantidad = 0;
        double limite = 50.00;

        double* pesos = crearRegistro(cantidad);


        ingresarPesos(pesos, cantidad);


       double Totalpeso= calcularPesoTotal(pesos, cantidad);

       int sobrepeso =contarSobreLimite(pesos, cantidad, limite);

      const double* pesado= buscarMasPesado(pesos, cantidad);

      std::cout << "El peso total de los paquetes es: " << Totalpeso << " kg" << std::endl;
      std::cout << "Cantidad de paquetes que superan el limite: " << sobrepeso << std::endl;
      std::cout << "El paquete mas pesado pesa: " << *pesado << " kg" << std::endl;



        delete[] pesos;
        pesos = nullptr;

        return 0;
    }


