#include <stdio.h>
#include <string.h>


struct contato
{
    char nome[50],email[50],datan[50],obs[50];
    int numero;

};

int opcao,opcao2;
int i = 0;
int a = 1;
char edicao[50],excluir[50],busca[50];

main()
{

struct contato c[50];

opcao = 1;

while (opcao != 0)
{

if (i <= 9)
{

fflush(stdin);

system("cls");

printf("________________________\n");
printf("|  AGENDA TELEFONICA   |\n");
printf("|______________________|\n");
printf("\n");
printf(" 1 - Adicionar contato.\n");
printf(" 2 - Editar um contato.\n");
printf(" 3 - Excluir um contato.\n");
printf(" 4 - Ver contatos.\n");
printf(" 5 - Buscar um contato \n     pelo nome.\n");
printf(" 0 - sair");
printf(" \n");
printf("Opcao:");
scanf("%i",&opcao);

switch (opcao)
{
case 1:


    if (i<=9)
    {
    
    for(i=i; i<a;i++)
    {
    fflush(stdin);

    printf("Digite o nome:");
    scanf("%s",c[i].nome);
    printf("Digite o numero com o DDD:");
    scanf("%d",&c[i].numero);
    printf("Email:");
    scanf("%s",c[i].email);
    printf("Data de nascimento:");
    scanf("%s",c[i].datan);
    printf("Obs:");
    scanf("%s",c[i].obs);
    }
    
    printf("Contato adicionado com sucesso!\n");

    a = a + 1;
    
    system("pause");

    break;

    case 4:

    fflush(stdin);
    
    a = a - 1;

    for(i=0; i<a; i++)
    {

    printf("Contato %i: ", i+1);
    printf("Nome: %s\n",c[i].nome);

    }

    system("pause");

    break;

    case 5:

    //fflush(stdin);
    
    printf("Digite o nome do contato:");
    scanf("%s",busca);

    a = a - 1; 

    for(i=0; i<a; i++) 
   {
      system("cls");

      if (strcmp (busca,c[i].nome) == 0)
      {
 
       printf("Contato %i:\n", i+1);
       printf("Nome: %s\n",c[i].nome);
       printf("Numero: %d\n",c[i].numero);
       printf("Email: %s",c[i].email);
       printf("Data de nascimento: %s",c[i].datan);
       printf("Obs: %s",c[i].obs);

      }
      
    }
    break;

    case 0: 
    break;

    default:
       printf("Voce deve escolher uma das 6 opcoes");
    break;
    }
}

}

else
{
    printf("Voce ja adicionou o maximo de contatos");
}

}


}