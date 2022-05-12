#include "lista.h"


   int main()
   {
   Lista l;
   int MaximaSoma;
   setlocale(LC_ALL,"Portuguese");

   ListaVazia(&l);
   FazLista(&l);
   MaximaSoma = Maior(&l);
   printf("A maxima soma é: %d\n", MaximaSoma);

   return 0;
}



