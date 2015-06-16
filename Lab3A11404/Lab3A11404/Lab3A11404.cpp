// Lab3A11404.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "Persona.h"
#include "ElementoPersona.h"

using namespace std;

bool findRepeat(int[], int); //Declaración del método para buscar si un id es repetido
//@parametros:  - int []: array donde se guardan los id
//				- int: número aleatorio que se genera para el id

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	cout << "Arbol de integers" << endl;
	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	cout << a << endl;


	cout << "Arbol de doubles" << endl;
	ArbolBinario d;
	for (int i = 0; i < 100; ++i) {
		d.insertarElemento(new ElementoDouble(((double)rand()*(100.00 - 0.00)) / (double)RAND_MAX));
	}

	cout << d << endl;

	cout << "Arbol de Personas" << endl;
	ArbolBinario q;

	//Array para guardar nombres del txt y seleccionarlos aleatoriamente
	string names[100];
	int k = 0;
	ifstream myFile("nombres.txt");
	while (!myFile.eof()){
		getline(myFile, names[k]);
		k++;
	}

	//Array para crear id no repetidos para cada Persona
	int id[100];
	int c = 0;
	while (c < 100){
		unsigned int number = rand() % (110889 - 10000) + 10000;
		if (findRepeat(id, number) != true){
			id[c] = number;
			c++;
		}
	}

	Persona * p[100];
	for (int i = 0; i < 100; i++){
		p[i] = new Persona(names[rand() % 100], id[i]);
	}

	for (int i = 0; i < 100; ++i) {
		q.insertarElemento(new ElementoPersona(p[i]));
	}

	cout << q << endl;

	system("pause");

	return 0;
}


//Función para buscar si el número random generado es repetido
bool findRepeat(int id[100], int number){
	for (int i = 0; i < 100; i++){
		if (number == id[i]){
			return true;
		}
	}
}