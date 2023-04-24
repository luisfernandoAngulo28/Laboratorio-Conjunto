//---------------------------------------------------------------------------

#ifndef ULista_puntH
#define ULista_puntH
//---------------------------------------------------------------------------
#include<string>
#include<iostream>

using namespace std;

struct NodoL {
	int elemento;
	NodoL* sig;
	NodoL* ant;
};

class ListaPtr{
   //Atributos
   private:
	 NodoL* elem;
	 int longi;

	public:
	ListaPtr();
	NodoL* fin();
	NodoL* primero();
	NodoL* siguiente(NodoL*);
	NodoL* anterior(NodoL*);
	int recupera(NodoL*);
	void inserta(NodoL*, int);
	void inserta_inicio(int);
	void inserta_fin(int);
	void suprime(NodoL*);
	void modifica(NodoL*, int);
	bool vacia();
	int longitud();
	string toStr();
	void elimina_dato(int);
	void anula();
	void inserta(int, int);
};
#endif
