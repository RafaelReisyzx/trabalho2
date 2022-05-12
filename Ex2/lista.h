#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define tam 100
#define MaxTamString 10

typedef struct Nomes
{
int pos;
char nome[MaxTamString];
}Nomes;

 typedef struct Lista
 {
Nomes vetLista[tam];
int primeiro;
int ultimo;
}Lista;

void listaVazia(Lista *l);
void AddNome(Lista *l, Nomes *n);
void imprimirLista(Lista *l);
void RemoveIgual(Lista *l);
int AchaIgual(Lista *l,Nomes *n);
void Troca(Nomes *a, Nomes *b);


	

