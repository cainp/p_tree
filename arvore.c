#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

No* criar_novo_no(int valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    if (novo_no == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }
    novo_no->dado = valor;
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;
    return novo_no;
}

