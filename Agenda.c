#include <stdio.h>
#include <string.h>


struct contato //aqui é a parte onde monto o struct
{
    char nome[50],email[50],datan[50],obs[50];
    int numero;

};

int opcao,opcao2;
int i = 0;
int a = 0;
char edicao[50],excluir[50],busca[50];

void menu() // aqui usei o void para criar um menu de forma mais pratica para usar dentro do main
{
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
}


main()
{

    struct contato c[50];

    opcao = 1;
    
    while (opcao != 0)
    {

            fflush(stdin);

            system("cls");

            menu();

            switch (opcao)
            {
            case 1: // Função cadastro


                if (i<=9)
                {

                
                    fflush(stdin);
                
                        printf("Digite o nome:");
                        scanf("%s",c[a].nome);
                        printf("Digite o numero com o DDD:");
                        scanf("%d",&c[a].numero);
                        printf("Email:");
                        scanf("%s",c[a].email);
                        printf("Data de nascimento:");
                        scanf("%s",c[a].datan);
                        printf("Obs:");
                        scanf("%s",c[a].obs);
                        
                        
                        printf("Contato adicionado com sucesso!\n");

                        a++;
                        i++;
                        
                        system("pause");
                }
        
                else
                {
                    printf("Voce ja adicionou o maximo de contatos\n");
                    
                    system("pause");
            
                }

                break;
                
                case 2: // função editar


                    printf("Digite o nome do contato que deseja alterar:");
                    scanf("%s",edicao);
                    
                    for(i=0; i<a; i++) 
                    {
                        system("cls");

                        if(strcmp (edicao,c[i].nome) == 0) 
                        {
                            printf("O que deseja mudar?");
                            printf("\n 1 - Nome");
                            printf("\n 2 - Numero");
                            printf("\n 3 - Email");
                            printf("\n 4 - Data de nascimento");
                            printf("\n 5 - Obs");
                            printf("\n Opcao:");
                            scanf("%d",&opcao2);

                            switch (opcao2)
                            {
                            case 1:
                                
                                //fflush(stdin);
                                
                                printf("Digite o novo nome:");
                                scanf("%s",c[i].nome);
                                break;
                            
                            case 2:
                                
                                //fflush(stdin);

                                printf("Digite o numero com o DDD:");
                                scanf("%d",&c[i].numero);
                                break;
                            
                            case 3:
                                
                                //fflush(stdin);

                                printf("Email:");
                                scanf("%s",c[i].email);
                                break;
                            
                            case 4:
                                
                                //fflush(stdin);
                                
                                printf("Data de nascimento:");
                                scanf("%s",c[i].datan);
                                break;
                            
                            case 5:
                                
                                //fflush(stdin);

                                printf("Obs:");
                                scanf("%s",c[i].obs);
                                break;
                            default:
                                printf("Essa opcao nao e valida.\n");
                                system("pause");
                                break;
                            }

                        }

                          else
                        {
                            printf("O nome nao existe ou esta incorreto.\n");
                            system("pause");
                        }  
                        
 
                    }
                        
                        break;

                case 3: //Função Excluir
                
                    printf("Digite o numero do contato:");
                    scanf("%s",excluir);

                for(i=0;i<a;i++)
                {
                    if (strcmp (excluir,c[i].nome) == 0)
                    {
                        
                        for(i; i<=a; i++)
                        {
                             a++;
                        } 
                    }
                }

                case 4: // Função listar

                fflush(stdin);

                for(i=0; i<a; i++)
                {

                    printf("Contato %i\n ", i+1);
                    printf("Nome: %s\n",c[i].nome);
                    printf(" \n");
                    printf("_______________________\n");
                    

                }

                    system("pause");

                break;

                case 5: // Função buscar

                
                    printf("Digite o nome do contato:");
                    scanf("%s",busca); 

                for(i=0; i<=a; i++) 
                {

                    if (strcmp (busca,c[i].nome) == 0)
                    {
                            printf("Contato %i\n", i+1);
                            printf("Nome: %s\n",c[i].nome);
                            printf("Numero: %d\n",c[i].numero);
                            printf("Email: %s\n",c[i].email);
                            printf("Data de nascimento: %s\n",c[i].datan);
                            printf("Obs: %s\n",c[i].obs);

                    }
            
                }
                    system("pause");
                    
                    break;

                case 0: // funçao sair 
                    break;

                default:
                
                    printf("Voce deve escolher uma das 6 opcoes\n");

                    system("pause");
                
                    break;
                
            }

        
        

        
    }


}