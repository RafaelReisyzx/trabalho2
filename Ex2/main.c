#include "lista.h"

   int main()
   {

   FILE *arquivo;
   Lista l;
   Nomes n;
   char vetNome[MaxTamString],nome[30];
   int menu,cont=0;

   listaVazia(&l);  
   
    printf("\nDigite o nome do arquivo onde se encontra a lista de nomes: ");
    fgets(nome,30,stdin);
	nome[strlen(nome)-1]='\0';	 
	 
	arquivo = fopen(nome, "r");
    if (arquivo==NULL)
	{
    printf("Erro na abertura do arquivo");
    exit(1);
    }else{
   
    while(fgets(vetNome,MaxTamString,arquivo)!= NULL){    	
    strcpy(n.nome, vetNome);
   	n.pos=AchaIgual(&l,&n);
    AddNome(&l, &n);	
	RemoveIgual(&l);	
}
}
  
	fclose(arquivo);

  for(;;)
       {
       	  
		printf("\nMenu\n");
		printf("\n1)Imprimir lista\n");
		printf("\n2)Adicionar um nome\n");
		printf("\n0)Sair\n");
		scanf("%d", &menu);
	
         if(menu==1)
		{
		 imprimirLista(&l);
		}else{
		if(menu==2)
		{
			printf("\nDigite o nome: ");
			scanf("%c", (char *) stdin);
			fgets(vetNome, MaxTamString, stdin);
           	n.pos=1;
            strcpy(n.nome, vetNome);
			n.pos=AchaIgual(&l,&n);
            AddNome(&l, &n);	
	        RemoveIgual(&l);
	
		}else{
		if(menu==0)
		{
			return 0;
		}else{
			
			printf( "\nOpção inválida\n");	
		}}}
		}

}
