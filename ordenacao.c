#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include "config.h"


// verifica se tem numero repetido
int ja_existe(int vetor[], int tamanho, int valor_novo) {
    for (int k = 0; k < tamanho; k++) {
        if (vetor[k] == valor_novo) {
            return 1; // Número repetido
        }
    }
    return 0; // Número inédito
}
// geração de vetores
void gerar_e_copiar_vetor(int vetor_original[], int vetor_copia[]) {
    int i = 0;
    int num_sorteado;

    while (i < TAMVT) {
        num_sorteado = (rand() % VMAX) + 1;

        if (ja_existe(vetor_original, i, num_sorteado) == 0) {
            vetor_copia[i] = num_sorteado;
            vetor_original[i] = num_sorteado;
            i++;
        }

    }
}

