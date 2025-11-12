#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "arvore.h"
#include "config.h"
#include "ordenacao.h"


void menu(Aluno aluno) {
    printf("=================================================\n");
    printf("    Atividade Avaliativa\n");
    printf("=================================================\n");
    printf("1. %s - Matricula: %s\n", aluno.nome, aluno.matricula);

}

int main() {
    Aluno grupo[1] = {
        {"Caina Pessoa e Silva","202103514405", 05}
    };

    menu(grupo[0]);

    int vetor_original[TAMVT];
    int vetor_copia[TAMVT];

    srand(time(NULL));

    printf("\n--- Geracao do Vetor Original ---\n");
    gerar_e_copiar_vetor(vetor_original, vetor_copia);

    printf("Vetor Original: [");
    for (int i = 0; i < TAMVT; i++) {
        printf("%d, ", vetor_original[i]);
    }
    printf("]\n");


    char *algoritmo_ordenacao;
    char *percurso_arvore;
    long int total_comparacoes = 0;

    int resultado_mod_3 = seleciona_algoritmo(
        grupo[0].ultimo_digito,
        &algoritmo_ordenacao,
        &percurso_arvore
    );

    printf("\n--- Determinacao do Algoritmo ---\n");
    printf("Resultado Modulo 3: %d\n", resultado_mod_3);
    printf("Algoritmo Escolhido: %s\n", algoritmo_ordenacao);
    printf("Percurso da Arvore: %s\n", percurso_arvore);
    printf("----------------------------------\n");

    insertion_sort(vetor_original, TAMVT, &total_comparacoes);

    printf("\n--- Vetor Ordenado (%s) ---\n", algoritmo_ordenacao);
    printf("Vetor Ordenado: [");
    for (int i = 0; i < TAMVT; i++) {
        printf("%d, ", vetor_original[i]);
    }
    printf("]\n");

    printf("Algoritmo Usado: %s\n", algoritmo_ordenacao);
    printf("Total de Comparacoes: %ld\n", total_comparacoes);
    printf("----------------------------------\n");

    No* raiz = NULL;

    for (int i = 0; i < TAMVT; i++) {
        raiz = inserir_no(raiz, vetor_copia[i]);
    }

    printf("\n--- Percurso da Arvore (%s) ---\n", percurso_arvore);
    printf("Percurso: [");
    pos_ordem(raiz);
    printf("]\n");

    int h = altura(raiz);
    if (h >= 0) {
        printf("Altura da Arvore Binaria: %d\n", h);
    }
    printf("----------------------------------\n");

    return 0;
}
