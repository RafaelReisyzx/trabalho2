#include "lista.h"

 int esp=0;
    void listaVazia(Lista*l){
    	l->primeiro=0;
    	l->ultimo=0;
	}

   void AddNome(Lista *l, Nomes *n){
   if(l->ultimo == tam){
   printf("lista cheia\n");
   return;
   }else{
	l->vetLista[l->ultimo]=*n;
    l->ultimo++;  
   return; 
   }}
   
   void imprimirLista(Lista *l){
    int i;
     printf("\n");
    for(i=l->primeiro;i<l->ultimo;i++) 
	{
     printf("%s\n",l->vetLista[i].nome);
     }

   }
   

   void RemoveIgual(Lista *l) 
   {
   	int i,j;
   	 for(i=l->primeiro;i<l->ultimo;i++) 
	{
   	if(l->vetLista[i].pos==-1)
   	{
   	 for(j=i;j<l->ultimo;j++) 
   	 {
   	 	Troca(&l->vetLista[j], &l->vetLista[j+1]);
		}	
   l->ultimo=l->ultimo-1;
    printf("\nNomes repetidos foram removidos!!!\n");
   }
   	
   }
   }
   
   int AchaIgual(Lista *l,Nomes *n) 
   {
   	int i,pos;
   	for(i=l->primeiro;i<l->ultimo;i++) {
	
	if(strcmp(l->vetLista[i].nome, n->nome) == 0) {
		l->vetLista[i].pos=-1;
	    return pos=-1;
		}
	}
	return pos=1;
	}
   
   void Troca(Nomes *a, Nomes *b){
	Nomes aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}
   

