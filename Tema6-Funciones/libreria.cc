#include <iostream>
#include <string>
using namespace std;

struct Libro {
	int codigo;
	string titulo;
	float precio;
};

struct Cliente {
	int codigo;
	string nombre;
};

struct Venta {
	int codLibro;
	int codCliente;
};


/* Descripción: Calcula el número de ejemplares vendidos de un libro
 * Parámetros de entrada:
 *   - codLibro: el código del libro
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 * Valor de retorno: el número de ejemplares vendidos del libro de código codLibro en vv
 */
int vendidos (int codLibro, const Venta vv[], int tamvv)
{
	int cont = 0;
	for (int i = 0; i < tamvv; i++)
		if (vv[i].codLibro == codLibro)
			cont++;
	return cont;
}

/* Descripción: Dado el código de un libro calcula su posición en un vector de libros
 * Parámetros de entrada:
 *   - codLibro: el código del libro
 *   - vl: el vector de libros
 *   - tamvl: el número de elementos de vl
 * Precondiciones:
 *   - Se supone que a lo sumo existe un libro con el códido codLibro en vl
 * Valor de retorno: el índice que ocupa el libro de código codLibro en vl. En caso de que el libro no esté en el
 *                   vector devuelve -1.
 */
int posLibro (int codLibro, const Libro vl[], int tamvl)
{
	for (int i = 0; i < tamvl; i++)
		if (vl[i].codigo == codLibro)
			return i;
	return -1;
}

/* Descripción: Obtiene el título del libro más vendido. En caso de que haya más de uno devuelve el código de uno de 
 *              los más vendidos
 * Parámetros de entrada:
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 *   - vl: el vector de libros
 *   - tamvl: el número de elementos de vl
 * Valor de retorno: el título del libro más vendido. En caso de que haya más de uno devuelve el título de uno de 
 *                   los más vendidos. Si no hay ninguna venta devuelve una cadena vacía
 */
string masVendido (const Venta vv[], int tamvv, const Libro vl[], int tamvl)
{
	int max = 0;
	string titulo = "";
	for (int i = 0; i < tamvl; i++) {
		int nVendidos = vendidos (vl[i].codigo, vv, tamvv);
		if (nVendidos > max) {
			max = nVendidos;
			titulo = vl[i].titulo;
		}
	}
	return titulo;
}

/* Descripción: Obtiene el título del libro que ha recaudado más dinero. En caso de que haya más de uno devuelve uno de los 
 *              que más dinero han recuadado
 * Parámetros de entrada:
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 *   - vl: el vector de libros
 *   - tamvl: el número de elementos de vl
 * Valor de retorno: el título del libro que ha recaudado más dinero. En caso de que haya más de uno devuelve el título de uno de 
 *                   los que han recaudado más dinero. Si no hay ninguna venta devuelve una cadena vacía
 */
string masRecaudado (const Venta vv[], int tamvv, const Libro vl[], int tamvl)
{
	float max = 0;
	string titulo = "";
	for (int i = 0; i < tamvl; i++) {
		float recaudado = vendidos (vl[i].codigo, vv, tamvv) * vl[i].precio;
		if (recaudado > max) {
			max = recaudado;
			titulo = vl[i].titulo;
		}
	}
	return titulo;
}

/* Descripción: Obtiene los títulos de los libros comprados por un cliente
 * Parámetros de entrada:
 *   - codigo: código del cliente
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 *   - vl: el vector de libros
 *   - tamvl: el número de elementos de vl
 * Parámetros de salida:
 *   - titulos: vector con los títulos de los libros comprados por el cliente de código codigo
 * Precondiciones: 
 *   - el vector titulos tiene reservados suficientes elementos como para albergar a todos los títulos comprados por
 *     el cliente de código codigo.
 *   - todos los códigos de libro que aparecen en el vector vv, existen en el vector vl
 * Valor de retorno: el número de libros que ha comprado el cliente de código codigo
 */
int comprados (int codigo, const Venta vv[], int tamvv, const Libro vl[], int tamvl, string titulos[])
{
	int nComprados = 0;
	for (int i = 0; i < tamvv; i++) {
		if (vv[i].codCliente == codigo) {
			titulos[nComprados] = vl[posLibro (vv[i].codLibro, vl, tamvl)].titulo;
			nComprados++;
		}
	}
	return nComprados;
}

