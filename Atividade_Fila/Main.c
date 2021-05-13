#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

  enfileirar(1);
  enfileirar(2);
  enfileirar(3);
  desenfileirar(3);
  desenfileirar(2);
  desenfileirar(1);
  
  exibir();

  return 0;
}