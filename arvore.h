#ifndef P_TREE_ARVORE_H
#define P_TREE_ARVORE_H

#include "config.h"

No* inserir_no(No* raiz, int valor);

int altura(No* raiz);

void pre_ordem(No* raiz);

void em_ordem(No* raiz);

void pos_ordem(No* raiz);

#endif //P_TREE_ARVORE_H