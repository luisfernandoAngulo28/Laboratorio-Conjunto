#include<iostream>
#include "Conjunto_Lista.h"
using namespace std;

bool SonEquivalentes(Conjunto* A,Conjunto* B){
   return (A->Cardinal()==B->Cardinal());

}

int main(){

  Conjunto* A=new Conjunto();
  Conjunto* B=new Conjunto();

  A->Insertar(2);
   A->Insertar(3);
	A->Insertar(4);
	 A->Insertar(1);

	 B->Insertar(1);
   B->Insertar(2);
	B->Insertar(3);
	 B->Insertar(4);
	  B->Insertar(5);

	  cout<<"Conjunto A="<<A->to_str()<<"\n";

	  cout<<"Conjunto B="<<B->to_str()<<"\n";



	  bool x=SonEquivalentes(A,B);
	  if(x){
		 cout<<"Son Conjuntos Equivalentes \n";
	  } else{
		 cout<<"No Son Conjuntos Equivalentes \n";
      }
	  system("PAUSE");
	  return 0;

}

