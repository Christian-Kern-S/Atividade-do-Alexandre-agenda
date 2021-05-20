#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int pilha[TAM_FILA], ultimaPosicao=0,top

void empilheirar_pilha(Pilha *p,int x){

{
  if (pilhaCheia(p) == 1)
  {
    printf("Esta pilha esta cheia\n");
  }
  else
    p->top++;
  p->pilha[p->top] = x;
}

int desenpilheirar_pilha(Pilha *p){
  
   int a;
  if (pilhaVazia(p) == 1)
  {
    printf("Esta pilha esta vazia");
  }
  else
    a = p->pilha[p->top];
  p->top--;
  return a;

}

int vazia_pilha(Pilha *p){

  if (p->top == -1)
  {
    return 1;
  }
  else
    return 0;
}

int cheia_pilha(){

if (p->top == maxtam - 1)
  {
    return 1;
  }
  else
    return 0;

}

void exibir_pilha(){

  if(vazia_pilha()){

    printf("Fila vazia!");

  }
  else{

    for(int i=0; i<ultimaPosicao; i++){
      printf("%i\n", pilha[i]);
    }

  }

}

void esvaziar_pilha(){

  // Enquanto a fila não estiver vazia
  while(!vazia_pilha()){
    desenfileirar_pilha();
  }

}