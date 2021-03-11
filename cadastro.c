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
int zero;

main()
{

struct contato c[50];

opcao = 1;

while (opcao != 0)
{

if (i <= 9)
{

//fflush(stdin);

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

 //fflush(stdin);

    if (i<=9)
    {
    
    if (zero == 0)
    {
    for(i=i; i<a;i++)
    {
    
    
    if(zero == 0)
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

    }
    else
    {
   
    printf("Digite o nome:");
    scanf("%s",c[zero].nome);
    printf("Digite o numero com o DDD:");
    scanf("%d",&c[zero].numero);
    printf("Email:");
    scanf("%s",c[zero].email);
    printf("Data de nascimento:");
    scanf("%s",c[zero].datan);
    printf("Obs:");
    scanf("%s",c[zero].obs);  
   
    }
    
    printf("Contato adicionado com sucesso!\n");

    a = a + 1;
    }
    
    else
    {
    printf("Ja foram adicionados o maximo de contatos.");
    }
    
    system("pause");

    break;
}
}
}
}