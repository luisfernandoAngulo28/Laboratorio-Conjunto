//---------------------------------------------------------------------------

#pragma hdrstop

#include "Conjunto_Lista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma package(smart_init)

KEORCConjunto::KEORCConjunto()
{
	KEORelem = new ListaPtr();
}

bool KEORCConjunto::Vacio()
{
	return (KEORelem->longitud() == 0);
}

bool KEORCConjunto::Pertenece(elemento e)
{
	if (!KEORelem->vacia()) {
		NodoL* p = new NodoL();
		p = KEORelem->primero();
		while (p != NULL)
		{
			int ele = KEORelem->recupera(p);
			if (e == ele)
				return true;
			p = KEORelem->siguiente(p);
		}
	}
	else
		return false;
}

void KEORCConjunto::Inserta(elemento e)
{
	if (!Pertenece(e))
		KEORelem->inserta(KEORelem->primero(), e);
}

int KEORCConjunto::Cardinal()
{
	return KEORelem->longitud();
}

int KEORCConjunto::Ordinal(elemento e)
{
	if (!KEORelem->vacia()) {
		int cont = 0;
		NodoL* p = new NodoL();
		p = KEORelem->primero();
		while (p != NULL)
		{
			cont++;
			int ele = KEORelem->recupera(p);
			if (e == ele)
				return cont;
			p = KEORelem->siguiente(p);
		}

	}
	else
		cout << "ERROR CONJUNTO NO TIENE ELMENTOS \n";
}

void KEORCConjunto::Suprime(elemento e)
{
	if (Pertenece(e)) {
		NodoL* dir = NULL;
		NodoL* p = new NodoL();
		p = KEORelem->primero();
		while (p != NULL)
		{
			int ele = KEORelem->recupera(p);
			if (e == ele)
				dir = p;
			p = KEORelem->siguiente(p);
		}
		if (dir != NULL)
			KEORelem->suprime(p);
	}
	else
		cout << "ERROR NO SE ENCUENTRA DICHO ELEMENTO \n";
}

elemento KEORCConjunto::Muestrea()
{
	srand(time(NULL));
	int lug = rand() % Cardinal();
	NodoL* dir = KEORelem->primero();
	NodoL* dir_KEORelem = NULL;
	int cont = 0;
	for (int i = 1; i <= KEORelem->longitud(); i++)
	{
		if (cont == lug) {
			dir_KEORelem = dir;
			return KEORelem->recupera(dir_KEORelem);
		}
		dir = KEORelem->siguiente(dir);
		cont++;
	}
	return 0;
}

string KEORCConjunto::to_str()
{
	return KEORelem->toStr();
}
