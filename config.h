//
// Created by caina on 11/11/2025.
//

#ifndef P_TREE_CONFIG_H
#define P_TREE_CONFIG_H
#define TAMVT 20
#define  VMAX 500

typedef struct {
    char nome[100];
    char matricula[13];
    int ultimo_digito;
} Aluno;

typedef struct No {
    int dado;
    struct No *esquerda;
    struct No *direita;
} No;

#endif //P_TREE_CONFIG_H