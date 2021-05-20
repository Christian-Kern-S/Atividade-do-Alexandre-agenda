#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

  Pilha *p = (Pilha*)malloc(sizeof(pilha));

  enfileirar_pilha(1);
  enfileirar_pilha(2);
  enfileirar_pilha(3);
  
  exibir_pilha();

  printf("Desenfileirando:\n\n");
  printf("%i\n", desenfileirar_pilha());
  printf("%i\n", desenfileirar_pilha());
  printf("%i\n", desenfileirar_pilha());

  printf("\n\n");

  exibir_pilha();

  return 0;
}