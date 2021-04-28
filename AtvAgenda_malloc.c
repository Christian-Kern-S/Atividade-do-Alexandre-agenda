#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contato
{
    int codigo;
    char nome;
    struct contato *next;
} contato;

int main()
{

    contato *p = NULL, *A, *last;
    int i;


    for(i=0;i<3;i++)
    {
        A = malloc(sizeof(contato));
        printf("Digite o codigo:");
        scanf("%d",&A->codigo);

        printf("Digite o nome:");
        scanf("%s", &A->nome);

        A->next = NULL;

        if(p == NULL)
        {
            p = A;
            last = A;
        }
        else
        {
            last->next = A;
            last=A;
        }
    }

    printf("\n__________\n");
    printf("Codigo: %d\n", p->codigo);
    printf("Nome: %s\n", p->nome);

    return 0;
}