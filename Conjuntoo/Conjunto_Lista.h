//---------------------------------------------------------------------------

#ifndef Conjunto_ListaH
#define Conjunto_ListaH
//---------------------------------------------------------------------------
#include <iostream>
#include "ULista_punt.h"

typedef int elemento;

using namespace std;

class KEORCConjunto {
	private:
		ListaPtr * KEORelem;
	public:
		KEORCConjunto();
		bool Vacio();
		bool Pertenece(elemento e);
		void Inserta(elemento e);
		int Cardinal();
		int Ordinal(elemento e);
		void Suprime(elemento e);
		elemento Muestrea();
		string to_str();
};
#endif
