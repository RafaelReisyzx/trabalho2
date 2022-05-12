#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define tam 5

   typedef struct Numeros
   {
   int numero;
   }Numero;

   typedef struct Lista
   {
   Numeros vetLista[tam];
   int primeiro;
   int ultimo;
   }Lista;

   void ListaVazia(Lista *l);
   void FazLista(Lista*l);
   int Maior(Lista *l);
   void ImprimeLista(Lista *l);

