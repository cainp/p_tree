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
No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        return criar_novo_no(valor);
    }
    if (raiz->dado < valor) {
        raiz->esquerda = criar_novo_no(valor);
    } else if (raiz->dado > valor) {
        raiz->direita = criar_novo_no(valor);
    }
    return raiz;
}
