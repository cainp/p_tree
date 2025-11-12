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
No* inserir_no(No* raiz, int valor) {
    if (raiz == NULL) {
        return criar_novo_no(valor);
    }
    if (valor < raiz->dado) {
        raiz->esquerda = inserir_no(raiz->esquerda, valor);
    } else if (valor > raiz->dado) {
        raiz->direita = inserir_no(raiz->direita, valor);
    }
    return raiz;
}

int altura(No* raiz) {
    if (raiz == NULL) {
        return -1;
    }
    int altura_esquerda = altura(raiz->esquerda);
    int altura_direita = altura(raiz->direita);

    if (altura_esquerda > altura_direita) {
        return altura_esquerda + 1;
    } else {
        return altura_direita + 1;
    }
}

void pre_ordem(No* raiz) {
    if (raiz != NULL) {
        printf("%d, ", raiz->dado);
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}

void em_ordem(No* raiz) {
    if (raiz != NULL) {
        em_ordem(raiz->esquerda);
        printf("%d, ", raiz->dado);
        em_ordem(raiz->direita);
    }
}

void pos_ordem(No* raiz) {
    if (raiz != NULL) {
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        printf("%d, ", raiz->dado);
    }
}
