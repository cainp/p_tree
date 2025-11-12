#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    return 0;
}
