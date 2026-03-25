#include "Flota.h"
#include <iostream>
#include <string>
#include <limits>

int MostrarMenu() {
    std::cout << "----MENU----" << std::endl;
    std::cout << "1. Registrar vehiculo" << std::endl;
    std::cout << "2. Buscar vehiculo por placa" << std::endl;
    std::cout << "3. Mostrar vehiculos por marca" << std::endl;
    std::cout << "4. Registrar kilometros" << std::endl;
    std::cout << "5. Desactivar vehiculo" << std::endl;
    std::cout << "6. Reactivar vehiculo" << std::endl;
    std::cout << "7. Eliminar vehiculo" << std::endl;
    std::cout << "8. Mostrar flota completa" << std::endl;
    std::cout << "9. Contar vehiculos activos" << std::endl;
    std::cout << "10. Salir" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "Opcion: ";

    int opcion;
    std::cin >> opcion;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return opcion;
}

int main() {

    UNA::Flota flota(3);

    bool Ejecutando = true;

    while (Ejecutando) {

        int opcion = MostrarMenu();

        switch (opcion) {

        case 1: {
            std::string placa, marca;
            int year;
            double km;

            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            std::cout << "Marca: ";
            std::getline(std::cin, marca);

            std::cout << "Year: ";
            std::cin >> year;

            std::cout << "Kilometraje: ";
            std::cin >> km;

            UNA::Vehiculo* nuevo = new UNA::Vehiculo(placa, marca, year, km);
            flota.agregar(nuevo);
            break;
        }

        case 2: {
            std::string placa;
            std::cout << "Ingrese la placa: " << std::endl;
            std::getline(std::cin, placa);

            UNA::Vehiculo* encontrado = flota.buscarPorPlaca(placa);

            if (encontrado != nullptr) {
                std::cout << "Vehiculo encontrado" << std::endl;
                encontrado->mostrar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 3: {
            std::string marca;
            std::cout << "Ingrese la marca: " << std::endl;
            std::getline(std::cin, marca);

            flota.mostrarPorMarca(marca);
            break;
        }

        case 4: {
            std::string placa;
            double km;

            std::cout << "Placa: " << std::endl;
            std::getline(std::cin, placa);

            UNA::Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                std::cout << "Kilometros a agregar: " << std::endl;
                std::cin >> km;
                v->registrarKilometros(km);
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 5: {
            std::string placa;
            std::cout << "Placa: " << std::endl;
            std::getline(std::cin, placa);

            UNA::Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->desactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 6: {
            std::string placa;
            std::cout << "Placa: " << std::endl;
            std::getline(std::cin, placa);

            UNA::Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->reactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado" << std::endl;
            }
            break;
        }

        case 7: {
            std::string placa;
            std::cout << "Placa: " << std::endl;
            std::getline(std::cin, placa);

            flota.eliminar(placa);
            break;
        }

        case 8: {
            flota.mostrarTodos();
            break;
        }

        case 9: {
            int activos = flota.contarActivos();
            std::cout << "Vehiculos activos: " << activos << std::endl;
            break;
        }

        case 10:
            Ejecutando = false;
            break;

        default:
            std::cout << "Opcion invalida" << std::endl;
            break;
        }
    }

    return 0;
}