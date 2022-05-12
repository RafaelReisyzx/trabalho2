#include "lista.h"

   void ListaVazia(Lista *l) {
   l->primeiro = 0;
   l->ultimo = 0;
   }  

   void ImprimeLista(Lista *l) {
    printf("\n");
    int i;
    for(i=l->primeiro;i<l->ultimo;i++) 
	{
     printf("%s\n",l->vetLista[i].numero);
     }
   }

   void FazLista(Lista *l) {
   int n;
   Numero aux;

   for(int i=0; i<tam; i++) {
   printf("\nDigite o %d° valor: ", i+1);
   scanf("%d", &n);

   aux.numero = n;
   
   l->vetLista[l->ultimo] = aux;
   l->ultimo++;
   }
   }

   int Maior(Lista *l){
   	
   int MaximaSoma=l->vetLista[0].numero;
   int x=0,i,j;
   for(i=1; i<l->ultimo; i++){
   for(j=i; j>0; j--){
   x=x+l->vetLista[j].numero;
   if(MaximaSoma<x) 
   {
   MaximaSoma = x;
   }}}
   return MaximaSoma;
   }
   
   
