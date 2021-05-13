#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int fila[TAM_FILA], ultimaPosicao=0;

void enfileirar(int valor){

  fila[ultimaPosicao] = valor;
  ultimaPosicao++;

}

int desenfileirar(int valor){
  fila[ultimaPosicao] = valor;
  ultimaPosicao--;
}

void exibir(){

  for(int i=0; i<TAM_FILA; i++){
    printf("%i\n", fila[i]);
  }

}



void vazia(int valor)
{
  return valor>ultimaPosicao;
}

void cheia(int valor){

  return valor==fila-1;
  
}