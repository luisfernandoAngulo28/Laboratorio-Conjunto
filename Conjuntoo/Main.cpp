#include <iostream>
#include "Conjunto_Lista.h"

using namespace std;

bool SonEquivalentes(KEORCConjunto* KEORA,KEORCConjunto * KEORB)
{
	return (KEORA->Cardinal() == KEORB->Cardinal());
}

int main()
{
	KEORCConjunto* KEORA = new 	KEORCConjunto();
	KEORCConjunto* KEORB = new 	KEORCConjunto();
	KEORCConjunto* KEORC = new 	KEORCConjunto();
	for(int i=1;i<6;i++){
			KEORA->Inserta(i);
	}
	/*
	KEORA->Inserta(2);
	KEORA->Inserta(3);
	KEORA->Inserta(4);
	KEORA->Inserta(1);*/
	cout<<"ConjuntoA"<<KEORA->to_str()<<"\n";

	for(int i=1;i<6;i++){
			KEORB->Inserta(i);
	}


	/*KEORB->Inserta(1);
	KEORB->Inserta(2);
	KEORB->Inserta(3);
	KEORB->Inserta(4);
	KEORB->Inserta(5);*/
	cout<<"ConjuntoB"<<KEORB->to_str()<<"\n";

	bool x = SonEquivalentes(KEORA, KEORB);
	if (x)
		cout << "Son conjuntos equivalentes \n";
	else
		cout << "No son equivalentes \n";

	system("PAUSE");
	return 0;

}
