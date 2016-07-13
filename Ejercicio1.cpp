/* 
*  Calcular el area de un cuadrado, teniendo como medidas la altura y la base de 10cm.
*  Programado por Alejandro Vazquez del Mercado .. 13 Julio 2016
*  Contacto: alejandrovazquez.dev@gmail.com || alejandro@lineium.com
*/

// Declaración de Librerías.
#include <iostream>
#include <string>

// Declaracion de Variables.
int base = 10, altura = 10, area = 0;

// Metodo Main.
int main() {
	area = base * altura;
	std::cout << "El area es igual a: " << area << std::endl;
	std::cout << "Presiona una tecla para finalizar...";
	getchar();
}

