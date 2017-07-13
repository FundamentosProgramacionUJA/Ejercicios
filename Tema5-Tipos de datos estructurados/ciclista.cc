/* ---------------------------------------------------------------------------
 * Programa: ciclista
 * Entradas: Un vector con los tiempos empleados en cada etapa por un ciclista
 * Salidas:  El tiempo total empleado por el ciclista
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

struct TiempoEtapa {
	int horas, minutos, segundos;
};

int main ()
{
	const int NETAPAS = 4;
	TiempoEtapa etapas[NETAPAS] = { {1, 40, 40}, {4, 50, 30}, {0, 50, 23}, {5, 0, 45} };
	TiempoEtapa tiempoFinal = {0, 0, 0};
	for (int i = 0; i < NETAPAS; i++) {
		tiempoFinal.horas += etapas[i].horas;
		tiempoFinal.minutos += etapas[i].minutos;
		tiempoFinal.segundos += etapas[i].segundos;
	}
	tiempoFinal.minutos += tiempoFinal.segundos / 60;
	tiempoFinal.segundos = tiempoFinal.segundos % 60; // también vale tiempoFinal.segundos %= 60;
	tiempoFinal.horas += tiempoFinal.minutos / 60;
	tiempoFinal.minutos %= 60;                        // también vale tiempoFinal.minutos = tiempoFinal.minutos % 60;
	cout << "Tiempo total: " << tiempoFinal.horas << ':' << tiempoFinal.minutos << ':' << tiempoFinal.segundos << '\n';
	return 0;
}