/* Descripción: Obtiene el nombre del cliente que ha comprado más libros. Si hay más de uno devuelve el nombre de uno de los
 *              clientes que ha comprado más libros
 * Parámetros de entrada:
 *   - vc: el vector de clientes
 *   - tamvc: el número de elementos de vc
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 * Valor de retorno: el nombre del cliente que ha comprado más libros. En caso de que haya más de uno devuelve el nombre 
 *                   de uno de los que más libros han comprado. Si no hay ninguna venta devuelve una cadena vacía.
 */
string masLibros (const Cliente vc[], int tamvc, const Venta vv[], int tamvv)
{
	int max = 0;
	string nombre = "";
	for (int i = 0; i < tamvc; i++) {
		int comprados = 0;
		for (int j = 0; j < tamvv; j++)
			if (vv[j].codCliente == vc[i].codigo)
				comprados++;
		if (comprados > max) {
			max = comprados;
			nombre = vc[i].nombre;
		}
	}
	return nombre;
}

/* Descripción: Obtiene el nombre del cliente que ha gastado más en libros. Si hay más de uno devuelve el nombre de uno 
 *              de los clientes que ha gastado más en libros
 * Parámetros de entrada:
 *   - vc: el vector de clientes
 *   - tamvc: el número de elementos de vc
 *   - vv: vector de ventas
 *   - tamvv: número de elementos de vv
 *   - vl: el vector de libros
 *   - tamvl: el número de elementos de vl
 * Valor de retorno: el nombre del cliente que ha gastado más en libros. En caso de que haya más de uno devuelve el nombre 
 *                   de uno de los que más libros ha gastado en libros. Si no hay ninguna venta devuelve una cadena vacía
 */
string masGastado (const Cliente vc[], int tamvc, const Venta vv[], int tamvv, const Libro vl[], int tamvl)
{
	float maxGastado = 0.0f;
	string nombre = "";
	for (int i = 0; i < tamvc; i++) {
		float gastado = 0.0f;
		for (int j = 0; j < tamvv; j++)
			if (vv[j].codCliente == vc[i].codigo)
				gastado += vl[posLibro (vv[j].codLibro, vl, tamvl)].precio;
		if (gastado > maxGastado) {
			maxGastado = gastado;
			nombre = vc[i].nombre;
		}
	}
	return nombre;
}

int main ()
{
	const int NUMLIBROS = 5;
	Libro vl[NUMLIBROS] = { {1, "El castillo", 8.99f}, {2, "El extranjero", 7.0f}, {3, "Siddharta", 6.50f},
	                        {4, "La conjura de los necios", 15.0f}, {5, "Fundación", 5.0f} };
	const int NUMCLIENTES = 4;
	Cliente vc[NUMCLIENTES] = { {1, "Luis Pérez Ridruejo"}, {2, "Tomás Martos Molina"}, {3, "Antonio Sánchez Rubio"},
	                            {4, "Antonio Miguel Sánchez Román"} };
	const int NUMVENTAS = 10;
	Venta vv[NUMVENTAS] = { {1,1}, {1,2}, {2,3}, {1,4}, {2,2}, {3,3}, {4,2}, {5,2}, {4,1}, {4,4} };
	
	cout << "El título del libro más vendido es: " << masVendido (vv, NUMVENTAS, vl, NUMLIBROS) << '\n';
	cout << "El título del libro que ha recuadado más dinero es: " << masRecaudado (vv, NUMVENTAS, vl, NUMLIBROS) << '\n';
	
	string titulos[NUMLIBROS];
	int ncomp = comprados (1, vv, NUMVENTAS, vl, NUMLIBROS, titulos);
	cout << "Títulos de los libros comprados por el cliente de código 1:\n";
	for (int i = 0; i < ncomp; i++)
		cout << titulos[i] << '\n';

	cout << "El nombre del cliente que ha comprado más libros es: " << masLibros (vc, NUMCLIENTES, vv, NUMVENTAS) << '\n';
	cout << "El nombre del cliente que ha gastado más dinero es: " << masGastado (vc, NUMCLIENTES, vv, NUMVENTAS, vl, NUMLIBROS) 
	     << '\n';
	return 0;
}
