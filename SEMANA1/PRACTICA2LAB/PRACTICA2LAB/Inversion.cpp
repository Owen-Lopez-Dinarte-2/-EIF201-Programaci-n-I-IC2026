#include <iostream>
#include "Inversion.h"

void InvertirNum(const std::vector<int>&a, std::vector<int>&b) {
	int tamano = 0;
	for (int i = a.size()-1; i >= 0; i--) {
		b[tamano] = a[i];
		tamano = tamano + 1;
		
	}
}

void MostrarNum(const std::vector<int>&a, const std::vector<int>&b) {
	std::cout << "Usted Ingreso los siguientes valores: " << std::endl;
	for (int item : a) {
		std::cout << item <<std::endl;
	}
	std::cout << "El inverso de esos valores seria: " << std::endl;
	for (int item : b) {
		std::cout << item << std::endl;
	}
}