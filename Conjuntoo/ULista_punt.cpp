//---------------------------------------------------------------------------

#pragma hdrstop

#include "ULista_punt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "ULista_punt.h"

ListaPtr::ListaPtr() {
	longi = 0;
	elem = NULL;
}


NodoL* ListaPtr::fin() {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		NodoL* ptrFin{}; // Inicializar
		NodoL* x = elem;
		while (x != NULL) {
			ptrFin = x;
			x = x->sig;
		}
		return ptrFin;
	}
}

NodoL* ListaPtr::primero() {
		return elem;
}

NodoL* ListaPtr::siguiente(NodoL* p) {
	if (this->vacia())
		return NULL;
	else
		return p->sig;
}

NodoL* ListaPtr::anterior(NodoL* p) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else if (p == primero()) {
		cout << "DIRECCION INCORRECTA\n";
	}
	else {
		NodoL* x = elem;
		NodoL* ant = NULL;
		while (x != NULL) {
			if (x == p) {
				return ant;
			}
			ant = x;
			x = x->sig;
		}
	}
}

int ListaPtr::recupera(NodoL* p) {
	if (this->vacia())
		return 0;
	else
		return p->elemento;
}

void ListaPtr::inserta(NodoL* p, int e) {
	NodoL* x = new NodoL;
	if (x != NULL) {
		x->elemento = e;
		x->sig = NULL;
		if (vacia()) {
			elem = x;
			longi = 1;
		}
		else {
			longi++;
			if (p == primero()) {
				x->sig = p;
				elem = x;
			}
			else {
				NodoL* ant = anterior(p);
				ant->sig = x;
				x->sig = p;
			}
		}
	}
}

void ListaPtr::suprime(NodoL* p) {
	if (longi == 0) {
		cout << "LISTA VACIA\n";
		return;
	}
	else if (p == elem) {
		NodoL* x = elem;
		elem = elem->sig;
		delete(x);
	}
	else {
		NodoL* ant = anterior(p);
		ant->sig = p->sig;
		delete(p);
	}
	longi--;
}

void ListaPtr::modifica(NodoL* p, int e) {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		p->elemento = e;
	}
}


bool ListaPtr::vacia() {
	return longi == 0;
}

int ListaPtr::longitud() {
	return longi;
}

string ListaPtr::toStr() {
	string r = "{ ";
	NodoL* x = elem;
	while (x != NULL) {
		r += to_string(x->elemento);
		if (x->sig != NULL)
			r += ",";
		x = x->sig;
	}
	r = r + " }";
	return r;
}

void ListaPtr::elimina_dato(int e) {
	NodoL* x = elem;
	while (x != NULL) {
		if (x->elemento == e) {
			NodoL* sup = x;
			x = x->sig;
			suprime(sup);
		}
		else {
			x = x->sig;
		}
	}
}

void ListaPtr::anula() {
	longi = 0;
	NodoL* x = elem;
	while (x != NULL) {
		NodoL* aux = x;
		x = x->sig;
		delete(aux);
	}
	elem = NULL;
}

void ListaPtr::inserta_inicio(int e) {
	inserta(elem, e);
}

void ListaPtr::inserta_fin(int e) {
	NodoL* x = new NodoL;
	x->elemento = e;
	x->sig = NULL;
	if (vacia()) {
		elem = x;
	}
	else {
		NodoL* final = fin();
		final->sig = x;
	}
	longi++;
}

void ListaPtr::inserta(int k, int e) {
	if (k >= 0 && k < longi) {
		NodoL* nuevo_nodo = new NodoL;
		nuevo_nodo->elemento = e;
		nuevo_nodo->sig = NULL;
		if (k == 0) {
			nuevo_nodo->sig = elem;
			elem = nuevo_nodo;
		}
		else {
			NodoL* aux = elem;
			int cont = 0;
			while (cont < k && aux != NULL) {
				aux = aux->sig;
				cont++;
			}
			NodoL* ant = anterior(aux);
			ant->sig = nuevo_nodo;
			nuevo_nodo->sig = aux;

		}
	}
}