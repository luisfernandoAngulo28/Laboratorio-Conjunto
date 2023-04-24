//---------------------------------------------------------------------------

#ifndef Conjunto_ListaH
#define Conjunto_ListaH
//---------------------------------------------------------------------------
#include<iostream>
#include "ULista_punt.h"
#include<iostream>

typedef int elemento;
using namespace std;

class Conjunto{
	//Atributo
	private:
	  ListaPtr* elem;
	public:
	  Conjunto();
	  bool Vacio();
	  bool Pertenece(elemento  e);
	  void Insertar(elemento e);
	  int Cardinal();
	  int Ordinal(elemento e);
	  void Suprime (elemento e);
	  elemento Muestra();
	  string to_str();


};

#endif
