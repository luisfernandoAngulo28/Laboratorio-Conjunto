//---------------------------------------------------------------------------

#pragma hdrstop

#include "Conjunto_Lista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Conjunto::Conjunto(){
   elem=new ListaPtr();
}
 bool Conjunto::Vacio(){
	return (elem->longitud()==0) ;
 }

 bool Conjunto::Pertenece(elemento  e){
	if(!elem->vacia()){
	   NodoL* p=new NodoL();
	   p=elem->primero();
	   while(p!=NULL){
		 int ele=elem->recupera(p);
		  if(e==ele){
			   return true;
		  }
		  p=elem->siguiente(p);
	   }

	} else{
		return false;
    }

 }


   void  Conjunto::Insertar(elemento e){
	  if(!Pertenece(e)){
		 elem->inserta(elem->primero(),e);
	  }

   }

   int Conjunto::Cardinal(){

	 return elem->longitud();
   }

   string Conjunto::to_str(){
	  return elem->toStr();
   }
